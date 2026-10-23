#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_ov028_021d97d8 { short unknown_0_; short unknown_2_; int unknown_4_; int unknown_8_; };
struct Struct_ov028_021d97d8_2;
extern "C" void func_ov028_021d999c(Struct_ov028_021d97d8_2* arg0, Struct_ov028_021d97d8* arg1);

extern "C" void func_ov028_021d987c(void*);
struct Struct_0201c1c8;
struct Struct_0201c3a4;
extern "C" int func_020d2ff0(const char* arg0);

struct Struct_ov028_021d9bc4_2 {
    void* unknown_0_;
    SafeAllocator* unknown_4_;
};
extern Struct_ov028_021d9bc4_2 data_ov028_021d9bc4;

// USA: func_ov028_021d97d8
extern "C" ARM int func_ov028_021d97d8(void* arg0) {
    Struct_ov028_021d97d8 var0;
    func_ov028_021d987c(&var0);
    var0.unknown_0_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0.unknown_4_ = ((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    var0.unknown_2_ = (short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    const char* var1 = (const char*)(void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 0x18)))->ToString();
    if (var1 != 0) {
        int var2 = func_020d2ff0(var1);
        char* var3 = (char*)data_ov028_021d9bc4.unknown_4_->Allocate(var2 + 1);
        if (var3 != 0) {
            memset(var3, 0, var2);
            sprintf(var3, var1);
            var0.unknown_8_ = (int)var3;
        }
    }
    func_ov028_021d999c((Struct_ov028_021d97d8_2*)data_ov028_021d9bc4.unknown_0_, &var0);
    return 1;
}
