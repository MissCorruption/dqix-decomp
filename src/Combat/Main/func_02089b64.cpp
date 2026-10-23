#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_02089ea0;

extern "C" void func_02089ea0(struct Struct_02089ea0* arg0, SafeAllocator* arg1, int arg2);

struct Struct_02108efc_3 {
    struct Struct_02089ea0* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    SafeAllocator* unknown_c_;
};
extern Struct_02108efc_3 data_02108efc;

// USA: func_02089b64
extern "C" ARM int func_02089b64(struct Struct_0201c1c8* arg0) {
    func_02089ea0(data_02108efc.unknown_0_, data_02108efc.unknown_c_, (short)((Script::Parameter*)arg0)->ToInt());
    return 1;
}
