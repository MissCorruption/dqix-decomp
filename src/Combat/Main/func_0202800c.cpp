#include <globaldefs.h>
#include "Resource/Script.h"
#include "World/GrottoTileGraph.h"

struct Struct_0201c1c8;
struct Struct_0201a300_9;
extern "C" void func_02028378(struct Struct_0201a300_9* arg0, struct Struct_0201a300_2* arg1);

struct Struct_020fdd30_4 {
    struct Struct_0201a300_9* unknown_0_;
};
extern struct Struct_020fdd30_4 data_020fdd30;

// USA: func_0202800c
extern "C" ARM int func_0202800c(Script::Parameter* arg0) {
    const Script::Parameter* var0 = arg0;
    struct Struct_0201a300_2 var1;
    int var2 = var0[0].ToInt();
    int var3 = var0[1].ToInt();
    var1.unknown_0_ = var2;
    var1.unknown_2_ = var3;
    func_02028378(data_020fdd30.unknown_0_, &var1);
    return 1;
}
