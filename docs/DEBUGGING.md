# Debugging in melonDS

Step through the decompiled source while the game runs in melonDS, from CLion or VS Code.

## What you need

- The melonDS debug build from [its releases](https://github.com/ZevyaDev/melonDS/releases/latest). In
  Config > Emu settings, turn JIT off and enable the GDB stub with ARM9 on port 3333.
- `gdb-multiarch` (MSYS2: `pacman -S mingw-w64-ucrt-x86_64-gdb-multiarch`; Debian/Ubuntu:
  `apt install gdb-multiarch`).
- [dqix-debug](https://github.com/shubshub/dqix-debug) cloned beside this repository. After each build,
  `python make_dbg_elf.py` there writes `arm9_dbg.elf` (USA), the ELF gdb reads.

## CLion

Open this folder and run "melonDS ARM9" (`.run/`), a GDB Remote Debug configuration for
`localhost:3333` with `../dqix-debug/arm9_dbg.elf`. Set the toolchain's debugger to `gdb-multiarch`.
`.gdbinit` sets the architecture and loads `gdb_overlays.py`; gdb runs it only if `~/.gdbinit` has
`set auto-load safe-path /` (or this folder's path).

## VS Code

Install the C/C++ extension (`ms-vscode.cpptools`) and press F5 with "melonDS ARM9" from
`.vscode/launch.json`. If `gdb-multiarch` is not on the PATH, set `miDebuggerPath`.

## Use

The game pauses when gdb attaches. Breakpoints in any `.cpp`, stepping, the call stack and locals work
as usual. A breakpoint in an overlay's source stays pending until the game loads that overlay. Stop and
detach leave the game running, and gdb can attach again at any time. `monitor overlays` lists the
overlays in RAM.

melonDS's own debugger (Debug > Debugger) shows the same source in its Source dock, with the PC's line
and line breakpoints, from the line info in `build/<region>/arm9.o`.
