#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0208dc84_2;
extern "C" void func_0208e000(struct Struct_0208dc84_2* arg0, struct Struct_0208dc84_2* arg1);

struct Struct_0208df94 {
    short unknown_0_;
    unsigned short unknown_2_;
    int unknown_4_;
#if defined(jpn)
    int unknown_8_;
#endif
    struct Struct_0208df94* unknown1_8_;
};

struct Struct_0208dc84 {
    struct Struct_0208df94* unknown_0_;
    short unknown_4_;
};

// USA: func_0208df94
extern "C" ARM void func_0208df94(struct Struct_0208dc84* arg0, SafeAllocator* arg1, struct Struct_0208dc84_2* arg2) {
    struct Struct_0208df94* var0 = (struct Struct_0208df94*)arg1->Allocate(sizeof(Struct_0208df94));
    struct Struct_0208df94* var1 = arg0->unknown_0_;
    if (var1 != NULL) {
        while (var1->unknown1_8_ != NULL) {
            var1 = var1->unknown1_8_;
        }
        func_0208e000((struct Struct_0208dc84_2*)var0, arg2);
        var1->unknown1_8_ = var0;
    } else {
        arg0->unknown_0_ = var0;
        func_0208e000((struct Struct_0208dc84_2*)var0, arg2);
    }
    arg0->unknown_4_++;
}
