#include <globaldefs.h>
#include "Resource/MessageSystem.h"
#include "Resource/MessageUpdate.h"
#include "Combat/EntryGetterTypes.h"

extern "C" void* func_0203cf4c(void);

struct Struct_0203dce4_2;
struct Struct_0203dce4;
extern "C" struct Struct_0203dce4* func_0203dce4(struct Struct_0203dce4_2* arg0, int arg1);

// USA: func_020656e4
ARM int Struct_02021b84::func_020656e4(int arg0) {
    if (!unknown_19b6_) return 0;

    struct Struct_0203dce4* var0 = func_0203dce4(
        (struct Struct_0203dce4_2*)func_0203cf4c(),
        unknown_1838_);
    if (var0 == NULL) return 0;

    int var1 = 1;
    func_02040af0(var0,
        unknown_1844_);

    if (func_020409e0(var0) ==
        func_02040a20(var0)) {
        unknown_19b6_ = 0;
        var1 = 0;
    }
    return var1;
}
