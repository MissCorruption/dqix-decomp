#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8 {
    int unknown_0_;
    union { int unknown_0_; float unknown1_0_; } unknown_4_;
};
extern "C" void func_02027910(void*, int, int, int, int);

struct Struct_020fdc4c_4 {
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;

#if !defined(jpn)
    int unknown_c_;
#endif
    void* unknown_10_;
};
extern struct Struct_020fdc4c_4 data_020fdc4c;

struct Struct_0201f5a8 {
    struct Struct_0201c1c8 unknown_0_;
    struct Struct_0201c1c8 unknown_8_;
    struct Struct_0201c1c8 unknown_10_;
    struct Struct_0201c1c8 unknown_18_;
};

// USA: func_0201f5a8
extern "C" ARM int func_0201f5a8(struct Struct_0201f5a8* arg0) {
    int var0 = ((Script::Parameter*)&arg0->unknown_0_)->ToInt();
    int var1 = ((Script::Parameter*)&arg0->unknown_8_)->ToInt();
    int var2 = ((Script::Parameter*)&arg0->unknown_10_)->ToInt();
    int var3 = ((Script::Parameter*)&arg0->unknown_18_)->ToInt();
    func_02027910((void*)data_020fdc4c.unknown_10_, var0, var1, var2, var3);
    return 1;
}
