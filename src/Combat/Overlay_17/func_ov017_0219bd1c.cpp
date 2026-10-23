#if defined(jpn)
enum { Enum_ov017_0219bd1c_1804 = 0x4fc, Enum_ov017_0219bd1c_1788 = 0x4ec };
#else
enum { Enum_ov017_0219bd1c_1804 = 0x70c, Enum_ov017_0219bd1c_1788 = 0x6fc };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Brightness.h"

struct Struct_02000c9c_54;
extern "C" Struct_02000c9c_54* func_0200fd0c(GameState* arg0);
extern "C" void func_02046a8c(void* arg0, void* arg1);
extern "C" unsigned char func_ov017_0219bcac(unsigned char arg0);
extern "C" void func_ov017_0219e310(unsigned char* arg0, int arg1);
struct Struct_020469f8;
struct Struct_020469f8_2;
extern "C" void func_020469f8(struct Struct_020469f8* arg0, struct Struct_020469f8_2* arg1);
struct Struct_02046a3c_2;
struct Struct_02046a3c;
extern "C" void func_02046a3c(struct Struct_02046a3c_2* arg0, struct Struct_02046a3c* arg1);
struct Struct_0201bdac_2;
struct Struct_0201bdac;
extern "C" void func_020469b4(struct Struct_0201bdac_2* arg0, struct Struct_0201bdac* arg1);

struct Struct_ov017_0219bd1c_2 {
    char unknown_0_[2];
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};

struct Struct_ov017_0219bd1c {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_[0x6e - 3];
    unsigned char unknown_6e_;
};

// USA: func_ov017_0219bd1c
extern "C" ARM void func_ov017_0219bd1c(int arg0, unsigned char arg1, int arg2, unsigned char arg3) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetGameResources();
    char* var2 = (char*)var1 + 0x3000;
    struct Struct_ov017_0219bd1c* var3;
    void* var4 = *(void**)(var2 + Enum_ov017_0219bd1c_1788);
    struct Struct_ov017_0219bd1c_2* var5 = *(struct Struct_ov017_0219bd1c_2**)(var2 + Enum_ov017_0219bd1c_1804);
    var3 = (struct Struct_ov017_0219bd1c*)func_0200fd0c(var0);
    if (var5->unknown_3_) return;
    if (var5->unknown_2_) {
        func_02046a8c(var4, var5);
    }
    func_ov017_0219bcac(arg3);
    var3->unknown_2_ = 0;
    var3->unknown_6e_ = arg1;
    func_ov017_0219e310((unsigned char*)var5, 0);
    if (arg0) {
        func_020469f8((struct Struct_020469f8*)var4, (struct Struct_020469f8_2*)var5);
    } else if (arg2) {
        func_02046a3c((struct Struct_02046a3c_2*)var4, (struct Struct_02046a3c*)var5);
    } else {
        func_020469b4((struct Struct_0201bdac_2*)var4, (struct Struct_0201bdac*)var5);
    }
    ClearFlags00((GameResources*)var1, 4);
}
