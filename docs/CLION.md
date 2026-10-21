# CLion navigation
Open the repository folder in CLion 2026.1 or later. The committed `.idea/c_cpp_properties.json` supplies the analysis settings directly.<br>
No setup command, generated compilation database, template copy, compiler installation or kit change is needed.<br>

To start navigating code in CLion, create a JetBrains account, download CLion, and select **Non-commercial use** as the license type.<br>
Also, please note that a 30-day free trial may be activated automatically when you launch CLion for the first time with your account.<br>
This trial is available only once per lifetime, so please keep that in mind.<br>


https://www.jetbrains.com/clion/download/

## Files and analysis scope
| Path | Role |
| --- | --- |
| `.idea/c_cpp_properties.json` | Automatically discovered C/C++ analysis settings. Tracked in Git, with workspace-relative paths. |
| `tools/ide/mwcc_compat.h` | Fixed, IDE-only forced include configured for every analyzed source. Handles CodeWarrior section annotations and its clear-memory builtin. |
| `src/` | Original C/C++ definitions and uses, indexed in place. |
| `include/` | Original headers and declarations, provided as an include directory. |
| Other `.idea/` files, `.vscode/` except `launch.json` | Local IDE preferences, ignored by Git. |
| `tools/configure.py`, `build.ninja`, `tools/mwccarm/` | Existing ROM build setup and compiler; not used to configure this navigation setup. |
| Sibling `dqix-decomp-kit/` | Existing matching tools; no CLion additions are required. |
| Sibling `dqix-kit-state/wip/` | Optional candidate sources; keep them outside the decomp's `src/`. |

The analysis configuration has an empty `compilerPath` and no `compileCommands` entry.<br>
It supplies `includePath`, region macros and the fixed `forcedInclude`; its browse scope covers `src/` and `include/` with `limitSymbolsToIncludedHeaders` disabled.<br>
Source files are not enumerated in generated commands, so adding a source does not require regeneration.<br>
CLion's language engine performs the actual indexing and reference resolution.<br>

The forced header supplies parser compatibility for each source independently.<br>
It does not include all `.cpp` files into one translation unit or synthesize declarations and definitions.<br>
This keeps separate file-local types, static functions and alternate implementations from being merged accidentally.<br>
The header is guarded by `DQIX_IDE` and rejects use with CodeWarrior's `__MWERKS__` macro.<br>

## Region and use
The committed configuration selects JPN.<br>
For USA, replace `jpn` in `defines` with `usa`; for EUR, use both `usa` and `eur`.<br>
Keep `DQIX_IDE=1`.<br>
C99/C++11 are IDE parsing settings only; matching sources still follow the real compiler's language rules.<br>
`__MWERKS__` stays undefined so the source's existing IDE alternatives are active.<br>

After opening the folder and allowing indexing to finish, use `Ctrl+B` for declarations/definitions and `Alt+F7` for Find Usages.<br>
`AlphaTween::Advance` in `src/Graphics/AlphaTween.cpp`, its declaration in `include/Graphics/AlphaTween.h` and calls in `src/Combat/Main/func_020489e8.cpp` provide a concrete cross-file check.<br>

## External work-in-progress files
To browse a kit candidate together with the decomp, open their common parent folder in CLion.<br>
Put the analysis configuration in that parent's `.idea/c_cpp_properties.json`; adjust the include and forced-header paths to `${workspaceFolder}/dqix-decomp/include` and `${workspaceFolder}/dqix-decomp/tools/ide/mwcc_compat.h`.<br>
Adjust the browse paths to the decomp's `src/`, `include/` and the active WIP directory.<br>
Use the actual directory names when they differ.<br>

Keep attempts, archives, build outputs and competing copies of a function outside the IDE's indexing scope.<br>
The kit's `DQIX_REPO` and `DQIX_STATE` settings resolve its script paths; they do not configure CLion.<br>
No source copying, kit wrapper or kit modification is required.<br>
If a checkout contains additional `libs/**/include` directories, add those actual header directories to the analysis include paths.<br>

## Limits and verification
Existing `extern` declarations can be associated with C/C++ definitions when the IDE indexes both sides with compatible types, linkage and preprocessor context.<br>
This does not need a compiler or linker run.<br>
A fixed forced include supplies parsing context; it cannot create a missing definition or guarantee that inconsistent reconstructed declarations are treated as one symbol.<br>
The configuration's JSON, paths, source-directory coverage and Git inclusion have been checked. CLion's graphical interface and its handling of every imported properties field have not been exercised here; project-wide navigation is not claimed as verified. CodeWarrior assembly syntax can still produce IDE diagnostics, and this configuration does not reproduce every per-file ABI/compiler flag or replace ROM matching checks.
References: [CLion custom-project support](https://blog.jetbrains.com/clion/2026/03/2026-1-release/), [CLion project import](https://www.jetbrains.com/help/clion/creating-new-project-from-scratch.html), [C/C++ properties reference](https://code.visualstudio.com/docs/cpp/customize-cpp-settings).
