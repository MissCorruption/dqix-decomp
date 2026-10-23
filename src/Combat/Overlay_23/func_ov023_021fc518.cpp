#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "Resource/GameResources.h"

struct Struct_02000c9c_75 {
    char unknown_0_[0xc20];
};

class Struct_ov023_021fc518 {
public:
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    char unknown_d_[3];
    const char* unknown_10_;
    void* unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    Struct_02000c9c_75 unknown_20_[2];
    int unknown_1860_;
    unsigned char unknown_1864_0_ : 1;
    unsigned char unknown_1864_1_ : 1;
    unsigned char unknown_1864_2_ : 1;
    unsigned char unknown_1864_3_ : 1;
    void (**unknown_1868_)(void* script);
    void (**unknown_186c_)(void* script);

    virtual void inline_ov023_021fc518_54(void* arg0);
};

class Struct_ov023_021fc518_3 {
public:
    virtual void inline_ov023_021fc518_55();
    virtual void inline_ov023_021fc518_56();
    virtual void inline_ov023_021fc518_57();
    virtual void inline_ov023_021fc518_58();
    virtual void inline_ov023_021fc518_59();
    virtual void inline_ov023_021fc518_60();
    virtual void inline_ov023_021fc518();
    virtual void inline_ov023_021fc518_2();
    virtual void inline_ov023_021fc518_3();
    virtual void inline_ov023_021fc518_4();
    virtual void inline_ov023_021fc518_5();
    virtual void inline_ov023_021fc518_6();
    virtual void inline_ov023_021fc518_7();
    virtual void inline_ov023_021fc518_8();
    virtual void inline_ov023_021fc518_9();
    virtual void inline_ov023_021fc518_10();
    virtual void inline_ov023_021fc518_11();
    virtual void inline_ov023_021fc518_12();
    virtual void inline_ov023_021fc518_13();
    virtual void inline_ov023_021fc518_14();
    virtual void inline_ov023_021fc518_15();
    virtual void inline_ov023_021fc518_16();
    virtual void inline_ov023_021fc518_17();
    virtual void inline_ov023_021fc518_18();
    virtual void inline_ov023_021fc518_19();
    virtual void inline_ov023_021fc518_20();
    virtual void inline_ov023_021fc518_21();
    virtual void inline_ov023_021fc518_22();
    virtual void inline_ov023_021fc518_23();
    virtual void inline_ov023_021fc518_24();
    virtual void inline_ov023_021fc518_25();
    virtual void inline_ov023_021fc518_26();
    virtual void inline_ov023_021fc518_27();
    virtual void inline_ov023_021fc518_28();
    virtual void inline_ov023_021fc518_29();
    virtual void inline_ov023_021fc518_30();
    virtual void inline_ov023_021fc518_31();
    virtual void inline_ov023_021fc518_32();
    virtual void inline_ov023_021fc518_33();
    virtual void inline_ov023_021fc518_34();
    virtual void inline_ov023_021fc518_35();
    virtual void inline_ov023_021fc518_36();
    virtual void inline_ov023_021fc518_37();
    virtual void inline_ov023_021fc518_38();
    virtual void inline_ov023_021fc518_39();
    virtual void inline_ov023_021fc518_40();
    virtual void inline_ov023_021fc518_41();
    virtual void inline_ov023_021fc518_42();
    virtual void inline_ov023_021fc518_43();
    virtual void inline_ov023_021fc518_44();
    virtual void inline_ov023_021fc518_45();
    virtual void inline_ov023_021fc518_46();
    virtual void inline_ov023_021fc518_47();
    virtual void inline_ov023_021fc518_48();
    virtual void inline_ov023_021fc518_49();
    virtual void inline_ov023_021fc518_50();
    virtual void inline_ov023_021fc518_51();
    virtual void inline_ov023_021fc518_52();
    virtual int inline_ov023_021fc518_53();
};

struct Struct_ov023_021fc518_2 {
    int unknown_0_;
    SafeAllocator unknown_4_;
};

struct Struct_ov023_021f6ed8;
struct Struct_0203d028;
struct Struct_0202e5c0;
struct Struct_0202df68;

extern "C" void func_ov023_021f6ed8(Struct_ov023_021f6ed8* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" Struct_ov023_021fc518_3* func_ov023_021f6880(void* arg0, int arg1);
extern "C" Struct_ov023_021fc518_2* func_ov011_021845f8(void* arg0, int arg1);
extern "C" void func_0207df50(Struct_0203d028* arg0);
extern "C" void func_0207df90(char* arg0);
extern "C" void func_0207dfac(char* arg0);
extern "C" void func_ov023_021e4e8c(void* arg0);
extern "C" void func_ov023_021e4f64(void* arg0, SafeAllocator* arg1);
extern "C" void func_ov023_021e4fd8(void* arg0);
extern "C" void func_ov023_021e6198(void* arg0, int arg1);
extern "C" void func_ov023_021e6150(void* arg0, unsigned char arg1);
extern "C" void func_ov023_021e60e0(void* arg0, unsigned int arg1);
extern "C" void func_ov023_021fc71c(void* arg0, int arg1, int arg2);
extern "C" char* func_020100f8(char* arg0);
extern "C" void func_0202e5c0(Struct_0202e5c0* arg0, int arg1, int arg2, int arg3);
extern "C" void func_0202e5c8(unsigned char* arg0, int arg1, int arg2, int arg3);
extern "C" int func_0202e9ec(void* arg0);
extern "C" void func_0202e9a4(Struct_0202df68* arg0, int arg1);
extern "C" void func_020a27a0(void* arg0);

// USA: func_ov023_021fc518
extern "C" ARM int func_ov023_021fc518(Struct_ov023_021fc518* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8((Struct_ov023_021f6ed8*)arg0);
    arg0->unknown_4_ = 5;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = NULL;
    arg0->unknown_1864_0_ = 0;
    arg0->unknown_1860_ = 0;
    arg0->unknown_1864_3_ = 0;
    arg0->unknown_1864_1_ = 0;
    arg0->unknown_1864_2_ = 0;
    arg0->unknown_1868_ = NULL;
    arg0->unknown_186c_ = NULL;

    Struct_ov023_021fc518_3* var0 = func_ov023_021f6880(func_ov011_021849c8(arg1), arg4);
    Struct_ov023_021fc518_2* var1 = func_ov011_021845f8(arg1, arg3);
    int var2 = var0->inline_ov023_021fc518_53();

#if defined(jpn)
    char* var3 = (char*)GetGameResources() + 0x27c;
#else
    char* var3 = GetGameResources()->unknown_2cc_;
#endif
    func_0207df50((Struct_0203d028*)var3);
    func_0207df90(var3);
    for (int var4 = 0; var4 < 2; var4++) {
        func_ov023_021e4e8c(&arg0->unknown_20_[var4]);
        func_ov023_021e4f64(&arg0->unknown_20_[var4], &var1->unknown_4_);
        func_ov023_021e4fd8(&arg0->unknown_20_[var4]);
        func_ov023_021e6198(&arg0->unknown_20_[var4], var2);
        func_ov023_021e6150(&arg0->unknown_20_[var4], 1);
    }
    func_0207dfac(var3);

    func_ov023_021e60e0(&arg0->unknown_20_[0], 0x1eb);
    func_ov023_021e60e0(&arg0->unknown_20_[1], 0x1eb);
    if (arg5 >= 0)
        func_ov023_021fc71c(arg0, arg5, 0);

    char* var5 = func_020100f8((char*)GameState::GetInstance());
    func_0202e5c0((Struct_0202e5c0*)var5, 0xb666, 0xb800, 0x42ccc);
    func_0202e5c8((unsigned char*)var5, 0xb666, 0xb800, 0);
    arg0->unknown_1860_ = func_0202e9ec(var5);
    func_0202e9a4((Struct_0202df68*)var5, 0xf000);
    func_020a27a0(var5);
    return 1;
}
