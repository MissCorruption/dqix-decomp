#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201a300_7;

extern "C" void func_02028754(struct Struct_0201a300_7* arg0, SafeAllocator* arg1, int arg2);

struct Struct_020fdd30_2 {
    struct Struct_0201a300_7* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern struct Struct_020fdd30_2 data_020fdd30;

// USA: func_02027fbc
extern "C" ARM int func_02027fbc(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    func_02028754(data_020fdd30.unknown_0_, data_020fdd30.unknown_4_, var0);
    return 1;
}
