#include <globaldefs.h>

struct Struct_0205d81c;

extern "C" struct Struct_0205d0e0* func_0205d81c(struct Struct_0205d81c*, int);
extern "C" int func_0204c7cc(unsigned char*);
extern "C" void* func_ov013_02184338(void*, unsigned int);
extern "C" void func_0205ac40(void* arg0, void* arg1);

struct Struct_ov013_02186db4 {
    unsigned char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    unsigned char unknown_1c_[6];
    unsigned char unknown_22_;
    unsigned char unknown_23_[3];
    unsigned char unknown_26_;
};

// USA: func_ov013_02186db4
extern "C" ARM void func_ov013_02186db4(void* arg0) {
    unsigned char* var0 = (unsigned char*)arg0;

    if (*(void**)(var0 + 0x18) == 0) return;

    unsigned char* var1 = (unsigned char*)func_0205d81c((struct Struct_0205d81c*)(var0 + 0x38), 4);
    if (var1 == 0) return;
    if (func_0204c7cc(var1) == 0) return;
    if ((var1[0xc5] & 0x20) != 0) return;

    int var2 = 0x2a;
    if (var0[0x640] != 0) var2 = 0x20;

    Struct_ov013_02186db4* var3 = (Struct_ov013_02186db4*)func_ov013_02184338(*(void**)(var0 + 0x18), (unsigned short)var2);
    if (var3 == 0) return;

    short var4 = *(short*)(var1 + 0xac);
    short var5 = *(short*)(var1 + 0xae);
    short var6 = *(short*)(var0 + 0x1e);
    var4 *= 8;
    var5 *= 8;
    var4 += var6 + 3;
    var5 += 3;
    var3->unknown_14_ = var4 * 0x1000;
    var3->unknown_18_ = var5 * 0x1000;
    var3->unknown_26_ = 1;
    var3->unknown_22_ = 0x20;
    func_0205ac40(*(void**)(var0 + 0x18), var3);
}
