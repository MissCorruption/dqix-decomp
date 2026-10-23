#include <globaldefs.h>

struct Struct_ov009_0218aa28 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern "C" void Vector3fix_Add(struct Struct_ov009_0218aa28* arg0, struct Struct_ov009_0218aa28* arg1, struct Struct_ov009_0218aa28* arg2);

struct Struct_ov011_02184a18;
extern "C" unsigned short func_ov011_02184a18(struct Struct_ov011_02184a18* arg0);

extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void func_ov011_02184a40(void* arg0, int arg1);

extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f9bc8(void* arg0);
extern "C" unsigned short func_ov023_021f6f10(void* arg0);
extern "C" struct Struct_ov009_0218aa28 func_ov023_021f8b78(void* arg0, void* arg1);

class Struct_ov023_021f98e0_2 {
public:
    virtual void inline_ov023_021f98e0_45(); virtual void inline_ov023_021f98e0_46(); virtual void inline_ov023_021f98e0_47(); virtual void inline_ov023_021f98e0_48();
    virtual void inline_ov023_021f98e0_49(); virtual void inline_ov023_021f98e0_50(); virtual void inline_ov023_021f98e0_51(); virtual void inline_ov023_021f98e0_52();
    virtual struct Struct_ov009_0218aa28 inline_ov023_021f98e0_53();
    virtual void inline_ov023_021f98e0_54(); virtual void inline_ov023_021f98e0_55(); virtual void inline_ov023_021f98e0_56(); virtual void inline_ov023_021f98e0_57();
    virtual void inline_ov023_021f98e0_58(); virtual void inline_ov023_021f98e0_59(); virtual void inline_ov023_021f98e0_60(); virtual void inline_ov023_021f98e0();
    virtual void inline_ov023_021f98e0_2(); virtual void inline_ov023_021f98e0_3(); virtual void inline_ov023_021f98e0_4();
    virtual int inline_ov023_021f98e0_5();
    virtual void inline_ov023_021f98e0_6(); virtual void inline_ov023_021f98e0_7(); virtual void inline_ov023_021f98e0_8(); virtual void inline_ov023_021f98e0_9();
    virtual void inline_ov023_021f98e0_10(); virtual void inline_ov023_021f98e0_11(); virtual void inline_ov023_021f98e0_12(); virtual void inline_ov023_021f98e0_13();
    virtual void inline_ov023_021f98e0_14(); virtual void inline_ov023_021f98e0_15(); virtual void inline_ov023_021f98e0_16(); virtual void inline_ov023_021f98e0_17();
    virtual void inline_ov023_021f98e0_18(); virtual void inline_ov023_021f98e0_19(); virtual void inline_ov023_021f98e0_20(); virtual void inline_ov023_021f98e0_21();
    virtual void inline_ov023_021f98e0_22(); virtual void inline_ov023_021f98e0_23(); virtual void inline_ov023_021f98e0_24(); virtual void inline_ov023_021f98e0_25();
    virtual void inline_ov023_021f98e0_26(); virtual void inline_ov023_021f98e0_27(); virtual void inline_ov023_021f98e0_28(); virtual void inline_ov023_021f98e0_29();
    virtual void inline_ov023_021f98e0_30(); virtual void inline_ov023_021f98e0_31(); virtual void inline_ov023_021f98e0_32(); virtual void inline_ov023_021f98e0_33();
    virtual void inline_ov023_021f98e0_34(); virtual void inline_ov023_021f98e0_35();
    virtual struct Struct_ov009_0218aa28 inline_ov023_021f98e0_36();
};

class Struct_ov023_021f98e0 {
public:
    virtual void inline_ov023_021f98e0_37(); virtual void inline_ov023_021f98e0_38(); virtual void inline_ov023_021f98e0_39(); virtual void inline_ov023_021f98e0_40();
    virtual void inline_ov023_021f98e0_41(); virtual void inline_ov023_021f98e0_42(); virtual void inline_ov023_021f98e0_43();
    virtual void inline_ov023_021f98e0_44(struct Struct_ov009_0218aa28* arg0);
};

// USA: func_ov023_021f98e0
extern "C" ARM void func_ov023_021f98e0(void* arg0, void* arg1) {
    unsigned short var0 = func_ov011_02184a18((struct Struct_ov011_02184a18*)arg1);
    void* var1 = func_ov011_021849c8(arg1);
    Struct_ov023_021f98e0* var2 = (Struct_ov023_021f98e0*)func_ov023_021f6880(var1, var0);

    unsigned short var3 = (*(unsigned short**)((char*)arg0 + 0x20))[func_ov023_021f9bc8(arg0)];
    Struct_ov023_021f98e0_2* var4 = (Struct_ov023_021f98e0_2*)func_ov023_021f6880(var1, var3);

    if (var2 != 0 && var4 != 0) {
        if (func_ov023_021f6f10(var4) == 0) {
            struct Struct_ov009_0218aa28 var5 = var4->inline_ov023_021f98e0_53();
            struct Struct_ov009_0218aa28 var6 = var4->inline_ov023_021f98e0_36();
            Vector3fix_Add(&var5, (struct Struct_ov009_0218aa28*)((char*)arg0 + 0x2c), &var5);
            Vector3fix_Add(&var5, &var6, &var5);
            var2->inline_ov023_021f98e0_44(&var5);
        } else if (func_ov023_021f6f10(var4) == 8) {
            struct Struct_ov009_0218aa28 var7 = func_ov023_021f8b78(var4, arg1);
            struct Struct_ov009_0218aa28 var8 = var4->inline_ov023_021f98e0_36();
            Vector3fix_Add(&var7, (struct Struct_ov009_0218aa28*)((char*)arg0 + 0x2c), &var7);
            Vector3fix_Add(&var7, &var8, &var7);
            var2->inline_ov023_021f98e0_44(&var7);
        } else if (func_ov023_021f6f10(var4) == 1) {
            struct Struct_ov009_0218aa28 var9 = var4->inline_ov023_021f98e0_53();
            struct Struct_ov009_0218aa28 var10 = var4->inline_ov023_021f98e0_36();
            Vector3fix_Add(&var9, (struct Struct_ov009_0218aa28*)((char*)arg0 + 0x2c), &var9);
            Vector3fix_Add(&var9, &var10, &var9);
            var2->inline_ov023_021f98e0_44(&var9);
        }

        int var11 = var4->inline_ov023_021f98e0_5();
        if (var11 > 0) {
            func_ov011_02184a40(arg1, var11);
        }
    }

    *(int*)((char*)arg0 + 0x38) = 0;
}
