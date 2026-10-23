#include <globaldefs.h>

#if defined(jpn)
#define REGION_OFFSET_0 0x47d
#else
#define REGION_OFFSET_0 0x43d
#endif


extern "C" int func_ov000_02176e3c(int arg0, void* arg1, int arg2, int arg3, int arg4, int arg5);

struct Struct_ov000_02184288 { int unknown_0_; int unknown_4_; int unknown_8_; };
extern struct Struct_ov000_02184288 data_ov000_02184288;
extern int data_ov000_02183ff0;

// USA: func_ov000_02170078
extern "C" ARM void func_ov000_02170078(char* arg0) {
    signed char var0 = *(signed char*)(arg0 + REGION_OFFSET_0);
    if (var0 >= 0) {
        int var1 = data_ov000_02184288.unknown_8_;
        if (var1 != 0) {
            func_ov000_02176e3c(var1, arg0, var0, data_ov000_02183ff0, data_ov000_02184288.unknown_4_, 1);
        }
        *(signed char*)(arg0 + REGION_OFFSET_0) = -1;
    }
}
