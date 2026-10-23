#include <globaldefs.h>
#include "Combat/EntryGetterTypes.h"

struct Struct_02040a20 { unsigned int unknown_0_[3]; };

// USA: func_02040a20
extern "C" ARM int func_02040a20(Struct_0203dce4* arg0) {
    void* var0;

    var0 = arg0->unknown_14_;
    if (var0 != NULL) {
        return func_0203cdd0((struct Struct_0203cdd0*)var0);
    }

    var0 = arg0->unknown_18_;
    if (var0 != NULL) {
        struct Struct_02040a20 var1;
        var1 = *(struct Struct_02040a20*)((char*)var0 + 0x50);
        return (int)var1.unknown_0_[1];
    }

    var0 = arg0->unknown_1c_;
    if (var0 != NULL) {
        struct Struct_02040a20 var2;
        var2 = *(struct Struct_02040a20*)((char*)var0 + 0x50);
        return (int)var2.unknown_0_[1];
    }

    return 0;
}
