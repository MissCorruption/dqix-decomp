#include "GameState/BattleRecordSnapshot.h"
#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_020ac614(struct Struct_020ac4f8* arg0, int arg1);

extern "C" void func_020ac644(struct Struct_020ac4f8* arg0, int arg1);

extern "C" void func_020ac6b8(Struct_020ac4f8* arg0, int arg1);

struct Struct_020103f0;
extern "C" void func_020103f0(struct Struct_020103f0* arg0, unsigned short* arg1, unsigned char* arg2, unsigned char* arg3);

struct Struct_020104cc;
extern "C" void func_020104cc(struct Struct_020104cc* arg0, unsigned short* arg1, unsigned char* arg2, unsigned char* arg3);

extern "C" int func_020ac4c0(void* arg0);
extern "C" int func_020ac494(void* arg0);

unsigned long long GetCurrentTimestamp(void);

// USA: func_020ac4f8
extern "C" ARM int func_020ac4f8(int arg0) {
    GameState *var0;
    Struct_02061c04 var1;
    unsigned short var2;
    unsigned char var3;
    unsigned char var4;
    unsigned long long var5;
    Struct_02061c04_2* var6;

    var0 = GameState::GetInstance();
    func_020ac4c0(&var1);

    var2 = 0;
    var3 = 0;
    var4 = 0;
    var6 = &var1.unknown_68_;
    func_020103f0((struct Struct_020103f0*)var0, &var2, &var3, &var4);

    func_020ac614(&var1.unknown_0_.unknown_0_, var2);
    func_020ac644(&var1.unknown_0_.unknown_0_, var3);
    func_020ac6b8(&var1.unknown_0_.unknown_0_, var4);

    func_020ac614(&var6->unknown_0_, var2);
    func_020ac644(&var6->unknown_0_, var3);
    func_020ac6b8(&var6->unknown_0_, var4);

    var5 = GetCurrentTimestamp();
    var0->mainTimestamp_ = var5;

    if (arg0 != 0) {
        Struct_020ac4f8* var7;
        func_020104cc((struct Struct_020104cc*)var0, &var2, &var3, &var4);
        var7 = &var1.unknown_0_.unknown_4_;

        func_020ac614(var7, var2);
        func_020ac644(var7, var3);
        func_020ac6b8(var7, var4);

        func_020ac614(&var6->unknown_4_, var2);
        func_020ac644(&var6->unknown_4_, var3);
        func_020ac6b8(&var6->unknown_4_, var4);

        var5 = GetCurrentTimestamp();
        var0->altTimestamp_ = var5;
    }

    return func_020ac494(&var1);
}
