#include <globaldefs.h>

struct Struct_ov017_021d4df8 {
    unsigned char unknown_0_[0xc];
    int unknown_c_;
    int unknown_10_;
};

// USA: func_ov017_021d4df8
extern "C" ARM int func_ov017_021d4df8(void* arg0, int arg1) {
    char* var0;
    int var1;
    struct Struct_ov017_021d4df8* var2 = *(struct Struct_ov017_021d4df8**)((char*)arg0 + 0x44);
    var0 = (char*)var2 + var2->unknown_c_;
    for (var1 = 0; var1 < var2->unknown_10_; var1++, var0 += 8) {
        if (*(int*)var0 == arg1) return 1;
    }
    return 0;
}
