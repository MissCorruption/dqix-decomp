#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov003_0217a764_0 = 0x84, Enum_ov003_0217a764_54 = 0x2a };
#else
enum { Enum_ov003_0217a764_0 = 0, Enum_ov003_0217a764_54 = 0x36 };
#endif

struct Struct_0207fdcc_2;
struct Struct_0207fdf0_2;
struct Struct_02108760;
struct Struct_02081f20_2;
struct Struct_0201099c_10;
struct Struct_ov003_02178910;
struct Struct_0201099c_9;

struct Struct_ov003_0217a764 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 12;
    unsigned int unknown_9_4_ : 2;
};

struct GameState;
extern "C" void* func_02010828(GameState*);
extern "C" void func_ov003_0217a220(unsigned char* arg0);

extern "C" short func_02080468(void* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern "C" void func_0208203c(struct Struct_02081f20_2* arg0);
extern "C" struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1);
extern "C" void func_0207fdf0(struct Struct_0207fdf0_2* arg0, int arg1);
extern "C" ARM int func_ov003_02175d78(char* arg0);

extern "C" void func_ov003_02177820(char* arg0);
extern "C" void func_ov003_02177938(void* arg0);
extern "C" void func_ov003_021748c4(unsigned char* arg0);
extern "C" int func_ov003_021765b4(void* arg0);
extern "C" int func_ov003_021766e8(void* arg0);
extern "C" int func_ov003_021764f4(unsigned char* arg0);
extern "C" void func_ov003_02176468(unsigned char* arg0);
extern "C" int func_ov003_02175df4(void* arg0);
extern "C" int func_ov003_02179da8(void* arg0, int arg1);
extern "C" void func_ov023_021dcae0(struct Struct_ov003_02178910* arg0, int arg1);

extern struct Struct_02108760 data_02108760;

// USA: func_ov003_0217a764
extern "C" ARM void func_ov003_0217a764(unsigned char* arg0) {
    void* var0 = GameState::GetInstance();
    func_02010828((GameState*)var0);
    struct Struct_0207fdcc_2* var1 = *(struct Struct_0207fdcc_2**)(arg0 + (0x89c - Enum_ov003_0217a764_0));
    int var2 = *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0));

    if (var2 == 0) {
        int var3 = 0x11;
        switch (*(int*)(arg0 + (0x1000 + 0x30 - Enum_ov003_0217a764_0))) {
        case 2: var3 = 0x12; break;
        case 3: var3 = 0x13; break;
        case 4: var3 = 0x14; break;
        }
        func_ov003_02177820((char*)arg0);
        func_ov003_02177938(arg0);
        *(short*)((char*)var1 + Enum_ov003_0217a764_54) = *(short*)(arg0 + (0x1000 + 0x10 - Enum_ov003_0217a764_0));
        func_02080c68(var1, var3, 1);
        *(short*)(arg0 + (0xf00 + 0xfc - Enum_ov003_0217a764_0)) = *(short*)(arg0 + (0xf00 + 0xfe - Enum_ov003_0217a764_0));
        *(short*)(arg0 + (0xf00 + 0xfe - Enum_ov003_0217a764_0)) = 0x15;
        if (*(short*)(arg0 + (0x1000 + 0xe - Enum_ov003_0217a764_0)) < 0) {
            *(short*)(arg0 + (0x1000 + 0xe - Enum_ov003_0217a764_0)) = func_02080468(var1, *(short*)(arg0 + (0xf00 + 0xfe - Enum_ov003_0217a764_0)));
        }
        *(short*)((char*)var1 + Enum_ov003_0217a764_54) = *(short*)(arg0 + (0x1000 + 0xe - Enum_ov003_0217a764_0));
        func_0208203c((struct Struct_02081f20_2*)(arg0 + (0x88c - Enum_ov003_0217a764_0)));
        *(void**)(arg0 + (0xff8 - Enum_ov003_0217a764_0)) = 0;
        *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 1;
        func_ov003_0217a220(arg0);
        func_ov003_021748c4(arg0);
        return;
    }

    if (var2 == 1) {
        *(void**)(arg0 + (0xff8 - Enum_ov003_0217a764_0)) = arg0 + (0x1000 + 0xe - Enum_ov003_0217a764_0);
        func_ov003_0217a220(arg0);
        func_ov023_021dcae0((struct Struct_ov003_02178910*)(arg0 + 0x3c), *(short*)(arg0 + (0x1000 + 0x3a - Enum_ov003_0217a764_0)));
        if (func_ov003_021765b4(arg0) != 0) {
            func_0205eaa0(&data_02108760, 1, 0);
            func_0208203c((struct Struct_02081f20_2*)(arg0 + (0x88c - Enum_ov003_0217a764_0)));
            *(void**)(arg0 + (0xff8 - Enum_ov003_0217a764_0)) = 0;
            void* var4 = (void*)func_020dedd0((struct Struct_0201099c_10*)(arg0 + (0x874 - Enum_ov003_0217a764_0)), *(short*)(arg0 + (0x1000 + 0x3a - Enum_ov003_0217a764_0)));
            *(void**)(arg0 + 8) = var4;
            if (var4 == 0) return;
            int var5 = func_ov003_02179da8(var4, 0);
            if (var5 == 2) {
                func_0207fdf0((struct Struct_0207fdf0_2*)var1, 0);
                *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = 0x1c;
                *(unsigned char*)(arg0 + (0x1000 + 0x3e - Enum_ov003_0217a764_0)) = 1;
                *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 0;
                *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x2000;
                return;
            }
            func_0207fdf0((struct Struct_0207fdf0_2*)var1, 0);
            int var6 = ((struct Struct_ov003_0217a764*)*(void**)(arg0 + 8))->unknown_9_4_;
            short var7 = -1;
            unsigned char var8 = 0;
            switch (var6) {
            case 0:
                *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x20;
                var7 = 0x12;
                break;
            case 1:
                var7 = 0xd;
                var8 = 4;
                break;
            case 2:
                var7 = 0x11;
                var8 = 2;
                break;
            }
            *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = var7;
            *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = var8;
            *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x2000;
#if !defined(jpn)
            if (((struct Struct_ov003_0217a764*)*(void**)(arg0 + 8))->unknown_9_4_ == 0) {
                *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) &= ~0x2000;
            }
#endif
            return;
        }
        if (func_ov003_021766e8(arg0) == 0) return;
        func_0208203c((struct Struct_02081f20_2*)(arg0 + (0x88c - Enum_ov003_0217a764_0)));
        *(void**)(arg0 + (0xff8 - Enum_ov003_0217a764_0)) = 0;
        *(unsigned char*)(arg0 + (0x1000 + 0x3e - Enum_ov003_0217a764_0)) = 4;
        *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 1;
        *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x2000;
        return;
    }

    if (var2 == 2) {
        func_ov003_02176468(arg0);
        *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 3;
        return;
    }

    if (var2 == 3) {
        int var9 = func_ov003_021764f4(arg0);
        if (var9 != -1) {
            if (var9 != 1) return;
            *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = 0x10;
            *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 4;
        } else {
            *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = 0x30;
            *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 0;
            *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x20;
        }
        return;
    }

    if (var2 == 4) {
        func_ov003_02176468(arg0);
        *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 5;
        return;
    }

    if (var2 == 5) {
        int var10 = func_ov003_021764f4(arg0);
        if (var10 != -1) {
            if (var10 != 1) return;
            func_ov003_02175d78((char*)arg0);
            func_ov003_02175df4(arg0);
            *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = 0xe;
            *(unsigned char*)(arg0 + (0x1000 + 0x3e - Enum_ov003_0217a764_0)) = 4;
            *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 1;
            *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x20;
        } else {
            *(short*)(arg0 + (0x1000 + 0x36 - Enum_ov003_0217a764_0)) = 0x30;
            *(unsigned char*)(arg0 + (0x1000 + 0x3e - Enum_ov003_0217a764_0)) = 5;
            *(unsigned char*)(arg0 + (0x1000 + 0x3f - Enum_ov003_0217a764_0)) = 0;
            *(unsigned short*)(arg0 + (0x1000 + 0x46 - Enum_ov003_0217a764_0)) |= 0x20;
        }
        return;
    }
}
