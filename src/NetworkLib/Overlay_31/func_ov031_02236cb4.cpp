#include <globaldefs.h>

struct Struct_ov031_02222f44_2;
extern "C" void func_ov031_0223bd28(Struct_ov031_02222f44_2* arg0, int arg1, unsigned int* arg2, unsigned int* arg3);

struct Struct_ov031_0224926a_4 { unsigned short unknown_0_; unsigned short unknown_2_; };
extern Struct_ov031_0224926a_4 data_ov031_0224926a[];

struct Struct_ov031_02236cb4 { void* unknown_0_[5]; int unknown_14_; };
struct Struct_ov031_02290d04_5 { char unknown_0_[4]; Struct_ov031_02236cb4* unknown_4_; };
extern Struct_ov031_02290d04_5 data_ov031_02290d04;

extern "C" void func_ov031_0223bbd8(void*, int, int, int);
extern "C" void func_ov031_0223e2b8(void*, int);
extern "C" void func_ov031_02236d98(void*);

// USA: func_ov031_02236cb4
extern "C" ARM void func_ov031_02236cb4(void* arg0) {
    int var0;
    unsigned int var1;
    func_ov031_0223bd28((Struct_ov031_02222f44_2*)data_ov031_02290d04.unknown_4_->unknown_0_[3], 0, (unsigned int*)&var0, &var1);
    var0 += 8;
    if (var0 < 0x98 || var0 > 0x100) {
        int var2 = 3;
        do {
            Struct_ov031_0224926a_4* var3 = &data_ov031_0224926a[var2];
            void* var4 = data_ov031_02290d04.unknown_4_->unknown_0_[var2];
            unsigned short var5 = var3->unknown_2_;
            func_ov031_0223bbd8(var4, -1, var0, var5);
            var2++;
        } while (var2 < 5);
        return;
    }
    var0 = 0x98;
    int var6 = 3;
    do {
        Struct_ov031_0224926a_4* var7 = &data_ov031_0224926a[var6];
        void* var8 = data_ov031_02290d04.unknown_4_->unknown_0_[var6];
        unsigned short var9 = var7->unknown_2_;
        func_ov031_0223bbd8(var8, -1, var0, var9);
        var6++;
    } while (var6 < 5);
    func_ov031_0223e2b8(arg0, (int)func_ov031_02236d98);
}
