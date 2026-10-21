import json
import os
from pathlib import Path
import sys
import tempfile
from types import SimpleNamespace
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from ide_compdb import clang_flags, write_database


class CompilationDatabaseTests(unittest.TestCase):
    def setUp(self):
        self.old_directory = Path.cwd()
        self.temp = tempfile.TemporaryDirectory(prefix="dqix ide ")
        self.root = Path(self.temp.name)
        os.chdir(self.root)
        for name in ("include", "libs/a/include", "src/Runtime/Main", "src/Game", "tools/ide"):
            Path(name).mkdir(parents=True, exist_ok=True)
        self.sources = [Path("src/Game/test.cpp"), Path("src/Runtime/Main/test.c")]
        for source in self.sources:
            source.write_text("int sample;\n", encoding="utf-8")
        Path("build.ninja").write_text("original build\n", encoding="utf-8")
        runtime = ("Runtime", "2.0/sp2p2", ["-char", "unsigned", "-Cpp_exceptions", "on"])
        self.config = SimpleNamespace(
            args=SimpleNamespace(version="jpn"),
            CC_FLAGS="-O2 -enum int -char signed -proc arm946e -lang=c++ -Cpp_exceptions off -RTTI off",
            CC_FLAG_OVERRIDES={}, includes=["include", "libs/a/include"],
            src_path=Path("src"), libs_path=Path("libs"), LIBRARY_BUILDS={"runtime": runtime},
            library_build=lambda path: runtime if Path("src/Runtime") in path.parents else None,
            get_c_cpp_files=lambda roots: iter(self.sources),
        )

    def tearDown(self):
        os.chdir(self.old_directory)
        self.temp.cleanup()

    def database(self, **kwargs):
        path, count = write_database(self.config, **kwargs)
        entries = json.loads(path.read_text(encoding="utf-8"))
        self.assertEqual(count, len(entries))
        self.assertEqual(Path("build.ninja").read_text(encoding="utf-8"), "original build\n")
        return entries

    def test_regions_and_absolute_paths_with_spaces(self):
        for region, expected in (("usa", ["-Dusa"]), ("jpn", ["-Djpn"]), ("eur", ["-Dusa", "-Deur"])):
            self.config.args.version = region
            entry = self.database(compiler="LLVM folder/clang.exe")[0]
            self.assertEqual(entry["directory"], str(self.root))
            self.assertTrue(Path(entry["file"]).is_absolute())
            args = entry["arguments"]
            self.assertEqual(args[0], str(self.root / "LLVM folder/clang.exe"))
            self.assertEqual([arg for arg in args if arg in ("-Dusa", "-Djpn", "-Deur")], expected)
            self.assertIn(str(self.root / "libs/a/include"), args)
            self.assertIn("--target=arm-none-eabi", args)
            self.assertIn("-fsyntax-only", args)
            self.assertIn("-ffreestanding", args)
            self.assertIn("-std=gnu++11", args)
            self.assertIn("-U__MWERKS__", args)
            self.assertNotIn("-O2", args)

    def test_library_overrides_and_c_language(self):
        entry = self.database()[1]
        args = entry["arguments"]
        self.assertGreater(args.index("-funsigned-char"), args.index("-fsigned-char"))
        self.assertGreater(args.index("-fexceptions"), args.index("-fno-exceptions"))
        self.assertEqual(args[-4:-2], ["-x", "c"])
        self.assertIn("-std=gnu99", args)
        self.config.CC_FLAG_OVERRIDES[self.sources[1].as_posix()] = ["-char", "signed", "-d", "LOCAL=7"]
        args = self.database()[1]["arguments"]
        self.assertEqual([a for a in args if a in ("-fsigned-char", "-funsigned-char")][-1], "-fsigned-char")
        self.assertIn("LOCAL=7", args)

    def test_external_candidates_and_duplicate_source(self):
        candidate = self.root / "candidate with spaces.cpp"
        candidate.write_text("int candidate;\n", encoding="utf-8")
        entries = self.database(extra_sources=[candidate, candidate, self.sources[0]], extra_build="runtime")
        self.assertEqual(len(entries), 3)
        self.assertIn("-funsigned-char", entries[-1]["arguments"])
        self.assertNotIn("-funsigned-char", entries[0]["arguments"])
        self.assertEqual(candidate.read_text(encoding="utf-8"), "int candidate;\n")

    def test_invalid_candidate_preserves_existing_database(self):
        self.database()
        before = Path("compile_commands.json").read_bytes()
        with self.assertRaises(ValueError):
            self.database(extra_sources=[Path("missing.cpp")])
        self.assertEqual(Path("compile_commands.json").read_bytes(), before)
        with self.assertRaises(ValueError):
            self.database(extra_build="typo")

    def test_flag_translation_keeps_definitions_and_include_arguments(self):
        self.assertEqual(clang_flags(["-d", "NAME=1", "-i", "path with spaces", "-DOTHER=2", "-Ilocal"]),
                         ["-D", "NAME=1", "-I", "path with spaces", "-DOTHER=2", "-Ilocal"])
        with self.assertRaises(ValueError):
            clang_flags(["-char", "unknown"])
        with self.assertRaises(ValueError):
            clang_flags(["-d"])


if __name__ == "__main__":
    unittest.main()
