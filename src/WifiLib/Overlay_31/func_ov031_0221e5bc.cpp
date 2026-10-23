#include <globaldefs.h>

struct Struct_ov031_02207204;
extern "C" int func_ov031_02207204(void* arg0, struct Struct_ov031_02207204* arg1);

// USA: func_ov031_0221e5bc
extern "C" THUMB int func_ov031_0221e5bc(void* arg0, struct Struct_ov031_02207204* arg1, unsigned char arg2) {
    *(unsigned char*)arg1 = arg2;
    return func_ov031_02207204(arg0, arg1);
}
