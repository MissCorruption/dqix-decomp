#include <globaldefs.h>

struct Struct_0201099c_9 {
    unsigned int unknown_0_[8];
};

struct Struct_020de5b0_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
};

typedef int (*Type_020de5fc)(struct Struct_0201099c_9*);

extern "C" int func_020de56c(void*);
extern "C" struct Struct_0201099c_9* func_020de650(struct Struct_020de5b0_2* arg0, int arg1, Type_020de5fc arg2);

struct Struct_0201099c_10 {
    unsigned short unknown_0_;
    unsigned char unknown_2_[10];
    struct Struct_0201099c_9* unknown_c_;
    unsigned char unknown_10_[4];
    unsigned char unknown_14_;
};

// USA: func_020dedd0
extern "C" ARM struct Struct_0201099c_9* func_020dedd0(struct Struct_0201099c_10* arg0, int arg1) {
    int var0;
    struct Struct_0201099c_9* var1;
    unsigned short var2;
    if (arg1 < 0) {
        return NULL;
    }
    if (arg0->unknown_14_ != 0) {
        return func_020de650((struct Struct_020de5b0_2*)arg0, arg1, (Type_020de5fc)func_020de56c);
    }
    var1 = arg0->unknown_c_;
    if (var1 == NULL || (Type_020de5fc)func_020de56c == NULL) {
        var1 = NULL;
        goto done;
    }
    var2 = arg0->unknown_0_;
    if (var2 == 0) {
        var1 = NULL;
        goto done;
    }
    for (var0 = 0; var0 < var2; var0++, var1++) {
        if (arg1 == func_020de56c(var1)) {
            goto done;
        }
    }
    var1 = NULL;
done:
    return var1;
}
