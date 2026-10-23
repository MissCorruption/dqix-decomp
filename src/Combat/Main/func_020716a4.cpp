#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Script.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

#if defined(jpn)
#define func_0206df6c func_0206f0c0
#endif

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};

extern "C" void* func_0205ec34(void);
extern "C" void func_0206dfe8(void* arg0, int arg1, int arg2);

extern "C" void func_0206e080(char* arg0, int arg1);
extern "C" void func_0206e0d0(char* arg0, int arg1);
extern "C" void func_0206df6c(void* arg0, unsigned char* arg1, int arg2, int arg3);

extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);

struct Struct_02108d70_5 {
    unsigned char unknown_0_;
    char unknown_1_[7];
    void* unknown_8_;
    char unknown_c_[4];
    int unknown_10_;
    int unknown_14_;
    char unknown_18_[8];
    int unknown_20_;
    char unknown_24_[4];
    int unknown_28_;
};
extern struct Struct_02108d70_5 data_02108d70;

// USA: func_020716a4
extern "C" ARM int func_020716a4(struct Struct_0201c1c8* arg0, int arg1) {
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    void* var5;
    int var6;
    GameState* var7;

    var0 = ((Script::Parameter*)arg0)->ToInt();
    if (data_02108d70.unknown_14_ != var0) {
        return 1;
    }

    var1 = ((Script::Parameter*)(arg0 + 1))->ToInt();
    var2 = ((Script::Parameter*)(arg0 + 2))->ToInt();
    {
        struct Struct_0201c1c8* var8 = arg0 + 3;
        arg0 = arg0 + 4;
        var3 = ((Script::Parameter*)var8)->ToInt();
    }

    var7 = GameState::GetInstance();
    func_02010774((char*)var7, var1);
    func_020107a8((char*)var7, var2);
    func_020107dc((char*)var7, var3);

    var5 = func_0205ec34();
    func_0206e080((char*)var5, *(unsigned char*)((char*)var5 + 0x332));
    func_0206e0d0((char*)var5, *(unsigned char*)((char*)var5 + 0x332));
    func_0206dfe8(var5, 0, 0x200);
    func_0206dfe8(var5, 0x38e, 0x3e8);

    for (var6 = 0; var6 < arg1 - 4; var6++) {
        var4 = ((Script::Parameter*)arg0)->ToInt();
        arg0 = arg0 + 1;
        switch (var4 >> 16) {
        case 2:
            func_0206df6c(var5, (unsigned char*)var5 + *(unsigned char*)((char*)var5 + 0x332) * 0x1c + 3, (unsigned short)var4, 1);
            break;
        case 1:
            func_0206df6c(var5, (unsigned char*)var5 + *(unsigned char*)((char*)var5 + 0x332) * 0x1c + 0x10, (unsigned short)var4, 1);
            break;
        case 0:
            func_0206df6c(var5, (unsigned char*)var5 + 0x8c, (unsigned short)var4, 1);
            break;
        }
    }

    return 1;
}
