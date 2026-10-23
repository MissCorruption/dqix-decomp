#include <globaldefs.h>

extern "C" int func_02003c80(char* arg0, int arg1, const char* arg2, void* arg3);

// KEEP-NAME: the ROM symbol is the C library name, not a func_ tag.
// USA: func_02003ce8
// The `...` makes mwccarm home r0-r3 on entry; the argument list then starts one
// word past the (word-aligned) address of `fmt`, which is what the ROM computes.
extern "C" ARM int sprintf(char* arg0, const char* arg1, ...) {
    const char** var0 = (const char**)((unsigned int)&arg1 & ~3u);
    return func_02003c80(arg0, -1, arg1, (void*)(var0 + 1));
}
