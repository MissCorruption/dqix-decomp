#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_02109dcc { unsigned short unknown_0_[16]; };
extern struct Struct_02109dcc data_02109dcc[];

// USA: func_020a6090
extern "C" ARM int func_020a6090(void* arg0) {
    unsigned char var0 = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    struct Struct_02109dcc* var1 = &data_02109dcc[var0];
    var1->unknown_0_[0] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x8)))->ToInt();
    var1->unknown_0_[1] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    var1->unknown_0_[2] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x18)))->ToInt();
    var1->unknown_0_[3] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x20)))->ToInt();
    var1->unknown_0_[4] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x28)))->ToInt();
    var1->unknown_0_[5] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x30)))->ToInt();
    var1->unknown_0_[6] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x38)))->ToInt();
    var1->unknown_0_[7] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x40)))->ToInt();
    var1->unknown_0_[8] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x48)))->ToInt();
    var1->unknown_0_[9] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x50)))->ToInt();
    var1->unknown_0_[10] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x58)))->ToInt();
    var1->unknown_0_[11] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x60)))->ToInt();
    var1->unknown_0_[12] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x68)))->ToInt();
    var1->unknown_0_[13] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x70)))->ToInt();
    var1->unknown_0_[14] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x78)))->ToInt();
    var1->unknown_0_[15] = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x80)))->ToInt();
    return 1;
}
