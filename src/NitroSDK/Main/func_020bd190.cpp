#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

struct Struct_020bbf84_2;

int NitroVM_ReadSync(NitroVM* vm, void* dst, int capacity);
int NitroVM_Seek(NitroVM* vm, int position, int whence);
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);
extern "C" void func_020bd8f0(void*, void*, void*);
extern "C" void func_020bd8fc(void*, void*, void*);
extern "C" void func_020bd908(void*, void*, void*);

struct Struct_020bd190 {
    char unknown_0_[0x10];
    unsigned long unknown_10_;
    unsigned long unknown_14_;
    unsigned long unknown_18_;
    unsigned long unknown_1c_;
    unsigned long unknown_20_;
    unsigned long unknown_24_;
    unsigned long unknown_28_;
    unsigned long unknown_2c_;
};

struct Struct_020bd190_2 {
    Struct_020bd190 unknown_0_;
    int unknown_30_;
    NitroVM unknown_34_;
    char unknown_7c_[8];
    void* unknown_84_;
    void* unknown_88_;
    void* unknown_8c_;
    long unknown_90_;
};

// USA: func_020bd190
extern "C" ARM int func_020bd190(Struct_020bd190_2* arg0, Struct_020bbf84_2* arg1, int arg2) {
    int var0;
    long var1;

    var0 = NitroVM_Seek(&arg0->unknown_34_, 0, 0);
    if (!var0)
        return 0;

    var1 = NitroVM_ReadSync(&arg0->unknown_34_, &arg0->unknown_0_, sizeof(arg0->unknown_0_));
    if (var1 != sizeof(arg0->unknown_0_))
        return 0;

    if (arg1 != NULL) {
        arg0->unknown_8c_ = func_020bda58(arg1, arg0->unknown_0_.unknown_1c_, (Type_020bbf84)func_020bd8f0, (int)arg0, 0);
        if (arg0->unknown_8c_ == NULL)
            return 0;

        var0 = NitroVM_Seek(&arg0->unknown_34_, (long)arg0->unknown_0_.unknown_18_, 0);
        if (!var0)
            return 0;

        var1 = NitroVM_ReadSync(&arg0->unknown_34_, arg0->unknown_8c_, (long)arg0->unknown_0_.unknown_1c_);
        if (var1 != arg0->unknown_0_.unknown_1c_)
            return 0;

        arg0->unknown_84_ = func_020bda58(arg1, arg0->unknown_0_.unknown_24_, (Type_020bbf84)func_020bd8fc, (int)arg0, 0);
        if (arg0->unknown_84_ == NULL)
            return 0;

        var0 = NitroVM_Seek(&arg0->unknown_34_, (long)arg0->unknown_0_.unknown_20_, 0);
        if (!var0)
            return 0;

        var1 = NitroVM_ReadSync(&arg0->unknown_34_, arg0->unknown_84_, (long)arg0->unknown_0_.unknown_24_);
        if (var1 != arg0->unknown_0_.unknown_24_)
            return 0;

        if (arg2 && arg0->unknown_0_.unknown_14_ > 0) {
            arg0->unknown_88_ = func_020bda58(arg1, arg0->unknown_0_.unknown_14_, (Type_020bbf84)func_020bd908,
                                                       (int)arg0, 0);
            if (arg0->unknown_88_ == NULL)
                return 0;

            var0 = NitroVM_Seek(&arg0->unknown_34_, (long)arg0->unknown_0_.unknown_10_, 0);
            if (!var0)
                return 0;

            var1 = NitroVM_ReadSync(&arg0->unknown_34_, arg0->unknown_88_, (long)arg0->unknown_0_.unknown_14_);
            if (var1 != arg0->unknown_0_.unknown_14_)
                return 0;
        }
    }
    return 1;
}
