#include <globaldefs.h>

extern "C" int func_ov017_021d60f4(void*);
extern "C" void* func_020704fc(void*);
struct Struct_02070900_2;
struct Struct_02070900;
extern "C" void func_02070900(struct Struct_02070900_2*, struct Struct_02070900*, unsigned int);

struct Struct_ov001_0215b3ac { unsigned int unknown_0_, unknown_4_, unknown_8_; };

// USA: func_ov001_0215b3ac
extern "C" ARM int func_ov001_0215b3ac(void* arg0) {
    Struct_ov001_0215b3ac var0;
    var0.unknown_0_ = func_ov017_021d60f4(arg0);
    var0.unknown_4_ = func_ov017_021d60f4((char*)arg0 + 0x8);
    var0.unknown_8_ = func_ov017_021d60f4((char*)arg0 + 0x10);
    unsigned int var1 = func_ov017_021d60f4((char*)arg0 + 0x18);
    void* var2 = func_020704fc((void*)var1);
    if (var2 != NULL) {
        func_02070900((struct Struct_02070900_2*)var2, (struct Struct_02070900*)&var0, var1);
    }
    return 1;
}
