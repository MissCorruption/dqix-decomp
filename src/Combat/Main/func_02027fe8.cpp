#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201a300_8;

extern "C" void func_0202834c(struct Struct_0201a300_8* arg0, SafeAllocator* arg1, int arg2);

struct Struct_020fdd30_3 {
    struct Struct_0201a300_8* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern struct Struct_020fdd30_3 data_020fdd30;

// USA: func_02027fe8
extern "C" ARM int func_02027fe8(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_0202834c(data_020fdd30.unknown_0_, data_020fdd30.unknown_4_, var0);
    return 1;
}
