#include <globaldefs.h>
#include "Resource/Script.h"
#include "World/GrottoTileGraph.h"

struct Struct_0201c1c8;

struct Struct_0201a300_11;
extern "C" Struct_0201a300_3* func_020283c0(struct Struct_0201a300_11* arg0, int arg1);

struct Struct_0201a300_12;
extern "C" void func_020281d8(struct Struct_0201a300_12* arg0, struct Struct_0201a300* arg1);

extern void* data_020fdd30;

// USA: func_02027e44
extern "C" ARM int func_02027e44(void* arg0, int arg1) {
    struct Struct_0201a300 var0;
    var0.unknown_4_ = 0;
    var0.unknown_0_ = 0;
    void* var1 = arg0;
    arg0 = (char*)arg0 + 8;
    int var2 = ((Script::Parameter*)((struct Struct_0201c1c8*)var1))->ToInt();
    arg1 = arg1 - 1;
    var0.unknown_0_ = func_020283c0((struct Struct_0201a300_11*)data_020fdd30, var2);
    for (; arg1 >= 0;) {
        int var3 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
        arg0 = (char*)arg0 + 8;
        arg1 = arg1 - 1;
        Struct_0201a300_3* var4 = func_020283c0((struct Struct_0201a300_11*)data_020fdd30, var3);
        var0.unknown_4_ = var4;
        if (var0.unknown_0_ != 0 && var4 != 0) {
            func_020281d8((struct Struct_0201a300_12*)data_020fdd30, &var0);
        }
        if (var0.unknown_4_ != 0) var0.unknown_0_ = var0.unknown_4_;
    }
    return 1;
}
