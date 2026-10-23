#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201a300_6;

extern "C" void func_020286fc(struct Struct_0201a300_6* arg0, SafeAllocator* arg1, int arg2);

struct Struct_020fdd30 {
    struct Struct_0201a300_6* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern struct Struct_020fdd30 data_020fdd30;

// USA: func_02027f90
extern "C" ARM int func_02027f90(struct Struct_0201c1c8* arg0) {
    func_020286fc(data_020fdd30.unknown_0_, data_020fdd30.unknown_4_, ((Script::Parameter*)arg0)->ToInt());
    return 1;
}
