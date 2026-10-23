#include <globaldefs.h>

struct Struct_020e385c {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
};
struct Struct_020e3a50 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

extern "C" struct Struct_020e385c* func_020e385c(struct Struct_020e385c* arg0, int arg1, int arg2);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c540(void*);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: func_020e3a50
extern "C" ARM void func_020e3a50(struct Struct_020e385c* arg0, int arg1, int arg2, int arg3) {
    if (func_0202c540(func_0202ae18())) {
        func_ov017_021cebcc(1, arg2 & 0xff, arg3);
        return;
    }
    struct Struct_020e3a50* var0 = (struct Struct_020e3a50*)func_020e385c(arg0, arg2, arg3);
    if (var0 == NULL) return;
    if (!(var0->unknown_5_ & (1 << arg1))) return;
    var0->unknown_6_ |= (1 << arg1);
    func_ov017_021cebcc(3, arg2 & 0xff, arg3);
}
