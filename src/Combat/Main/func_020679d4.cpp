#include <globaldefs.h>

#if defined(jpn)
#include "Resource/MessageSystem.h"
#define func_020679d4 func_02069294
#else
enum { Enum_020679d4_88 = 0x58, Enum_020679d4_144 = 0x90, Enum_020679d4_6605 = 0x19cd, Enum_020679d4_64 = 0x40, Enum_020679d4_2388 = 0x954 };
#endif

struct Struct_02108760;

extern "C" void func_0206b104(void* arg0);
#if defined(jpn)
extern "C" void func_0206cbe8(void*, unsigned short, unsigned short*);
#else
struct Struct_020678bc;
extern "C" void func_0206b2c8(Struct_020678bc*, int, void*);
#endif
#if defined(jpn)
extern "C" void func_0205c840(char* arg0);
#define func_0205c840(p) func_0205c840((char*)(p))
#else
extern "C" void func_0205c840(char* arg0);
#endif
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern char data_02108760;

// JPN: func_02069294
// USA: func_020679d4
#if defined(jpn)
extern "C" ARM void func_020679d4(Struct_02021b84* arg0, int arg1) {
#else
extern "C" ARM void func_020679d4(char* arg0, int arg1) {
#endif
    switch (arg1) {
    case 0:
        func_0206b104(arg0);
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
#if defined(jpn)
        func_0206cbe8(arg0, 0xff16, arg0->unknown_24_);
#else
        func_0206b2c8((Struct_020678bc*)arg0, 0xff16, *(void**)(arg0 + Enum_020679d4_88));
#endif
#if defined(jpn)
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
#else
        func_0205c840(arg0 + Enum_020679d4_144);
        *(unsigned char*)(arg0 + Enum_020679d4_6605) = 1;
        *(int*)(arg0 + Enum_020679d4_64) = 0;
#endif
        return;
    case 1:
        func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
    case -2:
#if defined(jpn)
        arg0->unknown_94c_[2] = 1;
#else
        *(int*)(arg0 + Enum_020679d4_2388) = 1;
#endif
        func_0206b104(arg0);
#if defined(jpn)
        func_0206cbe8(arg0, 0xff17, arg0->unknown_24_);
#else
        func_0206b2c8((Struct_020678bc*)arg0, 0xff17, *(void**)(arg0 + Enum_020679d4_88));
#endif
#if defined(jpn)
        func_0205c840(arg0->unknown_50_);
        arg0->unknown_19cd_ = 1;
        arg0->unknown_40_ = 0;
#else
        func_0205c840(arg0 + Enum_020679d4_144);
        *(unsigned char*)(arg0 + Enum_020679d4_6605) = 1;
        *(int*)(arg0 + Enum_020679d4_64) = 0;
#endif
        return;
    default:
        return;
    }
}

#if defined(jpn)
#undef func_020679d4
#undef func_0205c840
#endif
