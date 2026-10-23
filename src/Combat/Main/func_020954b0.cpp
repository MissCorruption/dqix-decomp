#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };
extern int data_02109404;

// USA: func_020954b0
extern "C" ARM int func_020954b0(struct Struct_0201c1c8* arg0) {
    unsigned char var0 = ((Script::Parameter*)arg0)->ToInt();
    unsigned char var1 = ((Script::Parameter*)(arg0 + 1))->ToInt();
    if (var1 < 0xcc) {
        unsigned char* var2 = *(unsigned char**)((char*)&data_02109404 + 0x10);
        var2[var1] = var0;
    }
    return 1;
}
