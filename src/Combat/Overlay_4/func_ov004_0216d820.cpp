#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void* func_ov004_0216b1c4(void* arg0, int arg1);
extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" int func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov004_0216b7bc(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov004_02171034_5 {
#if defined(jpn)
    unsigned char unknown_0_[0x10];
#else
    unsigned char unknown1_0_[0xc];
#endif
    int unknown_c_;
};
extern struct Struct_ov004_02171034_5 data_ov004_02171034;

class Struct_ov004_0216d820 {
public:
    virtual void inline_ov004_0216d820_18(); virtual void inline_ov004_0216d820_19(); virtual void inline_ov004_0216d820_20(); virtual void inline_ov004_0216d820_21();
    virtual void inline_ov004_0216d820_22(); virtual void inline_ov004_0216d820_23(); virtual void inline_ov004_0216d820_24(); virtual void inline_ov004_0216d820_25();
    virtual void inline_ov004_0216d820_26(); virtual void inline_ov004_0216d820_27(); virtual void inline_ov004_0216d820_28(); virtual void inline_ov004_0216d820_29();
    virtual void inline_ov004_0216d820_30(); virtual void inline_ov004_0216d820_31(); virtual void inline_ov004_0216d820_32(); virtual void inline_ov004_0216d820();
    virtual void inline_ov004_0216d820_2(); virtual void inline_ov004_0216d820_3(int arg0); virtual void inline_ov004_0216d820_4(); virtual void inline_ov004_0216d820_5();
    virtual void inline_ov004_0216d820_6(); virtual void inline_ov004_0216d820_7(); virtual void inline_ov004_0216d820_8(); virtual void inline_ov004_0216d820_9();
    virtual void inline_ov004_0216d820_10(); virtual void inline_ov004_0216d820_11(); virtual void inline_ov004_0216d820_12(); virtual void inline_ov004_0216d820_13();
    virtual void inline_ov004_0216d820_14(); virtual void inline_ov004_0216d820_15(); virtual void inline_ov004_0216d820_16(); virtual void inline_ov004_0216d820_17(int arg0);
};

// USA: func_ov004_0216d820
extern "C" ARM int func_ov004_0216d820(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 1);
    if (var0) {
        *((unsigned char*)var0 + 0xc) |= 0x8;
    }
    func_ov004_0216b1c4(arg0, 0x12c);

    int var1 = data_ov004_02171034.unknown_c_;

    func_ov004_0216afb0(arg0, 0x37, 2, 0xd4, 0x3b, 0xa, 0xa, 0xc, 1);
    func_ov004_0216b2c8(arg0, 0x12c, 0x37, 0);

    Struct_ov004_0216d820* var2 = (Struct_ov004_0216d820*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x37);
    if (var2) {
        var2->inline_ov004_0216d820_3(0x10);
        var2->inline_ov004_0216d820_17(0x10);
    }

    func_ov004_0216b7bc(arg0, 0xd4, var1, 0);
    return 0;
}
