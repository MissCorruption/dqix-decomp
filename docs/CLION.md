# CLion navigation
For Go to Declaration/Definition (`Ctrl+B`) and Find Usages (`Alt+F7`), start with CLion's code analysis without a build project. An installed Clang compiler is not a prerequisite for this route. The existing CodeWarrior/Ninja build remains authoritative for the ROM.
## Start without a compiler or build project
Current CLion supports `c_cpp_properties.json` for custom projects and files outside a recognized build project; JetBrains documents this in the [2026.1 release notes](https://blog.jetbrains.com/clion/2026/03/2026-1-release/) and [project import help](https://www.jetbrains.com/help/clion/creating-new-project-from-scratch.html). Use CLion 2026.1 or later for these instructions.
Open the `dqix-decomp` folder with **File > Open**. Use the project status widget's **Create c_cpp_properties.json** action, or copy the supplied `tools/ide/c_cpp_properties.json` template to `.vscode/c_cpp_properties.json` under that folder. If the destination already exists, merge the relevant settings instead of overwriting it. This is a local analysis configuration; creating a CMake project, selecting a compiler executable and running a build are unnecessary for this route.
The template supplies `include/`, the JPN macro and the small IDE compatibility header. `compilerPath` is explicitly empty; there is no `compileCommands` entry or build command. C99/C++11 are parsing settings only, not a change to the matching source language. Keep `__MWERKS__` undefined so the existing IDE alternatives are used. For USA replace `jpn` in `defines` with `usa`; for EUR use both `usa` and `eur`. Keep `DQIX_IDE=1` in each case.
Let CLion index the original `src/` and `include/` trees. Existing declarations and definitions are the navigation targets: do not copy the C/C++ files, concatenate them into a single translation unit, generate replacement function bodies, or collect every `extern` into a new shared header. If a checkout has additional library header directories, add the actual directories containing the included headers to `includePath`, as `configure.py` does for `libs/**/include`.
If this folder was already opened as a compilation database project, unload that model before using the folder route. Move the locally generated `compile_commands.json` outside the project temporarily if CLion keeps detecting it, then reopen the folder without importing the database. Leave the original build files in place.
## What an extern needs
An `extern` declaration and its C/C++ definition can be associated by the IDE when both files are indexed and the declarations can be understood in the same language, namespace/linkage and preprocessor context. This requires no linker run. Include paths, region macros and parser compatibility are the relevant setup, not a second ROM compiler.
Some symbols have no C/C++ definition in this checkout. For example, `include/Graphics/GlyphMetrics.h` declares `data_020ef74c`, while its address is recorded in `config/<region>/arm9/symbols.txt`. A compiler does not turn that ROM data into a source definition. Search the exact symbol in the region's `symbols.txt` and `delinks.txt` when no source definition exists. Do not fabricate a definition to make a jump succeed.
Other declarations use approximate reconstructed types. For example, `src/Combat/Main/func_020489e8.cpp` declares `func_02048f64(void*)`, while its definition in `func_02048f64.cpp` takes `FormationPathActor*`. Whether an IDE joins such declarations must be checked on that symbol; changing compilers does not reconcile the source types. Keep matching-source changes separate from navigation setup.
## Files and placement
Paths below are relative to a common working directory. Existing checkouts need not be moved.
| Path | Purpose and handling |
| --- | --- |
| `dqix-decomp/src/`, `include/`, optional `libs/` | Original sources and headers. Index these in place. |
| `dqix-decomp/tools/ide/c_cpp_properties.json` | Versioned starter template; copy or merge into the local analysis settings. |
| `dqix-decomp/tools/ide/mwcc_compat.h` | Versioned IDE-only header; keep here so the configured path resolves. |
| `dqix-decomp/.vscode/c_cpp_properties.json` | Local region/include settings for the compiler-free route; ignored by Git. |
| `dqix-decomp/.idea/` | Local CLion settings; ignored by Git. No shared absolute paths. |
| `dqix-decomp/compile_commands.json` | Optional generated Clang model described below; ignored, machine-specific, safe to regenerate. Not needed for the folder route. |
| `dqix-decomp/tools/ide_compdb.py` | Versioned generator for the optional compilation database. |
| `dqix-decomp/tools/mwccarm/<version>/` | Original matching compiler location (unless overridden by the existing build setup). Keep the ROM toolchain here; do not replace it with Clang. |
| `dqix-decomp/build.ninja`, `build/` | Original generated build files; neither navigation route needs to modify them. |
| `dqix-decomp-kit/` | Existing matching scripts and documentation. No CLion-related changes or wrapper are required in this repository. |
| `dqix-kit-state/wip/<main-or-ovNNN>/` | Kit candidate files outside both repositories; index selected work in place, without copying it to `src/`. |
The kit resolves an existing decomp location through `DQIX_REPO`; otherwise it uses its sibling `../dqix-decomp`. Its state location is `DQIX_STATE`, then `state.path`, then sibling `../dqix-kit-state`. These settings select script paths; they do not configure CLion's analysis paths.
The template uses `${workspaceFolder}` so it can be reused on Windows or Linux. Regenerate the optional database on each machine and after moving a checkout; do not copy absolute Windows paths into a Linux/WSL project or vice versa. If using the optional Clang route, keep LLVM in its normal installation location, outside the repository.
## Work-in-progress files without changing the kit
To browse candidates alongside their decomp declarations without a compilation database, open the common parent containing the decomp and WIP locations as the CLion folder. Place the local C/C++ properties file under that parent's `.vscode/`. Adjust the template's `includePath` to `${workspaceFolder}/dqix-decomp/include` and `forcedInclude` to `${workspaceFolder}/dqix-decomp/tools/ide/mwcc_compat.h`, using your actual folder names. Existing kit installations can remain as they are.
Keep the relevant `src/`, `include/` and active WIP files in the analysis scope. Exclude attempts, archives, build outputs and alternate copies of the same functions from IDE indexing so they do not introduce competing destinations. Opening a broad parent folder can otherwise include old checkouts and kit fixtures as well. Keep the parent's `.vscode/` and `.idea/` settings local. Compiler-free candidate navigation has not been verified in the CLion UI here.
## Why the optional Clang configuration exists
The initial implementation chose a compilation database to carry the actual per-file include paths, region macros, ARM target and library flag overrides, and to make semantic checks reproducible with libclang. That was an implementation choice, not evidence that installing Clang is necessary for navigation or that it outperforms CLion's compiler-free analysis. The two routes have not been compared in the CLion UI. Requiring LLVM as the initial setup was excessive for a navigation-only task; the folder route above is the starting point.
The optional generator defaults to the `clang` driver and selects C++ with `-x c++` for `.cpp` files; it does not replace CodeWarrior with `clang++` for matching. Custom Compiler YAML is another way to describe compiler metadata to CLion, but it does not replace the IDE's parser with CodeWarrior's parser.
## Optional Clang compilation database
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
## External candidates in the optional database
Add individual work-in-progress files directly from the decomp root; no kit wrapper is needed:
```console
python tools/configure.py jpn --ide --ide-source ../dqix-kit-state/wip/ov017/example.cpp --ide-build game
```
Repeat the source option for multiple candidates. `--ide-build` selects the build family for external candidates: `game` (default), `sdk`, `msl`, `runtime`, `network`, `video` or `wifi`. Avoid including multiple competing definitions of the same function: an IDE can then offer multiple destinations. Tracked sources always retain their own library/per-file settings. Generation replaces the database, so include the wanted candidates each time.
## Optional database scope and limitations
The database covers the C/C++ sources enumerated by `configure.py`, including the library sources. It preserves include paths, region macros, C versus C++, signedness and the parse-relevant library/per-file overrides. The forced header under `tools/ide/` handles CodeWarrior section annotations and its clear-memory builtin only for indexing. `__MWERKS__` stays undefined so existing IDE alternatives such as `COPY_ARRAY` remain usable.
The indexing model uses freestanding C99/C++11. C++11 is needed only because Clang otherwise rejects the non-trivial union members that CodeWarrior accepts as a C++03 extension (for example, the matrix types). This does not upgrade the real compiler or permit new C++11 features in matching sources. Some union assignments can still be diagnosed as deleted by Clang while their members remain navigable.
CodeWarrior inline assembly and other compiler-only syntax can still produce diagnostics in Clang. Assembly instructions, linker-only symbols and references that exist only in ROM/config files are not C/C++ semantic references. Inactive regional branches are not indexed as active code. This setup therefore does not promise navigation for every assembly instruction or an error-free Clang build.
CLion's **Recompile** runs an indexing command with `-fsyntax-only`; it is not a matching check. Continue to use the original `configure.py` invocation without `--ide`, Ninja, the kit gates and objdiff for actual compilation and matching. Custom Compiler YAML alone supplies compiler information to CLion; it cannot teach Clang CodeWarrior's assembly grammar.
## Verification status
The compiler-free template has been checked for valid JSON and repository paths. CLion's UI, project-wide `extern` resolution and interpretation of every imported C/C++ properties field have not been exercised here. The results below apply only to the optional libclang model, not to the compiler-free route or the CLion Nova engine.
On upstream `640a7285b4405f5a767d74ce783ee5d5481c3aaa`, libclang 18.1.1 parsed all 13,429 compilation units per region: 13,210 without errors for JPN and 13,209 for USA/EUR. The remaining 219/220 units report compiler-specific syntax, union assignment or existing semantic diagnostics; these counts are parsing results, not a claim that every IDE action has been tested. The definition and cross-file calls of `AlphaTween::Advance` and `SetCurrentValue` resolve to the same Clang symbol IDs, and `current` resolves to its field declaration. CLion's graphical interface has not been exercised in this environment.
Run the focused generator tests from the repository root:
```console
python -m unittest discover -s tools/tests -p test_ide_compdb.py
```
CLion documentation: [Compilation database](https://www.jetbrains.com/help/clion/compilation-database.html), [Custom compilers](https://www.jetbrains.com/help/clion/custom-compilers.html).
