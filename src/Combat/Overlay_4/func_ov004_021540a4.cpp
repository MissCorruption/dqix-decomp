#include <globaldefs.h>


extern "C" void func_ov004_02153978(void* arg0, short* arg1, short* arg2, short* arg3);
extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" int func_ov023_021e1de8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov023_021f65d4(void* arg0, int arg1, int arg2);
extern "C" void func_ov023_021f6600(void* arg0, int arg1, int arg2);

class Struct_ov004_021540a4 {
public:
    virtual void inline_ov004_021540a4_41(); virtual void inline_ov004_021540a4_42(); virtual void inline_ov004_021540a4_43(); virtual void inline_ov004_021540a4_44();
    virtual void inline_ov004_021540a4_45(); virtual void inline_ov004_021540a4_46(); virtual void inline_ov004_021540a4_47(); virtual void inline_ov004_021540a4_48();
    virtual void inline_ov004_021540a4_49(); virtual void inline_ov004_021540a4_50(); virtual void inline_ov004_021540a4_51(); virtual void inline_ov004_021540a4_52();
    virtual void inline_ov004_021540a4_53(); virtual void inline_ov004_021540a4_54(); virtual void inline_ov004_021540a4_55(); virtual void inline_ov004_021540a4_56();
    virtual void inline_ov004_021540a4_57(); virtual void inline_ov004_021540a4_58(); virtual void inline_ov004_021540a4_59(); virtual void inline_ov004_021540a4_60();
    virtual void inline_ov004_021540a4(); virtual void inline_ov004_021540a4_2(); virtual void inline_ov004_021540a4_3(); virtual void inline_ov004_021540a4_4();
    virtual void inline_ov004_021540a4_5(); virtual void inline_ov004_021540a4_6(); virtual void inline_ov004_021540a4_7(); virtual void inline_ov004_021540a4_8();
    virtual void inline_ov004_021540a4_9(); virtual void inline_ov004_021540a4_10(); virtual void inline_ov004_021540a4_11(); virtual void inline_ov004_021540a4_12();
    virtual void inline_ov004_021540a4_13(); virtual void inline_ov004_021540a4_14(); virtual void inline_ov004_021540a4_15(); virtual void inline_ov004_021540a4_16();
    virtual void inline_ov004_021540a4_17(); virtual void inline_ov004_021540a4_18(); virtual void inline_ov004_021540a4_19(); virtual void inline_ov004_021540a4_20();
    virtual void inline_ov004_021540a4_21(); virtual void inline_ov004_021540a4_22(); virtual void inline_ov004_021540a4_23(); virtual void inline_ov004_021540a4_24();
    virtual void inline_ov004_021540a4_25(); virtual void inline_ov004_021540a4_26(); virtual void inline_ov004_021540a4_27(); virtual void inline_ov004_021540a4_28();
    virtual void inline_ov004_021540a4_29(); virtual void inline_ov004_021540a4_30(); virtual void inline_ov004_021540a4_31(); virtual void inline_ov004_021540a4_32();
    virtual void inline_ov004_021540a4_33(); virtual void inline_ov004_021540a4_34(); virtual void inline_ov004_021540a4_35(); virtual void inline_ov004_021540a4_36();
    virtual void inline_ov004_021540a4_37(); virtual void inline_ov004_021540a4_38(); virtual void inline_ov004_021540a4_39();
    virtual void* inline_ov004_021540a4_40();
};

// USA: func_ov004_021540a4
extern "C" ARM int func_ov004_021540a4(void* arg0) {
    short var0, var1, var2;
    func_ov004_02153978(arg0, &var0, &var1, &var2);

    void* var3 = func_ov011_021849c8(arg0);
    void* var4 = func_ov023_021f6880(var3, 0x39);
    if (!var4) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var4) != 0x12) return 0;
#else
    if (func_ov024_021f6f10(var4) != 0x12) return 0;
#endif

    void* var5 = ((Struct_ov004_021540a4*)var4)->inline_ov004_021540a4_40();
    if (!var4) return 0;

    int var6 = func_ov023_021e1de8(var5, var0, var1, var2);
    short var7 = (short)((var6 + 15) / 16);

    if (var6 == 0) {
        func_ov023_021f65d4(arg0, 0xa, 8);
        func_ov023_021f6600(arg0, 3, 4);
        for (unsigned short var8 = 0x1a, var9 = 0; var9 < 0x10; var8++, var9++) {
            void* var10 = func_ov011_021849c8(arg0);
            void* var11 = func_ov023_021f6880(var10, var8);
            if (var11) *((unsigned char*)var11 + 0xc) |= 8;
        }
        void* var12 = func_ov011_021849c8(arg0);
        void* var13 = func_ov023_021f6880(var12, 0x3a);
        if (var13) *((unsigned char*)var13 + 0xc) &= ~8;
    } else {
        func_ov023_021f6600(arg0, 0xa, 8);
        func_ov023_021f65d4(arg0, 0x3a, 8);
    }

    void* var14 = func_ov011_021849c8(arg0);
    void* var15 = func_ov023_021f6880(var14, 0x2c);
    if (!var15) return 0;
#if defined(jpn)
    if (func_ov023_021f6f10(var15) != 7) return 0;
#else
    if (func_ov024_021f6f10(var15) != 7) return 0;
#endif
    *(short*)((char*)var15 + 0x5c) = 0;
    *(short*)((char*)var15 + 0x5e) = var7;
    return 0;
}
