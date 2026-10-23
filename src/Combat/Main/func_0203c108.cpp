#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
#if !defined(jpn)
extern "C" void func_0203c5a8(void* arg0, void* arg1, short* arg2);
#endif
extern void* data_02105244;

extern "C" void func_0203c198(char* arg0);

struct Struct_0203c108;
extern "C" void func_0203c6b8(struct Struct_0203c108* arg0, short arg1);

struct Struct_0203c108_2;
#if defined(jpn)
extern "C" void func_0203cbe4(struct Struct_0203c108_2* arg0, const short* arg1);
#else
extern "C" void func_0203c6fc(struct Struct_0203c108_2* arg0, short arg1);
#endif

#if defined(jpn)
extern "C" void func_0203cb58(void*, void*);
extern "C" void func_0203bf00(void*, char*, void*, int);
extern "C" void func_0203c5a8(void*, void*, void*, int);
#endif
struct Struct_0203c108_3 {
    char unknown_0_[0x14];
    short unknown_14_;
};

// USA: func_0203c108
extern "C" ARM void func_0203c108(struct Struct_0203c108_3* arg0, char* arg1) {
    if (data_02105244 != NULL && arg1 != NULL && *arg1 != 0) {
#if defined(jpn)
        char var0[0x14];
        char var1[0x80];
        memcpy(var0, arg0, 0x14);
        func_0203cb58(data_02105244, var0);
        func_0203c198((char*)arg0);
        __clear(var1, 0x80);
        func_0203bf00(arg0, arg1, var1, 10);
        *(int*)((char*)arg0 + 0x20) = 10;
        func_0203c5a8(data_02105244, var1, arg0, 10);
        func_0203cbe4(static_cast<Struct_0203c108_2*>(data_02105244),
                               reinterpret_cast<const short*>(var0));
#else
        char var2[0x100];
        __clear(var2, 0x100);
        sprintf(var2, arg1);
        short var3 = arg0->unknown_14_;
        func_0203c6b8((struct Struct_0203c108*)data_02105244, var3);
        func_0203c198((char*)arg0);
        func_0203c5a8(data_02105244, var2, &arg0->unknown_14_);
        func_0203c6fc((struct Struct_0203c108_2*)data_02105244, var3);
#endif
    }
}
