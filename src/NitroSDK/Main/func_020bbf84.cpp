#include <globaldefs.h>
#include "NitroSDK/Memory/SignedAllocator.h"

struct Struct_020bbf84_2;
typedef void (*Type_020bbf84)(void* mem, unsigned int size, unsigned int data1, unsigned int data2);
extern "C" void* func_020bda58(struct Struct_020bbf84_2* arg0, unsigned int arg1, Type_020bbf84 arg2, int arg3, int arg4);

extern "C" void* func_020bd914(void* arg0, unsigned int arg1);

struct Struct_020bc820;
extern "C" void func_020bc820(struct Struct_020bc820* arg0);

struct Struct_020bbf84 {
    char unknown_0_[8];
    void* unknown_8_;
    void* unknown_c_;
    int unknown_10_;
    char unknown_14_[4];
};

struct Struct_0210f824 {
    char unknown_0_[0xc];
    SignedAllocatorList unknown_c_;
    char unknown_18_[0xc];
};
extern struct Struct_0210f824 data_0210f824[];

// USA: func_020bbf84
extern "C" ARM int func_020bbf84(int arg0, struct Struct_020bbf84_2* arg1, unsigned int arg2) {
    Struct_020bbf84* var0 = (Struct_020bbf84*)func_020bda58(arg1, arg2 + 0x14, (Type_020bbf84)&func_020bc820, 0, 0);
    if (var0 == NULL) {
        return 0;
    }
    var0->unknown_c_ = NULL;
    var0->unknown_10_ = arg0;
    var0->unknown_8_ = NULL;
    void* var1 = func_020bd914(&var0->unknown_14_[0], arg2);
    if (var1 == NULL) {
        return 0;
    }
    var0->unknown_8_ = var1;
    data_0210f824[arg0].unknown_c_.InsertAtEnd((SignedAllocatorHeader*)var0);
    return 1;
}
