#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};

extern "C" int func_020d2ff0(const char* arg0);

struct Struct_020899fc {
    char unknown_0_[0xc];
    char** unknown_c_;
    short unknown_10_;
};

struct Struct_02108efc {
    struct Struct_020899fc* unknown_0_;
    char unknown_4_[0xc - 4];
    SafeAllocator* unknown_c_;
};
extern struct Struct_02108efc data_02108efc;

// USA: func_020899fc
extern "C" ARM int func_020899fc(struct Struct_0201c3a4* arg0) {
    struct Struct_020899fc* var0 = data_02108efc.unknown_0_;
    char** var1;
    short var2 = var0->unknown_10_;
    short var3;
    var1 = (char**)data_02108efc.unknown_c_->Allocate(var2 * 4);

    for (var3 = 0; var3 < var2; var3++) {
        char* var4 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
        arg0++;

        int var5 = func_020d2ff0(var4);
        char* var6 = (char*)data_02108efc.unknown_c_->Allocate(var5 + 1);
        var1[var3] = var6;
        memset(var1[var3], 0, var5 + 1);
        memcpy(var1[var3], var4, var5);
    }

    data_02108efc.unknown_0_->unknown_c_ = var1;
    return 1;
}
