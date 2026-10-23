#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;
struct Struct_0201c3a4;

struct Struct_020e5750 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
};
struct Struct_020e5750_2;

extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_020e587c(struct Struct_020e5750_2* arg0, struct Struct_020e5750* arg1);

extern void* data_021536c4[2];

// USA: func_020e5750
extern "C" ARM int func_020e5750(void* arg0) {
    struct Struct_020e5750 var0;
    char* var1;
    memset(&var0, 0, sizeof(var0));
    var0.unknown_8_ = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0.unknown_c_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x8)))->ToInt();
    var0.unknown_4_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    var1 = (char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 0x18)))->ToString();
    if (var1) {
        int var2 = func_020d2ff0(var1);
        char* var3 = (char*)((SafeAllocator*)data_021536c4[0])->Allocate(var2 + 1);
        var0.unknown_10_ = (int)var3;
        sprintf(var3, var1);
    }
    func_020e587c((struct Struct_020e5750_2*)data_021536c4[1], &var0);
    return 1;
}
