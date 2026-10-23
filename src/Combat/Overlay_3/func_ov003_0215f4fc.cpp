#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_02001aec(const char* arg0, const char* arg1, unsigned int arg2);

struct Struct_ov003_0215f4fc {
    int unknown_0_;
    const char* unknown_4_;
    char unknown_8_[0xc];
};

struct Struct_ov003_0215f4fc_2 {
    Struct_ov003_0215f4fc* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};

struct Struct_ov003_0215f4fc_3 {
    int unknown_0_;
    Struct_ov003_0215f4fc_2* unknown_4_;
};

// USA: func_ov003_0215f4fc
extern "C" ARM Struct_ov003_0215f4fc* func_ov003_0215f4fc(Struct_ov003_0215f4fc_3* arg0, const char* arg1) {
    unsigned int var0;
    Struct_ov003_0215f4fc* var1;
    short var2;
    short var3;
    var0 = strlen(arg1);
    var3 = arg0->unknown_4_->unknown_6_;
    var1 = arg0->unknown_4_->unknown_0_;
    for (var2 = 0; var2 < var3; var2++, var1++) {
        if (var1->unknown_4_ != 0 && func_02001aec(var1->unknown_4_, arg1, var0) == 0) {
            return var1;
        }
    }
    return 0;
}
