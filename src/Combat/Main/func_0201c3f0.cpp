#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201c414;

extern "C" void func_0201c414(struct Struct_0201c414*, int);

struct Struct_020fdc14_4 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_0201c414* unknown_8_;
};
extern struct Struct_020fdc14_4 data_020fdc14;

// USA: func_0201c3f0
extern "C" ARM int func_0201c3f0(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_0201c414(data_020fdc14.unknown_8_, var0);
    return 1;
}
