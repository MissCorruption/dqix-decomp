#include <globaldefs.h>

extern float data_020e88f8[][2];

// USA: func_02074738
extern "C" ARM float func_02074738(int arg0, int arg1) {
    float var0 = data_020e88f8[arg0][arg1];
    if (var0 < 1.0f) {
        var0 = 1.0f;
    }
    return var0;
}
