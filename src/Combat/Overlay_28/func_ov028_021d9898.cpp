#include <globaldefs.h>
#include "Resource/Script.h"

extern float* data_ov028_021d9bc4;

// USA: func_ov028_021d9898
extern "C" ARM int func_ov028_021d9898(Script::Parameter* arg0, int arg1) {
    *data_ov028_021d9bc4 = arg0->ToFloat();
    return 1;
}
