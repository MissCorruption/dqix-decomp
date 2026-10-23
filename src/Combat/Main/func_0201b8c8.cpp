#include <globaldefs.h>
#include "Graphics/LightingManager.h"

struct Struct_02017a94;
struct Struct_0201b600;
extern "C" struct Struct_0201b600* func_0201b600(Struct_02017a94*, int, unsigned short);
struct Struct_02013380;
extern "C" void func_02013380(struct Struct_02013380* arg0, int arg1, int arg2);

struct Struct_020e6e53 { unsigned char unknown_0_; unsigned char unknown_1_[3]; };
extern struct Struct_020e6e53 data_020e6e53[];
extern struct Struct_020e6e53 data_020e6e54[];
extern struct Struct_020e6e53 data_020e6e55[];
extern struct Struct_020e6e53 data_020e6e56[];

// USA: func_0201b8c8
extern "C" ARM void func_0201b8c8(struct Struct_02017a94* arg0, int arg1, int arg2, int arg3) {
    struct Struct_0201b600* var0;
    int var1;
    int var2;
    void* var3;
    if (*(unsigned short*)arg0 != 0x170c) return;
    var3 = LightingManager::GetInstance();
    var0 = func_0201b600(arg0, 0, 0xa);
    if (var0 != NULL) func_02013380((struct Struct_02013380*)var0, 0, arg1);
    var0 = func_0201b600(arg0, 0, 0xb);
    if (var0 != NULL) func_02013380((struct Struct_02013380*)var0, 0, arg2);
    var2 = *(int*)((char*)var3 + 0x98);
    if (arg3 != 0) {
        if (var2 == 3) var1 = 0;
        else var1 = 1;
    } else {
        if (var2 == 3) var1 = 2;
        else var1 = 3;
    }
    var0 = func_0201b600(arg0, 0, 2);
    if (var0 != NULL) func_02013380((struct Struct_02013380*)var0, 0, data_020e6e53[var1].unknown_0_);
    var0 = func_0201b600(arg0, 0, 0xc);
    if (var0 != NULL) func_02013380((struct Struct_02013380*)var0, 0, data_020e6e54[var1].unknown_0_);
    var0 = func_0201b600(arg0, 0, 3);
    if (var0 != NULL) func_02013380((struct Struct_02013380*)var0, 0, data_020e6e55[var1].unknown_0_);
    var0 = func_0201b600(arg0, 0, 9);
    if (var0 == NULL) return;
    func_02013380((struct Struct_02013380*)var0, 0, data_020e6e56[var1].unknown_0_);
}
