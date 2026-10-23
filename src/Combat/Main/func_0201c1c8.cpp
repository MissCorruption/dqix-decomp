#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201c444;

extern "C" void func_0201c444(struct Struct_0201c444*, int);

struct Struct_020fdc14 {
    int unknown_0_;
    int unknown_4_;
    struct Struct_0201c444* unknown_8_;
};
extern struct Struct_020fdc14 data_020fdc14;

// USA: func_0201c1c8
extern "C" ARM int func_0201c1c8(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_0201c444(data_020fdc14.unknown_8_, var0);
    data_020fdc14.unknown_0_ = 0;
    return 1;
}
