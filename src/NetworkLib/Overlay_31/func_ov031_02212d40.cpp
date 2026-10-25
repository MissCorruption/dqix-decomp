#include <globaldefs.h>


extern "C" void func_020ca3ec(int arg0, void* arg1, int arg2);
extern "C" int func_ov031_02213230(int arg0, void* arg1);
extern "C" int func_ov031_0221add4(int arg0);
extern "C" int func_ov031_0220c970(void* arg0, int arg1);
extern "C" void func_ov031_022132d4(void);

struct Struct_ov031_02212d40 {
    void* unknown_0_;
    void* unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_;
    unsigned char unknown_b_;
};

struct Struct_ov031_0224e5c4_2 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    void* unknown_10_;
};

extern Struct_ov031_0224e5c4_2 data_ov031_0224e5c4;

// USA: func_ov031_02212d40
extern "C" ARM int func_ov031_02212d40(Struct_ov031_02212d40* arg0) {
    Struct_ov031_0224e5c4_2* var0 = &data_ov031_0224e5c4;
    void* var1 = (void*)((int (*)(int, int))arg0->unknown_0_)(1, 0x24);
    var0->unknown_c_ = var1;
    func_020ca3ec(0, var1, 0x24);

    void* var2 = var0->unknown_c_;
    *(void**)var2 = arg0->unknown_0_;
    *(void**)((char*)var2 + 4) = arg0->unknown_4_;
    *((unsigned char*)var2 + 9) = 1;
    *((unsigned char*)var2 + 0x16) = 1;
    *((unsigned char*)var2 + 8) = 1;

    var0->unknown_10_ = (void*)func_ov031_02213230(0x10, (void*)0xd18);
    var0->unknown_0_  = (void*)func_ov031_02213230(2, (void*)0x2300);
    var0->unknown_4_  = (void*)func_ov031_02213230(4, (void*)0x58);
    var0->unknown_8_  = (void*)func_ov031_02213230(8, (void*)0xc);

    func_020ca3ec(0, var0->unknown_10_, 0xd18);
    func_020ca3ec(0, var0->unknown_0_, 0x2300);
    func_020ca3ec(0, var0->unknown_4_, 0x58);
    func_020ca3ec(0, var0->unknown_8_, 0xc);

    unsigned char* var3 = (unsigned char*)var0->unknown_10_;
    var3[0xd0a] = arg0->unknown_8_;
    var3[0xd0b] = (var3[0xd0b] & ~0x3) | (arg0->unknown_9_ & 0x3);

    void* var4 = var0->unknown_8_;
    *(void**)var4 = arg0->unknown_0_;
    *(void**)((char*)var4 + 4) = arg0->unknown_4_;
    *(int*)((char*)var4 + 8) = 0;

    var3[0xd0c] = (var3[0xd0c] & ~0xf) | (arg0->unknown_a_ & 0xf);
    var3[0xd0c] = (var3[0xd0c] & ~0x30) | ((arg0->unknown_b_ & 3) << 4);

    func_ov031_0221add4((int)var3);

    int var5 = func_ov031_0220c970(var0->unknown_0_, 0x2300);
    if (var5 == 1 || var5 > 4) {
        func_ov031_022132d4();
        return 0;
    }
    return 1;
}
