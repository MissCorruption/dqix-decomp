#include <globaldefs.h>
#include "std_library_functions.h"
#if defined(jpn)
#include "Resource/MessageSystem.h"
extern "C" unsigned short* func_0206c730(void*, unsigned short, unsigned short*);
extern "C" void func_02043204(char*);
extern "C" void func_02043124(void*);
extern "C" void func_0206b104(void*);
extern "C" void func_0206aa28(void*);

// JPN: func_0206cbe8
extern "C" ARM void func_0206cbe8(void* arg0, unsigned short arg1, unsigned short* arg2) {
    Struct_02021b84* var0 = static_cast<Struct_02021b84*>(arg0);
    char* var1 = static_cast<char*>(arg0);
    unsigned short* var2 = func_0206c730(arg0, arg1, arg2);
    if (var2 == NULL) {
        func_02043204(var1);
        func_02043124(arg0);
        return;
    }
    func_0206b104(arg0);
    memset(var0->unknown_4c_, 0, 0x140);
    memset(var0->unknown_1c_, 0, 0x140);
    var0->unknown_24_ = var2;
    var0->unknown_20_ = var2;
    func_0206aa28(arg0);
    var0->unknown_9a0_ = 5;
}
#else

extern "C" void* func_0206ac94(void* arg0);
extern "C" void func_02043204(char* arg0);
extern "C" void func_02043124(void* arg0);
extern "C" void func_0206b104(void* arg0);
extern "C" void func_0206aa28(void* arg0);
extern "C" void func_0206b974(void* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);
extern "C" int func_020d2ff0(const char* arg0);

struct Struct_020678bc {
    char unknown_0_[0x4c];
    void* unknown_4c_;
    void* unknown_50_;
    void* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[4];
    void* unknown_60_;
    char unknown_64_[0x93c];
    int unknown_9a0_;
};

// USA: func_0206b2c8
extern "C" ARM void func_0206b2c8(Struct_020678bc* arg0, int, void*) {
    void* var0 = func_0206ac94(arg0);
    if (var0 == NULL) {
        func_02043204((char*)arg0);
        func_02043124(arg0);
        return;
    }

    func_0206b104(arg0);
    memset(arg0->unknown_4c_, 0, 0x280);
    memset(arg0->unknown_50_, 0, 0x280);
    arg0->unknown_58_ = var0;
    arg0->unknown_54_ = var0;
    arg0->unknown_9a0_ = 5;
    func_0206aa28(arg0);
    func_0206b974(arg0, 1, arg0->unknown_50_, arg0->unknown_60_, 0xe3, 0, 1, 1);
    int var1 = func_020d2ff0((const char*)arg0->unknown_60_);
    memcpy(arg0->unknown_50_, arg0->unknown_60_, var1);
}

#endif
