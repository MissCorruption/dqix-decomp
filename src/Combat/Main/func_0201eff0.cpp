#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201f308;
struct Struct_0201c3a4;

extern "C" void func_0201f308(Struct_0201f308*, char*, SafeAllocator*);

struct Struct_020fdc40_6 {
    int unknown_0_;
    SafeAllocator* unknown_4_;
    Struct_0201f308* unknown_8_;
};
extern Struct_020fdc40_6 data_020fdc40;

// USA: func_0201eff0
extern "C" ARM int func_0201eff0(Struct_0201c3a4* arg0) {
    char* var0 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
    if (var0 != NULL) {
        func_0201f308(data_020fdc40.unknown_8_, var0, data_020fdc40.unknown_4_);
    }
    return 1;
}
