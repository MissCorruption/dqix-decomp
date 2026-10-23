#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0207fcb8_44 = 0x20 };
#else
enum { Enum_0207fcb8_44 = 0x2c };
#endif

struct Struct_0204b010;

extern "C" void func_0204b010(struct Struct_0204b010* arg0, void* arg1);

struct Struct_0207fcb8 {
    char unknown_0_[Enum_0207fcb8_44];
    char* unknown_2c_;
    char unknown_30_[8];
    unsigned char unknown_38_;
};

// USA: func_0207fcb8
extern "C" ARM void func_0207fcb8(struct Struct_0207fcb8* arg0) {
    unsigned char var0;
    if (arg0->unknown_2c_ != NULL) {
        for (var0 = 0; var0 < arg0->unknown_38_; var0++) {
            func_0204b010((struct Struct_0204b010*)(arg0->unknown_2c_ + var0 * 0x20), NULL);
        }
    }
}
