#include <globaldefs.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

#if defined(jpn)
enum { Enum_02016db4_1140 = 0x494, Enum_02016db4_1092 = 0x464 };
#else
enum { Enum_02016db4_1140 = 0x474, Enum_02016db4_1092 = 0x444 };
#endif

extern "C" void func_020c51a4(int arg0);
extern "C" void func_02016e14(void* arg0, void* arg1, void* arg2, int arg3);

// USA: func_02016db4
extern "C" ARM void func_02016db4(void* arg0, void* arg1) {
    *(int*)0x4000444 = 0;
    if (*(short*)((char*)arg0 + Enum_02016db4_1140) != 0) {
        func_020c51a4((int)((char*)arg0 + Enum_02016db4_1092));
    }
    func_02016e14(arg0, arg1, *(void**)((char*)arg1 + 0x44), 0);
    *(int*)0x4000448 = 1;
}
