#include "GameState/GameState.h"
#include "std_library_functions.h"
#include <globaldefs.h>

struct Struct_020a0b8c;
struct Struct_020a0bcc;
struct Struct_020a095c;
struct Struct_0207cf30_4;
struct Struct_ov002_0215b2c8;
struct Struct_0201099c_10;
struct Struct_0205d81c;
extern "C" int func_020a0b8c(struct Struct_020a0b8c *arg0);
extern "C" void func_020a0bcc(struct Struct_020a0bcc *arg0);
extern "C" int func_020a0af4(struct Struct_020a095c *arg0, int arg1);
extern "C" void func_020a095c(struct Struct_0207cf30_4 *arg0, int arg1, int arg2);
extern "C" void func_ov023_021e1518(void *arg0);
extern "C" void func_ov023_021e1474(struct Struct_ov002_0215b2c8 *arg0,
                                                                                              struct Struct_0201099c_10 *arg1);
extern "C" void func_ov023_021e1870(void *arg0, void *arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov023_021e1814(void *arg0, void *arg1, int arg2, int arg3, int arg4);
struct Struct_ov002_0215b458_4 {
    char unknown_0_[0xc5];
    unsigned char unknown_c5_;
};
extern "C" struct Struct_ov002_0215b458_4 *func_0205d81c(struct Struct_0205d81c *arg0, int arg1);
extern "C" int GetInventoryItemByID(char *arg0, int arg1, int arg2);
extern "C" void func_0205d7a0(void *arg0, int arg1);
extern "C" void func_ov002_0215b9a4(void *arg0, int arg1, int arg2);

struct Struct_ov002_0215b458 {
    char unknown_0_[0x18];
    short unknown_18_;
};
struct Struct_ov002_0215b458_2 {
    struct Struct_ov002_0215b458_2 *unknown_0_;
    struct Struct_ov002_0215b458 *unknown_4_;
};
struct Struct_ov002_0215b458_3 {
    short *unknown_0_;
    signed char *unknown_4_;
};

// USA: func_ov002_0215b458
extern "C" ARM void func_ov002_0215b458(char *arg0, int arg1) {
    GameState *var0;
    char *var1;
    int var2;
    short *var3;
    struct Struct_ov002_0215b458_3 *var4;
    int var5;
    signed char *var6;
    struct Struct_ov002_0215b458_2 *var7;
    var0    = GameState::GetInstance();
    var4 = (struct Struct_ov002_0215b458_3 *) func_02010828(var0);
    var2   = GetInventoryItemByID(arg0, *(short *) (arg0 + 0x1b00 + 0xe8), *(signed char *) (arg0 + 0x1c00 + 0x20));
    var3  = var4->unknown_0_;
    var6  = var4->unknown_4_;
    var5 = func_020a0b8c((struct Struct_020a0b8c *) var4);
    if (var5 == 0) return;

    var1 = arg0 + 4;
    func_ov023_021e1518(var1 + 0x800);
    func_ov023_021e1474(
        (struct Struct_ov002_0215b2c8 *) (var1 + 0x800), (struct Struct_0201099c_10 *) (arg0 + 0x3ec + 0x400));
    if (*(unsigned char *) (arg0 + 0x2000 + 0x48d) == 2) {
        func_ov023_021e1870(var1 + 0x800, (void *) 1, -1, -1, 0);
        *(unsigned char *) (arg0 + 0x2000 + 0x48d) = 1;
    } else {
        func_ov023_021e1814(var1 + 0x800, (void *) 1, -1, -1, 0);
        *(unsigned char *) (arg0 + 0x2000 + 0x48d) = 2;
    }
    memset(*(void **) (arg0 + 0x2000 + 0x534), 0, 0x140);
    memset(*(void **) (arg0 + 0x2000 + 0x538), 0, 0xa0);
    memcpy(*(void **) (arg0 + 0x2000 + 0x534), var3, var5 * 2);
    memcpy(*(void **) (arg0 + 0x2000 + 0x538), var6, var5);
    func_020a0bcc((struct Struct_020a0bcc *) var4);

    for (var7 = *(struct Struct_ov002_0215b458_2 **) (var1 + 0x800); var7 != NULL; var7 = var7->unknown_0_) {
        struct Struct_ov002_0215b458 *var8 = var7->unknown_4_;
        if (var8 == NULL) continue;
        short var9 = var8->unknown_18_;
        for (short var10 = 0; var10 < var5; var10++) {
            if (var9 == (*(short **) (arg0 + 0x2000 + 0x534))[var10]) {
                func_020a095c((struct Struct_0207cf30_4 *) var4, var9,
                                                                  (*(signed char **) (arg0 + 0x2000 + 0x538))[var10]);
                break;
            }
        }
    }

    if (var2 >= 0 && arg1) {
        int var11 = func_020a0af4((struct Struct_020a095c *) var4, var2);
        if (var11 >= 0) {
            *(short *) (arg0 + 0x1b00 + 0xe8) = var11;
            func_0205d7a0(arg0 + 0x2c8 + 0xc00, var11);
            struct Struct_ov002_0215b458_4 *var12 =
                func_0205d81c((struct Struct_0205d81c *) (arg0 + 0x2c8 + 0xc00), 5);
            if (var12 != NULL) {
                var12->unknown_c5_ &= ~2;
            }
        }
    }
    func_ov002_0215b9a4(arg0, 5, 0);
}
