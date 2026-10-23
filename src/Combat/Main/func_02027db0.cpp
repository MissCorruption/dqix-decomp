#include <globaldefs.h>
#include "Resource/Script.h"
#include "World/GrottoTileGraph.h"

struct Struct_0201c1c8;

struct Struct_0201a300_11;
extern "C" Struct_0201a300_3* func_020283c0(struct Struct_0201a300_11* arg0, int arg1);

struct Struct_0201a300_12;
extern "C" void func_020281d8(struct Struct_0201a300_12* arg0, struct Struct_0201a300* arg1);

extern void* data_020fdd30;

// USA: func_02027db0
extern "C" ARM int func_02027db0(void* arg0) {
    struct Struct_0201a300 var0;
    int var1, var2;
    var0.unknown_4_ = 0;
    var0.unknown_0_ = 0;
    var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    if (var1 == var2) return 0;
    var0.unknown_0_ = func_020283c0((struct Struct_0201a300_11*)data_020fdd30, var1);
    var0.unknown_4_ = func_020283c0((struct Struct_0201a300_11*)data_020fdd30, var2);
    if (var0.unknown_0_ == 0 || var0.unknown_4_ == 0) return 0;
    func_020281d8((struct Struct_0201a300_12*)data_020fdd30, &var0);
    return 1;
}
