#include <globaldefs.h>
#include "World/Object3D.h"
#if defined(jpn)
enum { Enum_02079040_24 = 0x14 };
#else
enum { Enum_02079040_24 = 0x18 };
#endif

struct Struct_020fdd44;
extern "C" struct Struct_020fdd44* func_02027ca4(void);

struct Struct_02039df4;

extern "C" struct Struct_020fdd44* func_02028bd0(struct Struct_020fdd44* arg0, int arg1);

extern "C" int func_02028638(void* arg0, void* arg1);

struct Struct_020283fc;
extern "C" int func_020283fc(struct Struct_020283fc* arg0, int arg1);

struct Struct_02076df4 {
    char unknown_0_[0x44];
    char unknown_44_[0xb8 - 0x44];
    unsigned short unknown_b8_;
};

// USA: func_02079040
extern "C" ARM unsigned short func_02079040(struct Struct_02076df4* arg0, unsigned char* arg1) {
    struct Struct_020fdd44* var0;
    struct Struct_020fdd44* var1;
    unsigned short var2;
    int var3;
    int var4;
    *arg1 = 0;
    var0 = func_02027ca4();
    var2 = ((Object3D*)((struct Struct_02039df4*)arg0))->GetField06();
    var1 = func_02028bd0(var0, var2);
    if (var1 == NULL) {
        return 0;
    }
    var3 = func_02028638((char*)var1 + Enum_02079040_24, (char*)arg0 + 0x44);
    var4 = func_020283fc((struct Struct_020283fc*)((char*)var1 + Enum_02079040_24), var3);
    if (var4 != -1) {
        arg0->unknown_b8_ = var4;
    }
    return (unsigned short)var3;
}
