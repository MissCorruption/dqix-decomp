#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union {
        int unknown_0_;
        float unknown1_0_;
    } unknown_4_;
};

struct Struct_020fdc20_7 {
    int unknown_0_;
    int unknown_4_;
    unsigned char* unknown_8_;
};
extern struct Struct_020fdc20_7 data_020fdc20;

// USA: func_0201d4ec
extern "C" ARM int func_0201d4ec(Script::Parameter* arg0, int) {
    struct Struct_0201c1c8* var0 = (struct Struct_0201c1c8*)arg0;
    int var1 = ((Script::Parameter*)var0)->ToInt();
    int var2 = ((Script::Parameter*)(var0 + 1))->ToInt();
    int var3 = ((Script::Parameter*)(var0 + 2))->ToInt();
    *(unsigned short*)(data_020fdc20.unknown_8_ + 0x7e) = var1 | (var2 << 5) | (var3 << 10);
    return 1;
}
