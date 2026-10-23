#include <globaldefs.h>

extern "C" void func_ov004_02153978(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" void func_ov023_021f645c(void* arg0, int arg1, unsigned short arg2, int arg3);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void func_ov023_021e1518(void* arg0);
extern "C" void func_ov023_021e1564(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021e15b4(void* arg0, int arg1, int arg2, int arg3);

struct Struct_ov004_0215482c {
    unsigned char unknown_0_[0x7c];
    unsigned char unknown_7c_;
};
struct Struct_ov004_0216fa7c {
    unsigned short unknown_0_[2];
};
extern Struct_ov004_0215482c* data_ov004_021707c0;
extern const Struct_ov004_0216fa7c data_ov004_0216fa7c;

class Struct_ov004_0215482c_2 {
public:
    virtual void inline_ov004_0215482c_50(); virtual void inline_ov004_0215482c_51(); virtual void inline_ov004_0215482c_52(); virtual void inline_ov004_0215482c_53();
    virtual void inline_ov004_0215482c_54(); virtual void inline_ov004_0215482c_55(); virtual void inline_ov004_0215482c_56(); virtual void inline_ov004_0215482c_57();
    virtual void inline_ov004_0215482c_58(); virtual void inline_ov004_0215482c_59(); virtual void inline_ov004_0215482c_60(); virtual void inline_ov004_0215482c();
    virtual void inline_ov004_0215482c_2(); virtual void inline_ov004_0215482c_3(); virtual void inline_ov004_0215482c_4(); virtual void inline_ov004_0215482c_5();
    virtual void inline_ov004_0215482c_6(); virtual void inline_ov004_0215482c_7(); virtual void inline_ov004_0215482c_8(); virtual void inline_ov004_0215482c_9();
    virtual void inline_ov004_0215482c_10(); virtual void inline_ov004_0215482c_11(); virtual void inline_ov004_0215482c_12(); virtual void inline_ov004_0215482c_13();
    virtual void inline_ov004_0215482c_14(); virtual void inline_ov004_0215482c_15(); virtual void inline_ov004_0215482c_16(); virtual void inline_ov004_0215482c_17();
    virtual void inline_ov004_0215482c_18(); virtual void inline_ov004_0215482c_19(); virtual void inline_ov004_0215482c_20(); virtual void inline_ov004_0215482c_21();
    virtual void inline_ov004_0215482c_22(); virtual void inline_ov004_0215482c_23(); virtual void inline_ov004_0215482c_24(); virtual void inline_ov004_0215482c_25();
    virtual void inline_ov004_0215482c_26(); virtual void inline_ov004_0215482c_27(); virtual void inline_ov004_0215482c_28(); virtual void inline_ov004_0215482c_29();
    virtual void inline_ov004_0215482c_30(); virtual void inline_ov004_0215482c_31(); virtual void inline_ov004_0215482c_32(); virtual void inline_ov004_0215482c_33();
    virtual void inline_ov004_0215482c_34(); virtual void inline_ov004_0215482c_35(); virtual void inline_ov004_0215482c_36(); virtual void inline_ov004_0215482c_37();
    virtual void inline_ov004_0215482c_38(); virtual void inline_ov004_0215482c_39(); virtual void inline_ov004_0215482c_40(); virtual void inline_ov004_0215482c_41();
    virtual void inline_ov004_0215482c_42(); virtual void inline_ov004_0215482c_43(); virtual void inline_ov004_0215482c_44(); virtual void inline_ov004_0215482c_45();
    virtual void inline_ov004_0215482c_46(); virtual void inline_ov004_0215482c_47(); virtual void inline_ov004_0215482c_48();
    virtual void* inline_ov004_0215482c_49();
};

// USA: func_ov004_0215482c
extern "C" ARM int func_ov004_0215482c(void* arg0) {
    short var0, var1, var2;
    func_ov004_02153978(arg0, &var0, &var1, &var2);

    unsigned short var3 = 0x2c;
    if (var0 != 0) {
        if (var2 >= 0) {
            var3 = var2 + 6;
        } else if (var1 >= 0) {
            var3 = var1 + 0x11;
            if (var1 == 7) var3 = 0x18;
        }
    }

    func_ov023_021f645c(arg0, 0x34, var3, 0xf);

    Struct_ov004_0216fa7c var4 = data_ov004_0216fa7c;
    func_ov023_021f645c(arg0, 0x35, var4.unknown_0_[data_ov004_021707c0->unknown_7c_], 0xf);

    int var5 = (data_ov004_021707c0->unknown_7c_ == 0) ? 1 : 0;

    Struct_ov004_0215482c_2* var6 = (Struct_ov004_0215482c_2*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
    if (var6) {
        short var7, var8, var9;
        func_ov004_02153978(arg0, &var9, &var8, &var7);

        void* var10 = var6->inline_ov004_0215482c_49();
        if (var10) {
            func_ov023_021e1518(var10);
            if (var5) {
                func_ov023_021e1564(var10, var9, var8, var7);
            } else {
                func_ov023_021e15b4(var10, var9, var8, var7);
            }
        }
    }
    return 0;
}
