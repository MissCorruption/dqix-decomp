#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov004_0216e638_2506 = 0x7fb, Enum_ov004_0216e638_16 = 0xc, Enum_ov004_0216e638_2 = 0 };
#else
enum { Enum_ov004_0216e638_2506 = 0x9ca, Enum_ov004_0216e638_16 = 0x10, Enum_ov004_0216e638_2 = 2 };
#endif
#include "GameState/GameState.h"

extern "C" int func_020421a0(void);
extern "C" void func_02012028(void* arg0, unsigned char arg1);

struct Struct_020a9ea4;
extern "C" void func_020a9ea4(struct Struct_020a9ea4* arg0);
extern unsigned char data_ov004_02171034;

extern "C" void* func_ov011_021849c8(void*);
extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3,
    int arg4, int arg5, int arg6, int arg7, unsigned char arg8);
extern "C" int func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3);

extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern "C" void* func_ov023_021f79e4(void* arg0);
struct Struct_02020cb8_5;
extern "C" int func_0204b5e8(struct Struct_02020cb8_5* arg0, int arg1, int arg2);

struct Struct_ov004_0216e638 { int unknown_0_, unknown_4_, unknown_8_; };
class Struct_ov004_0216e638_2 {
public:
    virtual void inline_ov004_0216e638(); virtual void inline_ov004_0216e638_2(); virtual void inline_ov004_0216e638_3(); virtual void inline_ov004_0216e638_4();
    virtual void inline_ov004_0216e638_5(); virtual void inline_ov004_0216e638_6(); virtual void inline_ov004_0216e638_7(); virtual void inline_ov004_0216e638_8();
    virtual void inline_ov004_0216e638_9(); virtual void inline_ov004_0216e638_10(); virtual void inline_ov004_0216e638_11(); virtual void inline_ov004_0216e638_12();
    virtual void inline_ov004_0216e638_13(); virtual void inline_ov004_0216e638_14(); virtual void inline_ov004_0216e638_15(); virtual void inline_ov004_0216e638_16();
    virtual void inline_ov004_0216e638_17(); virtual void inline_ov004_0216e638_18(); virtual void inline_ov004_0216e638_19(); virtual void inline_ov004_0216e638_20();
    virtual void inline_ov004_0216e638_21(); virtual void inline_ov004_0216e638_22(); virtual void inline_ov004_0216e638_23(); virtual void inline_ov004_0216e638_24();
    virtual void inline_ov004_0216e638_25(); virtual void inline_ov004_0216e638_26(); virtual void inline_ov004_0216e638_27(); virtual void inline_ov004_0216e638_28();
    virtual void inline_ov004_0216e638_29(); virtual void inline_ov004_0216e638_30(); virtual void inline_ov004_0216e638_31(); virtual void inline_ov004_0216e638_32();
    virtual void inline_ov004_0216e638_33(); virtual void inline_ov004_0216e638_34(); virtual void inline_ov004_0216e638_35(); virtual void inline_ov004_0216e638_36();
    virtual void inline_ov004_0216e638_37(); virtual void inline_ov004_0216e638_38(); virtual void inline_ov004_0216e638_39(); virtual void inline_ov004_0216e638_40();
    virtual void inline_ov004_0216e638_41(); virtual void inline_ov004_0216e638_42(); virtual void inline_ov004_0216e638_43(); virtual void inline_ov004_0216e638_44();
    virtual void inline_ov004_0216e638_45(); virtual void inline_ov004_0216e638_46(); virtual void inline_ov004_0216e638_47(); virtual void inline_ov004_0216e638_48();
    virtual void inline_ov004_0216e638_49(); virtual void inline_ov004_0216e638_50();
    virtual void inline_ov004_0216e638_51(Struct_ov004_0216e638*);
    virtual Struct_ov004_0216e638 inline_ov004_0216e638_52();
};

extern "C" int func_ov004_0216b7bc(void* arg0, int arg1, int arg2, int arg3);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern unsigned char data_02108760;

// USA: func_ov004_0216e638
extern "C" ARM int func_ov004_0216e638(void* arg0) {
    void* var0 = arg0;
    *(unsigned char*)((char*)func_020421a0() + 0x1000 + Enum_ov004_0216e638_2506) = 0;
    func_02012028(GameState::GetInstance(), 0);

    func_020a9ea4(*(struct Struct_020a9ea4**)((char*)&data_ov004_02171034 + Enum_ov004_0216e638_16));
    (&data_ov004_02171034)[Enum_ov004_0216e638_2] = 1;

    func_ov004_0216afb0(var0, 0x4b0, 2, 0x3e8, 0x23, 0xc, 5, 0xa, 1);
    func_ov004_0216afb0(var0, 0x4b1, 2, 0x3e8, 0x35, 0xc, 0x11, 0xa, 1);

    for (int var1 = 0; var1 < 2; var1 = var1 + 1) {
        func_ov004_0216b2c8(var0, 0x44c, var1 + 0x4b0, var1);
    }

    void* var2 = func_ov011_021849c8(var0);
    for (int var3 = 0; var3 < 2; var3 = var3 + 1) {
        void* var4 = func_ov023_021f6880(var2, var3 + 0x65);
        if (!var4) continue;
#if defined(jpn)
        if (func_ov023_021f6f10(var4) != 2) continue;
#else
        if (func_ov024_021f6f10(var4) != 2) continue;
#endif
        func_0204b5e8((struct Struct_02020cb8_5*)func_ov023_021f79e4(var4), 2, 4);

        void* var5 = func_ov023_021f6880(var2, var3 + 0x4b0);
        if (!var5) continue;
#if defined(jpn)
        if (func_ov023_021f6f10(var5) != 8) continue;
#else
        if (func_ov024_021f6f10(var5) != 8) continue;
#endif

        Struct_ov004_0216e638 var6 = ((Struct_ov004_0216e638_2*)var5)->inline_ov004_0216e638_52();
        var6.unknown_0_ = var6.unknown_0_ - 0x2000;
        var6.unknown_4_ = var6.unknown_4_ - 0x4000;
        ((Struct_ov004_0216e638_2*)var5)->inline_ov004_0216e638_51(&var6);

        *(short*)((char*)var5 + 0x30) = -2;
        *(short*)((char*)var5 + 0x32) = -4;
    }

    func_ov004_0216b7bc(var0, 0x3e8, 0x60, 0);
    func_0205eaa0((struct Struct_02108760*)&data_02108760, 5, 0);
    return 0;
}
