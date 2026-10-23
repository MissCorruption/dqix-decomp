#ifndef COMBAT_COMBATANTMOTION_H
#define COMBAT_COMBATANTMOTION_H

#include <globaldefs.h>
#include "std_library_functions.h"

class Object3D;
struct Struct_02040c2c;
struct Struct_02040c2c_2;
struct Struct_02040c2c_3;

struct Struct_0203dd20 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    char unknown_8_[0x4];
    Struct_02040c2c* unknown_c_;
    Object3D* unknown_10_;
    Struct_02040c2c_2* unknown_14_;
    Struct_02040c2c_3* unknown_18_;
};

extern "C" void func_02040c2c(Struct_0203dd20* arg0, void* arg1,
                            int arg2, int arg3);


#endif
