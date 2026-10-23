#include "GameState/GameState.h"
#include <globaldefs.h>
#include "Input/Input.h"

#if defined(jpn)
#define RG(u, j) (j)
#else
#define RG(u, j) (u)
#endif

struct Struct_0205de24_2;
struct Struct_0205c570;
struct Struct_02108760;
struct Struct_020d7aa0_2;

extern "C" void func_0205de24(struct Struct_0205de24_2 *arg0, unsigned char arg1,
                                                                        unsigned char arg2);
extern "C" int func_0205d794(struct Struct_0205c570 *arg0);
extern "C" int func_ov002_02161b48(char *arg0, int arg1);
struct Struct_0205da38;
extern "C" int func_0205da38(struct Struct_0205da38* arg0, int arg1);
extern "C" int func_0200fb8c(int *arg0);
extern "C" void *func_02053c6c(unsigned char *arg0);
extern "C" void func_0205eaa0(Struct_02108760 *arg0, int arg1, int arg2);
extern "C" int func_ov002_02157108(void *arg0, int arg1);
extern "C" Struct_020d7aa0_2 *func_020d7a50();
extern "C" void func_020d7aa0(Struct_020d7aa0_2 *arg0);
extern "C" void func_020d7978(char *arg0);
extern "C" void func_ov002_02161cf0(char *arg0);
extern "C" void func_ov002_0215c474(char *arg0);
extern "C" void func_ov002_02156e90(char *arg0);

extern Struct_02108760 data_02108760;

// USA: func_ov002_02162714
extern "C" ARM void func_ov002_02162714(char *arg0) {
    int var0 = *(int *) (arg0 + RG(0x1bc0, 0x1a88));
    if (var0 == 0) {
        *(short *) (arg0 + RG(0x1be4, 0x1aac)) = 0;
        func_0205de24((struct Struct_0205de24_2 *) (arg0 + RG(0xec8, 0xe20)), 0, 2);
        func_ov002_02161cf0(arg0);
        func_ov002_0215c474(arg0);
        (*(int *) (arg0 + RG(0x1bc0, 0x1a88)))++;
    } else if (var0 == 1) {
        *(int *) (arg0 + RG(0x247c, 0x22ac)) |= 4;
        short var1 = *(short *) (arg0 + RG(0x1be4, 0x1aac));
        *(short *) (arg0 + RG(0x1be4, 0x1aac)) =
            func_0205d794((struct Struct_0205c570 *) (arg0 + RG(0xec8, 0xe20)));
        if (var1 != *(short *) (arg0 + RG(0x1be4, 0x1aac))) {
            return;
        }
        int var2  = g_keyManager.TestKeysPressed(0x601);
        int var3  = func_0205da38((struct Struct_0205da38*)(arg0 + RG(0xec8, 0xe20)), 0x14);
        int var4 = (var2 | var3) ? 1 : 0;
        if (var4) {
            int var5 = *(int *) (arg0 + RG(0x247c, 0x22ac));
            if (var5 & 2) return;
            if (!(var5 & 0x10)) return;
            GameState *var6 = GameState::GetInstance();
            func_0200fb8c((int *) var6);
            GameObject *var7 = var6->GetProtagonist();
            if (var7 != 0) {
                *(short *) ((char *) func_02053c6c((unsigned char *) var7) + RG(0x95a, 0x8c2)) = *(short *) (arg0 + RG(0x1be4, 0x1aac));
            }
            switch (*(short *) (arg0 + RG(0x1be4, 0x1aac))) {
                case 0:
                    func_0205eaa0(&data_02108760, 1, 0);
                    *(int *) (arg0 + RG(0x1bb8, 0x1a80)) = 4;
                    *(int *) (arg0 + RG(0x1bc0, 0x1a88)) = 0;
                    break;
                case 1:
                    *(unsigned char *) (arg0 + RG(0xf80, 0xed8)) = *(int *) (arg0 + RG(0x1bb8, 0x1a80));
                    *(int *) (arg0 + RG(0x247c, 0x22ac)) &= ~4;
                    func_0205eaa0(&data_02108760, 1, 0);
                    *(signed char *) (arg0 + RG(0x1c20, 0x1ae8)) = 5;
                    *(int *) (arg0 + RG(0x1bb8, 0x1a80))         = RG(10, 0xb);
                    *(int *) (arg0 + RG(0x1bc0, 0x1a88))         = 0;
                    if (func_ov002_02157108(arg0, *(signed char *) (arg0 + RG(0x1c20, 0x1ae8))) != 0) {
                        return;
                    }
                    func_020d7aa0(func_020d7a50());
                    *(short *) (arg0 + RG(0x1c28, 0x1af0)) = 0x2395;
                    *(short *) (arg0 + RG(0x1c2a, 0x1af2)) = -1;
                    *(int *) (arg0 + RG(0x1bb8, 0x1a80))   = RG(0x26, 0x29);
                    *(int *) (arg0 + RG(0x1bbc, 0x1a84))   = 3;
                    break;
                case 2:
                    func_020d7978(arg0);
                    *(int *) (arg0 + RG(0x1bb8, 0x1a80)) = RG(0x2b, 0x2e);
                    *(int *) (arg0 + RG(0x1bc0, 0x1a88)) = 0;
                    break;
            }
        } else if (func_ov002_02161b48(arg0, 1)) {
            *(short *) (arg0 + RG(0x1be4, 0x1aac)) = -1;
            func_ov002_02156e90(arg0);
        }
    }
}
