#include <globaldefs.h>
#if defined(jpn)
#define data_021023c0 data_02102100
#endif

struct Struct_021015a0_7 { char unknown_0_[0x10]; int unknown_10_; char unknown_14_[0x34 - 0x14]; int unknown_34_; };
struct Struct_021023c0 { char unknown_0_[0x820]; };
extern Struct_021015a0_7 data_021015a0;
extern Struct_021023c0 data_021023c0, data_02102be0;
extern "C" int func_0202d0b4();
extern "C" void func_0202dd28();
extern "C" int func_020d68d0(void*);
extern "C" void func_0202c848(int);
extern "C" int func_0202d54c();
extern "C" int func_020d5f88(void*);
extern "C" int func_0202cca4();

static inline int inline_0202dd98() { return data_021015a0.unknown_10_; }

// USA: func_0202dd98
extern "C" ARM void func_0202dd98() {
    if (data_021015a0.unknown_10_ == 1) return;
    if (data_021015a0.unknown_10_ == 2) {
        if (!func_0202d0b4()) func_0202dd28();
        return;
    }
    if (data_021015a0.unknown_10_ != 6 && data_021015a0.unknown_10_ != 5 && data_021015a0.unknown_10_ != 4) {
        data_021015a0.unknown_10_ = 3;
        func_0202dd28();
        return;
    }
    data_021015a0.unknown_10_ = 3;
    switch (data_021015a0.unknown_34_) {
    case 3: {
        int var0;
        int var1 = inline_0202dd98();
        if (var1 != 6) var0 = 0;
        else {
            data_021015a0.unknown_10_ = var1;
            int var2 = func_020d68d0(&data_021023c0);
            if (var2) { func_0202c848(var2); var0 = 0; }
            else if (!func_0202d54c()) var0 = 0;
            else var0 = 1;
        }
        if (!var0) func_0202dd28();
        break;
    }
    case 5:
        if (func_020d5f88(&data_02102be0)) { func_0202dd28(); break; }
    case 1:
        if (!func_0202d54c()) func_0202dd28();
        break;
    case 2: {
        int var3;
        int var4 = func_020d68d0(&data_021023c0);
        if (var4) { func_0202c848(var4); var3 = 0; }
        else if (func_0202cca4()) var3 = 1;
        else { func_0202dd28(); var3 = 0; }
        if (!var3) func_0202dd28();
        break;
    }
    case 4:
        if (func_020d5f88(&data_02102be0)) { func_0202dd28(); break; }
    case 0:
        if (!func_0202cca4()) func_0202dd28();
        break;
    }
}
