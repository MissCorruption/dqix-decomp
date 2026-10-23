#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int func_ov017_021d60f4(void*);

struct Struct_ov001_021658b8_8 { char unknown_0_[0x8c]; unsigned char unknown_8c_; char unknown_8d_[0x9c - 0x8c - 1]; unsigned char unknown_9c_; };
extern Struct_ov001_021658b8_8 data_ov001_021658b8;

struct Struct_ov001_021658d8;
extern "C" void* func_ov001_02153884(struct Struct_ov001_021658d8* arg0, int arg1);
extern struct Struct_ov001_021658d8 data_ov001_021658d8;

struct Struct_ov001_02153884 { int unknown_0_; int unknown_4_; };

extern unsigned char data_ov001_02165944[0x11];

// USA: func_ov001_0215e444
extern "C" ARM int func_ov001_0215e444(void* arg0) {
    data_ov001_021658b8.unknown_8c_ = 0;
    int var0 = func_ov017_021d60f4(arg0);
    if (var0 < 0) return 1;
    struct Struct_ov001_02153884* var1 = (struct Struct_ov001_02153884*)func_ov001_02153884(&data_ov001_021658d8, var0);
    if (var1 == NULL) return 0;
    if (var1->unknown_4_ == 0) return 0;
    memcpy(data_ov001_02165944, (void*)var1->unknown_4_, 0x11);
    data_ov001_021658b8.unknown_9c_ = 0;
    return 1;
}
