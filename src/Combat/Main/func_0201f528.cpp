#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
struct Struct_0201c3a4;
extern "C" void func_02023b0c(char* arg0, char* arg1);
extern "C" void func_020277f4(void* arg0, int arg1, void* arg2, void* arg3);

struct Struct_020fdc4c_3 {
    int unknown_0_;

#if !defined(jpn)
    int unknown_4_;
#endif
    void* unknown_8_;
    int unknown_c_;
    void* unknown_10_;
};
extern struct Struct_020fdc4c_3 data_020fdc4c;

// USA: func_0201f528
extern "C" ARM int func_0201f528(struct Struct_0201c1c8* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    void* var1 = (void*)((Script::Parameter*)((struct Struct_0201c3a4*)((char*)arg0 + 0x8)))->ToString();
    if (var1 == 0) return 0;
    func_02023b0c((char*)data_020fdc4c.unknown_10_, (char*)var1);
    func_020277f4(data_020fdc4c.unknown_10_, var0, var1, data_020fdc4c.unknown_8_);
    return 1;
}
