#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" ARM void* func_ov031_02211b54(void* arg0, void* arg1);
extern "C" ARM int func_ov031_02215fcc(void);

struct Struct_ov031_022162f0 { char unknown_0_[0x790]; void* unknown_790_; };
struct Struct_ov031_0224e5dc { void* unknown_0_; void* unknown_4_; int unknown_8_; };
extern Struct_ov031_0224e5dc data_ov031_0224e5dc;

// USA: func_ov031_022162f0
extern "C" ARM int func_ov031_022162f0(void* arg0, void* arg1) {
    data_ov031_0224e5dc.unknown_4_ = func_ov031_02211b54((void*)1, (void*)func_ov031_02215fcc());
    data_ov031_0224e5dc.unknown_0_ = func_ov031_02211b54((void*)1, (void*)0x794);
    VectorizedMemset(data_ov031_0224e5dc.unknown_0_, 0, 0x794);
    *(void**)data_ov031_0224e5dc.unknown_0_ = arg0;
    ((Struct_ov031_022162f0*)data_ov031_0224e5dc.unknown_0_)->unknown_790_ = arg1;
    data_ov031_0224e5dc.unknown_8_ = 0;
    return 1;
}
