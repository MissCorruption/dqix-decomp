# CLion navigation
The existing CodeWarrior/Ninja build remains authoritative. This optional project model lets Clang index the original C/C++ files for Go to Declaration/Definition (`Ctrl+B`), Find Usages (`Alt+F7`) and symbol navigation. It does not rewrite source, link a host executable or build a replacement ROM.
## Setup on Windows or Linux
Install LLVM/Clang in the same environment as the checkout. In CLion, create/select a toolchain using its `clang` and `clang++` executables. This project uses Clang's 32-bit ARM target, not the host's 64-bit ABI. No custom compiler YAML is required: CodeWarrior's relevant flags are translated into Clang flags for indexing.
From the decomp repository root, run:
```console
python tools/configure.py jpn --ide
```
For a Clang installation outside `PATH`, pass its executable (quote paths containing spaces):
```console
python tools/configure.py jpn --ide --ide-compiler "C:/Program Files/LLVM/bin/clang.exe"
```
Open the generated `compile_commands.json` with **File > Open > Open as Project**. In **Settings > Build, Execution, Deployment > Compilation Database**, select the matching LLVM toolchain. Wait for indexing, then try `AlphaTween::Advance` in `src/Graphics/AlphaTween.cpp`: `Ctrl+B` links it with `include/Graphics/AlphaTween.h`, and `Alt+F7` finds its uses.
Use `usa`, `jpn` or `eur`. Only one region is active in the database; EUR defines both `usa` and `eur`, as the real build does. Regenerate after changing region, adding/removing sources, changing flags or moving the checkout, then reload the compilation database (`Ctrl+Shift+O`). Paths are absolute and machine-specific; the database and `.idea/` are ignored by Git.
The generation step requires only the repository's Python setup. It does not require a ROM, BIOS, CodeWarrior installation or completed build, and does not overwrite `build.ninja`.
## Kit candidates
The companion kit's `clion.py` invokes the same generator using `kitpaths.REPO`. It can add individual work-in-progress files without changing them:
```console
python clion.py jpn --source ../dqix-kit-state/wip/ov017/example.cpp
```
Alternatively, from the decomp root:
```console
python tools/configure.py jpn --ide --ide-source ../dqix-kit-state/wip/ov017/example.cpp --ide-build game
```
Repeat the source option for multiple candidates. `--ide-build` selects the build family for external candidates: `game` (default), `sdk`, `msl`, `runtime`, `network`, `video` or `wifi`. In the kit wrapper it is named `--build`. Avoid including multiple competing definitions of the same function: an IDE can then offer multiple destinations. Tracked sources always retain their own library/per-file settings.
## Scope and limitations
The database covers the C/C++ sources enumerated by `configure.py`, including the library sources. It preserves include paths, region macros, C versus C++, signedness and the parse-relevant library/per-file overrides. The forced header under `tools/ide/` handles CodeWarrior section annotations and its clear-memory builtin only for indexing. `__MWERKS__` stays undefined so existing IDE alternatives such as `COPY_ARRAY` remain usable.
The indexing model uses freestanding C99/C++11. C++11 is needed only because Clang otherwise rejects the non-trivial union members that CodeWarrior accepts as a C++03 extension (for example, the matrix types). This does not upgrade the real compiler or permit new C++11 features in matching sources. Some union assignments can still be diagnosed as deleted by Clang while their members remain navigable.
CodeWarrior inline assembly and other compiler-only syntax can still produce diagnostics in Clang. Assembly instructions, linker-only symbols and references that exist only in ROM/config files are not C/C++ semantic references. Inactive regional branches are not indexed as active code. This setup therefore does not promise navigation for every assembly instruction or an error-free Clang build.
CLion's **Recompile** runs an indexing command with `-fsyntax-only`; it is not a matching check. Continue to use the original `configure.py` invocation without `--ide`, Ninja, the kit gates and objdiff for actual compilation and matching. Custom Compiler YAML alone supplies compiler information to CLion; it cannot teach Clang CodeWarrior's assembly grammar.
## Verification
On upstream `640a7285b4405f5a767d74ce783ee5d5481c3aaa`, libclang 18.1.1 parsed all 13,429 compilation units per region: 13,210 without errors for JPN and 13,209 for USA/EUR. The remaining 219/220 units report compiler-specific syntax, union assignment or existing semantic diagnostics; these counts are parsing results, not a claim that every IDE action has been tested. The definition and cross-file calls of `AlphaTween::Advance` and `SetCurrentValue` resolve to the same Clang symbol IDs, and `current` resolves to its field declaration. CLion's graphical interface has not been exercised in this environment.
Run the focused generator tests from the repository root:
```console
python -m unittest discover -s tools/tests -p test_ide_compdb.py
```
CLion documentation: [Compilation database](https://www.jetbrains.com/help/clion/compilation-database.html), [Custom compilers](https://www.jetbrains.com/help/clion/custom-compilers.html).
