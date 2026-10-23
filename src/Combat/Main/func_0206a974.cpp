#include <globaldefs.h>
#include "std_library_functions.h"
#if defined(jpn)
#include "Resource/MessageSystem.h"
extern "C" int func_020d2ff0(const char*);
extern "C" void func_0206aa28(void*);

// JPN: func_0206c570
extern "C" ARM void func_0206c570(void* arg0, const char* arg1) {
    Struct_02021b84* var0 = static_cast<Struct_02021b84*>(arg0);
    if (arg1 == NULL) return;
    {
        void* var1 = var0->unknown_14_;
        memcpy(var1, arg1, (var0->unknown_34_ = func_020d2ff0(arg1)));
    }
    {
        unsigned short* var2 = static_cast<unsigned short*>(var0->unknown_14_);
        var0->unknown_24_ = var2;
        var0->unknown_20_ = var2;
    }
    memset(var0->unknown_4c_, 0, 0x140);
    memset(var0->unknown_1c_, 0, 0x140);
    func_0206aa28(arg0);
}
#else

extern "C" int func_020d2ff0(const char* arg0);

extern "C" void func_0206aa28(void* arg0);
extern "C" void func_0206b974(void* arg0, int arg1, void* arg2, void* arg3, int arg4, int arg5, int arg6, int arg7);

struct Struct_0204500c_3 {
    char unknown_0_[0x48];
    void* unknown_48_;
    void* unknown_4c_;
    void* unknown_50_;
    void* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[4];
    void* unknown_60_;
    char unknown_64_[4];
    int unknown_68_;
};

// USA: func_0206a974
extern "C" ARM void func_0206a974(struct Struct_0204500c_3* arg0, const char* arg1, int arg2) {
    if (arg1 == 0) return;
    {
        void* var0 = arg0->unknown_48_;
        memcpy(var0, (void*)arg1, (arg0->unknown_68_ = func_020d2ff0(arg1)));
    }
    {
        void* var1 = arg0->unknown_48_;
        arg0->unknown_58_ = var1;
        arg0->unknown_54_ = var1;
    }
    memset(arg0->unknown_4c_, 0, 0x280);
    memset(arg0->unknown_50_, 0, 0x280);
    func_0206aa28(arg0);
    func_0206b974(arg0, 1, arg0->unknown_50_, arg0->unknown_60_, arg2, 0, 1, 1);
    {
        int var2 = func_020d2ff0((const char*)arg0->unknown_60_);
        memcpy(arg0->unknown_50_, arg0->unknown_60_, var2);
    }
}

#endif
