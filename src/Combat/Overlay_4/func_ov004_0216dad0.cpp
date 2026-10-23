#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_02012028(void* arg0, unsigned char arg1);
extern "C" int func_020ab9c0(int arg0);

extern "C" int func_020ab5d4(void* arg0, int arg1, int arg2, void* arg3);

struct Struct_ov004_02171034_6 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
    unsigned short unknown_8_;
    unsigned char unknown_a_[2];
    void* unknown_c_;
    void* unknown_10_;
};
extern Struct_ov004_02171034_6 data_ov004_02171034;

// USA: func_ov004_0216dad0
extern "C" ARM int func_ov004_0216dad0(void) {
    GameState* var0 = GameState::GetInstance();
    func_02012028(var0, 1);
    data_ov004_02171034.unknown_3_ = 0;
    data_ov004_02171034.unknown_0_ = 0;
    int var1 = func_020ab9c0(0);
    int var2 = func_020ab9c0(1);
    if (var1 == 1 || var2 == 1) {
        data_ov004_02171034.unknown_3_ = 6;
        return 0;
    }
    if (var2 == 4) {
        data_ov004_02171034.unknown_3_ = 0;
        if (var1 == 3) {
            data_ov004_02171034.unknown_0_ = 1;
        }
        return 0;
    }
    if (var2 == 2) {
        data_ov004_02171034.unknown_3_ = 7;
        return 0;
    }
    if (var1 == 2) {
        data_ov004_02171034.unknown_3_ = 4;
        return 0;
    }
    if (var1 == 0) {
        data_ov004_02171034.unknown_3_ = 1;
    } else if (var1 == 3) {
        data_ov004_02171034.unknown_3_ = 2;
    }
    if (data_ov004_02171034.unknown_3_ == 1) {
        unsigned char var3[3];
        if (func_020ab5d4(data_ov004_02171034.unknown_10_, 0, 0, var3) == 0) {
            unsigned char var4 = var0->unknown_5cc8_;
            if (var4 == 0) {
                data_ov004_02171034.unknown_3_ = 6;
            } else if (var4 == 2) {
                data_ov004_02171034.unknown_3_ = 4;
            }
            return 0;
        }
        data_ov004_02171034.unknown_8_ = *(unsigned short*)var3;
        data_ov004_02171034.unknown_7_ = var3[2];
        data_ov004_02171034.unknown_6_ = var3[3];
    }
    return 0;
}
