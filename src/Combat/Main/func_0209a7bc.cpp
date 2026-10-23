#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0209a97c;
struct Struct_0209a7bc;
extern "C" void func_0209a97c(struct Struct_0209a97c* arg0, int arg1, struct Struct_0209a7bc* arg2);

extern struct Struct_0209a97c* data_02109ba8;

struct Struct_0209a7bc_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_0209a7bc
extern "C" ARM int func_0209a7bc(void* arg0) {
    int var0 = ((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    struct Struct_0209a7bc_2 var1;
    var1.unknown_0_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    var1.unknown_2_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 0x10)))->ToInt();
    func_0209a97c(data_02109ba8, var0, (struct Struct_0209a7bc*)&var1);
    return 1;
}
