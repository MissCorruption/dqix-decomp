#include <globaldefs.h>
#include "Resource/Script.h"
#include "Combat/BufferedScriptResult.h"

extern int data_020f0d2c;
extern Struct_02074060* data_02108dd8;

// USA: func_02074060
extern "C" ARM int func_02074060(Script::Parameter* arg0, int) {
    int var0 = (arg0++)->ToInt();
    if (var0 != data_020f0d2c) return 1;
    data_02108dd8->unknown_0_ = (short)var0;
    for (int var1 = 0; var1 < 3; var1++) {
        data_02108dd8->unknown_2_[var1] = (short)arg0->ToInt();
        Script::Parameter* var2 = arg0 + 1;
        arg0 += 2;
        data_02108dd8->unknown_8_[var1] = (short)var2->ToInt();
    }
    data_02108dd8->unknown_e_ = (short)arg0->ToInt();
    data_02108dd8->unknown_10_ = (short)(arg0 + 1)->ToInt();
    data_02108dd8->unknown_12_ = 0;
    return 1;
}
