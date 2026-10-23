#include <globaldefs.h>

extern "C" int func_ov031_0223bf48(int, void*);
extern void* data_ov031_02290d60;

struct Struct_ov031_0223da58 { unsigned int unknown_0_; };

// USA: func_ov031_0223da58
extern "C" ARM int func_ov031_0223da58(Struct_ov031_0223da58* arg0) {
    arg0->unknown_0_ = (arg0->unknown_0_ & 0xc1fffcff) | 0x200;
    int var0 = 0;
    char* var1 = (char*)data_ov031_02290d60;
    if ((char*)arg0 >= var1 + 0x400) var0 = 1;
    int var2 = *(int*)(var1 + var0 * 4 + 0x800);
    return func_ov031_0223bf48(var2, arg0);
}
