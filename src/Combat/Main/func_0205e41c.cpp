#include <globaldefs.h>

extern "C" void func_020d8654(void);
extern "C" void func_020d84e4(void);
extern "C" void func_020d84e8(void);
extern "C" void* func_0202ae18(void);
extern "C" void func_020d8694(void);
extern "C" int func_0202b7d8(int* arg0);

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};
extern "C" struct Struct_0205e1e4_2* func_0205e1e4(struct Struct_0205e1e4* arg0);

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};
extern "C" void func_0205e18c(struct Struct_0205e18c* arg0, struct Struct_0205e18c_2* arg1);

// USA: func_0205e41c
extern "C" ARM struct Struct_0205e1e4_2* func_0205e41c(void* arg0, int* arg1) {
    struct Struct_0205e1e4_2* var0;
    func_020d8654();
    func_020d84e4();
    var0 = NULL;
    if (func_0202b7d8((int*)func_0202ae18())) {
        var0 = func_0205e1e4((struct Struct_0205e1e4*)((char*)arg0 + 0x1518));
        if (var0 == NULL) {
            *arg1 = -1;
            var0 = NULL;
        } else {
            func_0205e18c((struct Struct_0205e18c*)((char*)arg0 + 0x1500), (struct Struct_0205e18c_2*)var0);
            *arg1 = *(short*)((char*)var0 + 0x14);
        }
    }
    func_020d84e8();
    func_020d8694();
    return var0;
}
