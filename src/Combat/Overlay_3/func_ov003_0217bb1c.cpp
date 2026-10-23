#include <globaldefs.h>
#include <Resource/Script.h>

struct Struct_ov003_02180cd0 {
    signed char unknown_0_;
    int unknown_4_[9];
};

extern Struct_ov003_02180cd0 data_ov003_02180cd0;
extern char data_ov003_02180cf8[16];
extern char data_ov003_02180d08[56];

// USA: func_ov003_0217bb1c
extern "C" ARM int func_ov003_0217bb1c(Script::Parameter* arg0, int arg1)
{
    int var0 = arg0[0].ToInt();
    if (var0 != data_ov003_02180cd0.unknown_0_) {
        return 1;
    }
    const char* var1 = arg0[1].ToString();
    const char* var2 = arg0[2].ToString();
    const char* var3 = strrchr(var1, '/');
    if (var3 != NULL) {
        var1 = var3 + 1;
    }
    strcpy(data_ov003_02180cf8, var1);
    strcpy(data_ov003_02180d08, var2);
    data_ov003_02180cd0.unknown_4_[0] = 4096.0f * arg0[3].ToFloat();
    data_ov003_02180cd0.unknown_4_[1] = 4096.0f * arg0[4].ToFloat();
    data_ov003_02180cd0.unknown_4_[2] = 4096.0f * arg0[5].ToFloat();
    data_ov003_02180cd0.unknown_4_[3] = 4096.0f * arg0[6].ToFloat();
    data_ov003_02180cd0.unknown_4_[4] = 4096.0f * arg0[7].ToFloat();
    data_ov003_02180cd0.unknown_4_[5] = 4096.0f * arg0[8].ToFloat();
    data_ov003_02180cd0.unknown_4_[6] = 4096.0f * arg0[9].ToFloat();
    data_ov003_02180cd0.unknown_4_[7] = 4096.0f * arg0[10].ToFloat();
    data_ov003_02180cd0.unknown_4_[8] = 4096.0f * arg0[11].ToFloat();
    return 1;
}
