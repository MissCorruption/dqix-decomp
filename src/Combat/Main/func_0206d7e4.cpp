#include <globaldefs.h>

#include "Combat/NodeLookup.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0201c3a4;

struct Struct_0206d7e4;

struct Struct_02108cec_6 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x10 - 0xc];
    void* unknown_10_;
    void* unknown_14_;
};
extern struct Struct_02108cec_6 data_02108cec;

struct Struct_0206d7e4 {
    unsigned char unknown_0_[0x44];
    unsigned short unknown_44_;
    unsigned char unknown_46_[0x54 - 0x46];
    void* unknown_54_;
    void* unknown_58_;
    unsigned char unknown_5c_[0x70 - 0x5c];
    struct Struct_0206d7e4* unknown_70_;
};

// USA: func_0206d7e4
extern "C" ARM int func_0206d7e4(void* arg0) {
    struct Struct_0206d7e4* var0;
    int var1 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0 = (Struct_0206d7e4*)func_0206db20(data_02108cec.unknown_10_, var1);
    if (var0 == 0) {
        return 0;
    }
    while (var0 != 0) {
        if (var0->unknown_44_ == data_02108cec.unknown_a_) {
            break;
        }
        var0 = var0->unknown_70_;
    }
    if (var0 == 0) {
        return 0;
    }

    char* var2;
    unsigned short var3;

    var2 = (char*)(extern void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 8)))->ToString();
    var3 = (unsigned short)strlen(var2);
    var0->unknown_54_ = ((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(var3 + 1);
    if (var0->unknown_54_ != 0) {
        memset(var0->unknown_54_, 0, var3 + 1);
        memcpy(var0->unknown_54_, var2, var3);
    }

    var2 = (char*)(extern void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 0x10)))->ToString();
    var3 = (unsigned short)strlen(var2);
    var0->unknown_58_ = ((SafeAllocator*)data_02108cec.unknown_14_)->Allocate(var3 + 1);
    if (var0->unknown_58_ != 0) {
        memset(var0->unknown_58_, 0, var3 + 1);
        memcpy(var0->unknown_58_, var2, var3);
    }

    return 1;
}
