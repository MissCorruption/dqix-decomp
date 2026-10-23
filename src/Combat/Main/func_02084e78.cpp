#include <globaldefs.h>

struct Struct_02084e78 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
};

// USA: func_02084e78
extern "C" ARM float func_02084e78(void* arg0) {
    float var0 = 0.0f;
    int var1 = 0;
    while (var1 < 0xb) {
        char* var2 = (char*)arg0 + (var1 << 5);
        if (*(short*)(var2 + 0x1ac) > 0) {
            char* var3 = *(char**)(var2 + 0x194);
            struct Struct_02084e78* var4 = (struct Struct_02084e78*)(var3 + 0xc);
            unsigned int var5 = var4->unknown_2_4_;
            var0 = var0 + ((float)var5 / 10.0f);
        }
        var1++;
    }
    return var0;
}
