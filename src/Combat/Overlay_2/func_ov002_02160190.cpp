#include <globaldefs.h>

#if defined(jpn)
enum { CursorOffset = 0x1ace };
#else
enum { CursorOffset = 0x1c06 };
#endif

extern "C" int func_02041c08(char* dst, int a1, int a2, int a3, int a4, int a5);
extern "C" int func_02041ea4(char* dst, int cursor);

// USA: func_ov002_02160190
extern "C" ARM void func_ov002_02160190(char* base, char* dst, int flag) {
    if (flag) {
        int cursor = *(short*)(base + CursorOffset);
        func_02041c08(dst, cursor, 8, 5, 5, 5);
    }
    int cursor2 = *(short*)(base + CursorOffset);
    func_02041ea4(dst, cursor2);
}
