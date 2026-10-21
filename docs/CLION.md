# CLion navigation
Open the repository folder in CLion 2026.1 or later. CLion automatically discovers the root `CMakeLists.txt` and uses it to configure C/C++ code analysis and navigation.<br>
The CMake project provides source indexing, include paths, region definitions and CodeWarrior compatibility settings.<br>

To start navigating code in CLion, create a JetBrains account, download CLion, and select **Non-commercial use** as the license type.<br>
Also, please note that a 30-day free trial may be activated automatically when you launch CLion for the first time with your account.<br>
This trial is available only once per lifetime, so please keep that in mind.<br>
https://www.jetbrains.com/clion/download/

## Files and analysis scope
| Path | Role |
| --- | --- |
| `CMakeLists.txt` | Shared CMake configuration for CLion navigation, including source discovery, include directories, region macros and IDE parsing settings. |
| `.idea/` | Local CLion project settings and caches. Ignored by Git. |
| `.vscode/` | Local VS Code settings. Ignored by Git, except for explicitly tracked files such as `launch.json`. |
| `tools/ide/mwcc_compat.h` | IDE compatibility header for CodeWarrior-specific constructs. |
| `include/globaldefs.h` | Additional forced include when using an MSVC toolchain. |
| `src/` | Original C/C++ source files, indexed in place. |
| `include/` | Original headers and declarations, available through CMake include directories. |
| `tools/configure.py`, `build.ninja`, `tools/mwccarm/` | Original ROM build infrastructure. |
| Sibling `dqix-decomp-kit/` | Matching and build tools. |
| Sibling `dqix-kit-state/wip/` | External work-in-progress candidate sources. |

The CMake configuration discovers `.cpp` and `.c` files under `src/` and `.h` files under `include/` using `file(GLOB_RECURSE ... CONFIGURE_DEPENDS)`.<br>
New source files are discovered during CMake reconfiguration.<br>
The `dqix_navigation` target is an object library marked `EXCLUDE_FROM_ALL`, providing CLion with a project model for code inspection.<br>
The configuration adds `include/` to the include directories and defines `jpn` and `DQIX_IDE=1`.<br>
The compatibility header is force-included for each translation unit. MSVC toolchains additionally force-include `include/globaldefs.h`.<br>
Each source remains an independent translation unit, preserving file-local types, static functions and declarations.<br>
CLion's language engine uses this configuration for indexing, navigation and reference resolution.<br>

## Region and use
The default configuration selects JPN.<br>
For USA, replace `jpn` with `usa` in `target_compile_definitions`. For EUR, use both `usa` and `eur`.<br>
Keep `DQIX_IDE=1` enabled for IDE analysis.<br>
The configuration uses C99 for C sources and C++11 for C++ sources.<br>
The `__MWERKS__` macro remains undefined so the source's existing IDE alternatives are active.<br>
After opening the repository, allow CMake configuration and indexing to finish.<br>
Use `Ctrl+B` to navigate to declarations and definitions, and `Alt+F7` to find usages.<br>
For a cross-file navigation check, use `AlphaTween::Advance` in `src/Graphics/AlphaTween.cpp`, its declaration in `include/Graphics/AlphaTween.h`, and calls in `src/Combat/Main/func_020489e8.cpp`.<br>

## External work-in-progress files
External candidate sources can be included in a separate local CMake configuration for cross-file navigation.<br>
Keep candidate files in their existing sibling directories and reference their actual paths from the local CMake project.<br>
Include the relevant source files and header directories in the analysis target, then reload CMake.<br>
For checkouts containing additional `libs/**/include` directories, configure the relevant include directories through CMake.<br>
The kit's `DQIX_REPO` and `DQIX_STATE` settings continue to resolve its script paths independently.<br>

## Limits and verification
Cross-file navigation depends on CLion indexing the relevant translation units with compatible declarations, linkage and preprocessor definitions.<br>
The compatibility header provides parsing support for CodeWarrior-specific constructs. Some assembly syntax and compiler-specific extensions may still produce IDE diagnostics.<br>
This CMake project is dedicated to CLion navigation and code inspection. ROM builds and matching verification are performed using the existing kit.<br>
The configuration provides project-wide parsing settings rather than reproducing every original CodeWarrior compiler option.<br>
CLion's graphical indexing and navigation behavior have not been independently verified.<br>
References: [CLion CMake project support](https://www.jetbrains.com/help/clion/cmakelists-txt-file.html), [CLion toolchains](https://www.jetbrains.com/help/clion/how-to-create-toolchain-in-clion.html).