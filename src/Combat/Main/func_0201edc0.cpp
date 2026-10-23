#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201f1f0;
struct Struct_0201c1c8;

extern "C" void func_0201f1f0(Struct_0201f1f0*, int, SafeAllocator*);

struct Struct_020fdc40_4 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    Struct_0201f1f0* unknown_8_;
};
extern Struct_020fdc40_4 data_020fdc40;

// USA: func_0201edc0
extern "C" ARM int func_0201edc0(Struct_0201c1c8* arg0) {
    func_0201f1f0(data_020fdc40.unknown_8_, ((Script::Parameter*)arg0)->ToInt(), data_020fdc40.unknown_4_);
    return 1;
}
