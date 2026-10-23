#include <globaldefs.h>

struct Struct_02097418;
struct Struct_02097420;
extern "C" void* func_02097418(struct Struct_02097418* arg0);
extern "C" int func_02097420(struct Struct_02097420* arg0);

struct Struct_ov014_02187450;
struct Struct_ov014_02187450_2;
extern "C" int* func_ov014_02187450(struct Struct_ov014_02187450* arg0, struct Struct_ov014_02187450_2* arg1);

struct Struct_ov014_02187488 {
    unsigned int unknown_0_0_ : 10;
};

// USA: func_ov014_02187488
extern "C" ARM void func_ov014_02187488(struct Struct_ov014_02187450* arg0) {
    unsigned char* var0 = (unsigned char*)func_02097418((struct Struct_02097418*)((char*)arg0 + 0xa4));
    unsigned short var1 = (unsigned short)func_02097420((struct Struct_02097420*)((char*)arg0 + 0xa4));
    unsigned short var2 = 0;
    while (var2 < var1) {
        unsigned char* var3 = var0 + var2 * 0x20;
        int* var4 = func_ov014_02187450(arg0, (struct Struct_ov014_02187450_2*)var3);
        if (var4 != 0) {
            if (((struct Struct_ov014_02187488*)var4)->unknown_0_0_) {
                var3[0x13] |= 2;
            }
        }
        var2++;
    }
}
