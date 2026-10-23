#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0202c1a4;
extern "C" signed char func_0202c1a4(struct Struct_0202c1a4* arg0);
extern "C" int func_02012fe4(void);
extern "C" void func_02098efc(char* arg0, int arg1, const void* arg2, unsigned int arg3);
extern "C" void* func_0202ae24(void);
struct Struct_0205e804;
extern "C" void func_0205e804(struct Struct_0205e804* arg0, int arg1);

struct Struct_ov017_021d3dcc {
    char unknown_0_[0x11];
    unsigned char unknown_11_0_ : 4;
    unsigned char unknown_11_4_ : 3;
    unsigned char unknown_11_7_ : 1;
    unsigned short unknown_12_;
};

// USA: func_ov017_021d3dcc
extern "C" ARM void func_ov017_021d3dcc(int arg0, struct Struct_ov017_021d3dcc* arg1, GameState* arg2, int arg3, struct Struct_0202c1a4* arg4) {
#if defined(jpn)
 enum {Enum_ov017_021d3dcc_2112=0x860};
#else
 enum {Enum_ov017_021d3dcc_2112=0x840};
#endif
    if (func_0202c1a4(arg4) != arg1->unknown_11_4_) {
        return;
    }
    char* var0 = (char*)func_02012fe4();
    char* var1 = var0 + Enum_ov017_021d3dcc_2112;
    func_02098efc(var1, arg1->unknown_12_, (const void*)((char*)arg1 + 4), arg1->unknown_11_0_);
    if (!arg1->unknown_11_7_) {
        return;
    }
    var1[0x1000 + 0xb62] = 1;
    struct Struct_0205e804* var2 = (struct Struct_0205e804*)func_0202ae24();
    func_0205e804(var2, 0xb9);
}
