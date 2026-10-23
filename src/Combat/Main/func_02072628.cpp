#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern "C" void func_020729b4(int arg0, int arg1, int arg2);

struct Struct_02108db0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};

extern struct Struct_02108db0 data_02108db0;

// USA: func_02072628
extern "C" ARM int func_02072628(struct Struct_0201c1c8* arg0) {
    unsigned short var0 = (unsigned short)((Script::Parameter*)arg0)->ToInt();
    if (data_02108db0.unknown_4_ != 0) return 1;
    if (data_02108db0.unknown_8_ != 0 && data_02108db0.unknown_2_ != 0) var0 = data_02108db0.unknown_2_;
    func_020729b4(data_02108db0.unknown_10_, data_02108db0.unknown_c_, var0);
    return 1;
}
