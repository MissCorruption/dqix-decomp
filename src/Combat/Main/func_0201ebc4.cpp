#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201ebc4 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
struct Struct_020fdc40 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    Struct_0201ebc4* unknown_8_;
};
extern Struct_020fdc40 data_020fdc40;

// USA: func_0201ebc4
extern "C" ARM int func_0201ebc4(Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    Struct_0201ebc4* var1 = data_020fdc40.unknown_8_;
    var1->unknown_0_ = data_020fdc40.unknown_4_->Allocate(var0 * 0xc);
    var1->unknown_8_ = var0;
    return 1;
}
