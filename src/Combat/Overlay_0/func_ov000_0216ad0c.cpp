#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c3a4;
extern "C" void func_ov000_02169b78(void* arg0);
extern int data_ov000_02184264;

struct Struct_ov000_0216ad0c {
    int unknown_0_;
    int unknown_4_;
    char* unknown_8_;
};

// USA: func_ov000_0216ad0c
extern "C" ARM int func_ov000_0216ad0c(struct Struct_0201c3a4* arg0) {
    Struct_ov000_0216ad0c* var0 = (Struct_ov000_0216ad0c*)(*(SafeAllocator**)((char*)&data_ov000_02184264 + 0x8))->Allocate(0xc);
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x22;
    char* var1 = (char*)(void*)((Script::Parameter*)arg0)->ToString();
    char* var2 = (char*)(*(SafeAllocator**)((char*)&data_ov000_02184264 + 0x8))->Allocate(strlen(var1) + 1);
    var0->unknown_8_ = var2;
    strcpy(var2, var1);
    func_ov000_02169b78(var0);
    return 1;
}
