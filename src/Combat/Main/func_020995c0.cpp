#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
extern "C" void* func_02012d88(AllocatorUnion* arg0, unsigned int arg1);

struct Struct_020995c0 {
    void* unknown_0_;
    int unknown_4_;
    int unknown_8_;
};
extern struct Struct_020995c0* data_02109924;
extern AllocatorUnion data_02114e20;

// USA: func_020995c0
extern "C" ARM int func_020995c0(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    struct Struct_020995c0* var1 = data_02109924;
    void* var2 = func_02012d88(&data_02114e20, var0 << 4);
    var1->unknown_0_ = var2;
    var1->unknown_8_ = var0;
    return 1;
}
