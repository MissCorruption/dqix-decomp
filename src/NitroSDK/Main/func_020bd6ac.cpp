#include <globaldefs.h>

struct Struct_020bd6ac_2 { char unknown_0_[0x8c]; unsigned char* unknown_8c_; };
extern struct Struct_020bd6ac_2* data_02110370;

struct Struct_020bd6ac { int unknown_0_; int unknown_4_[1]; };

// USA: func_020bd6ac
extern "C" ARM void* func_020bd6ac(int arg0) {
    unsigned char* var0 = data_02110370->unknown_8c_;
    int var1 = *(int*)(var0 + 0x20);
    var0 = (var1 == 0) ? 0 : var0 + var1;
    if (var0 == 0) return 0;
    if (arg0 < 0) return 0;
    struct Struct_020bd6ac* var2 = (struct Struct_020bd6ac*)var0;
    if ((unsigned int)arg0 >= (unsigned int)var2->unknown_0_) return 0;
    int var3 = var2->unknown_4_[arg0];
    unsigned char* var4 = *(unsigned char**)((char*)data_02110370 + 0x8c);
    return var3 == 0 ? 0 : var4 + var3;
}
