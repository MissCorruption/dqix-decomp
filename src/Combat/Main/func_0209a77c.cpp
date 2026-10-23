#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_0209a77c_2;
struct Struct_0209a93c;
extern "C" void func_0209a93c(struct Struct_0209a93c* arg0, struct Struct_0209a77c_2* arg1);

extern struct Struct_0209a93c* data_02109ba8;

struct Struct_0209a77c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
};

// USA: func_0209a77c
extern "C" ARM int func_0209a77c(void* arg0) {
    struct Struct_0209a77c var0;
    var0.unknown_0_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)arg0))->ToInt();
    var0.unknown_2_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)arg0 + 8)))->ToInt();
    func_0209a93c(data_02109ba8, (struct Struct_0209a77c_2*)&var0);
    return 1;
}
