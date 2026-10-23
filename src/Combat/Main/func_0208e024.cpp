#include <globaldefs.h>

struct Struct_0208e024_2 {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 9;
#if defined(jpn)
    unsigned short unknown_3_1_ : 7;
    int unknown_4_;
    int unknown_8_;
#else
    unsigned short unknown_3_1_ : 6;
    unsigned short unknown_3_7_ : 1;
    int unknown1_4_;
#endif
    struct Struct_0208e024_2* unknown1_8_;
};

struct Struct_0208e024 {
    struct Struct_0208e024_2* unknown_0_;
};

// USA: func_0208e024
extern "C" ARM struct Struct_0208e024_2* func_0208e024(struct Struct_0208e024* arg0, int arg1, int arg2) {
    struct Struct_0208e024_2* var0;
    unsigned char var1;
    var0 = arg0->unknown_0_;
    if (var0 == NULL) {
        return NULL;
    }
    var1 = 0;
    while (var0 != NULL) {
        if (arg1 == var0->unknown_3_1_) {
            if (var1 == arg2) {
                return var0;
            }
            var1++;
        }
        var0 = var0->unknown1_8_;
    }
    return var0;
}
