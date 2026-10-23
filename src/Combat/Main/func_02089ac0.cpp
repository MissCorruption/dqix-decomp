#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c3a4 {
    int unknown_0_;
    void* unknown_4_;
};
extern "C" int func_020d2ff0(const char* arg0);

struct Struct_02089ac0 {
    char unknown_0_[0x14];
    char** unknown_14_;
    short unknown_18_;
};

struct Struct_02108efc_2 {
    struct Struct_02089ac0* unknown_0_;
    int unknown_4_;
    int unknown_8_;
    SafeAllocator* unknown_c_;
};
extern struct Struct_02108efc_2 data_02108efc;

// USA: func_02089ac0
extern "C" ARM int func_02089ac0(struct Struct_0201c3a4* arg0) {
    char** var0;
    short var1 = data_02108efc.unknown_0_->unknown_18_;
    var0 = (char**)data_02108efc.unknown_c_->Allocate(var1 * 4);
    for (short var2 = 0; var2 < var1; var2++) {
        char* var3 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
        arg0 = (struct Struct_0201c3a4*)((char*)arg0 + 8);
        int var4 = func_020d2ff0(var3);
        var0[var2] = (char*)data_02108efc.unknown_c_->Allocate(var4 + 1);
        memset(var0[var2], 0, var4 + 1);
        memcpy(var0[var2], var3, var4);
    }
    data_02108efc.unknown_0_->unknown_14_ = var0;
    return 1;
}
