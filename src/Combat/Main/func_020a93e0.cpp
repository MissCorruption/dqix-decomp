#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

struct Struct_0201099c_6 {
    int unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    char unknown_a_[2];
    int unknown_c_;
    short unknown_10_;
    char unknown_12_[2];
    int unknown_14_;
    short unknown_18_;
};
extern "C" void func_02089db4(struct Struct_0201099c_6* arg0);
extern "C" void func_02089ddc(struct Struct_0201099c_6* arg0);
extern "C" void func_02089de8(void* arg0, void* arg1, const char* arg2);

struct Struct_02089fb0 {
    signed char unknown_0_;
    unsigned char unknown_1_[0x3f];
};
struct Struct_02086f24_5 {
    struct Struct_02089fb0* unknown_0_;
    short unknown_4_;
};
extern "C" struct Struct_02089fb0* func_02089fb0(struct Struct_02086f24_5* arg0, int arg1);

extern "C" int func_020426bc(char* arg0, unsigned char* arg1, int arg2);

extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);
extern "C" void func_02012da4(AllocatorUnion* arg0, void* arg1);
extern AllocatorUnion data_02114e20;

struct Struct_020a93e0 {
    unsigned char unknown_0_[0x13f];
    unsigned char unknown_13f_0_ : 3;
};

// USA: func_020a93e0
extern "C" ARM void func_020a93e0(char* arg0) {
    char* var0;
    int var1;
    int var2;
    for (var2 = 0; var2 < 13; var2++) {
        char* var3 = arg0 + var2 * 0x23c;
        if (((struct Struct_020a93e0*)var3)->unknown_13f_0_ != 0) {
            struct Struct_0201099c_6 var4;
            SafeAllocator var5;
            var5.ResetAllocatorPointer();
            var5.ResetAllocatorPointer();
            void* var6 = func_02012d88(&data_02114e20, 0x800);
            var5.CreateTypeA(var6, 0x800);
            func_02089db4(&var4);
            func_02089de8(&var4, &var5, 0);
            var1 = *(unsigned char*)(arg0 + 0x1d11) + *(unsigned char*)(arg0 + 0x1d0c);
            for (; var2 < var1; var2++) {
                var0 = arg0 + var2 * 0x23c;
                int var7 = ((struct Struct_020a93e0*)var0)->unknown_13f_0_;
                if (var7 != 0) {
                    struct Struct_02089fb0* var8 = func_02089fb0(
                        (struct Struct_02086f24_5*)&var4, (short)(var7 + 7));
                    char* var9 = *(char**)((char*)var8 + 4);
                    func_020426bc(var9, (unsigned char*)(var0 + 0x140), 1);
                }
            }
            SignedAllocatorHeader* var10 = var5.GetSignedAllocator();
            func_02089ddc(&var4);
            var5.Destroy();
            func_02012da4(&data_02114e20, var10);
            return;
        }
    }
}
