#include <globaldefs.h>

struct Struct_0205c5b0_2;
extern "C" int func_0205c6bc(Struct_0205c5b0_2*);
struct Struct_0205bd04;
extern "C" int func_0205bd04(struct Struct_0205bd04*);
struct Struct_0205bb04;
extern "C" void func_0205bb04(struct Struct_0205bb04*, int);
struct Struct_0205bf3c;
extern "C" void func_0205bf3c(struct Struct_0205bf3c*);
struct Struct_0205bc10;
extern "C" void func_0205bc10(struct Struct_0205bc10*);
struct Struct_0205bc2c;
extern "C" int func_0205bc2c(Struct_0205bc2c*, int);
struct Struct_0205bb84;
extern "C" int func_0205bb84(struct Struct_0205bb84*);
extern "C" int func_0205bf58(void*, void*);
struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc*, int);

struct Struct_0205c5b0 {
    char unknown_0_[0x34];
    int unknown_34_;
    char unknown_38_[0x94 - 0x38];
    unsigned char unknown_94_;
    unsigned char unknown_95_;
};

// USA: func_0205c5b0
extern "C" ARM int func_0205c5b0(void* arg0, void* arg1) {
    void* var0 = arg1;
    struct Struct_0205c5b0* var1 = (struct Struct_0205c5b0*)arg0;
    int var2 = 0;
    int var3 = var1->unknown_34_;

    if (var1->unknown_94_ != 0) {
        if (func_0205c6bc((Struct_0205c5b0_2*)arg0) != 0) {
            int var4 = func_0205bd04((struct Struct_0205bd04*)((char*)var1 + 0x4));
            func_0205bb04((struct Struct_0205bb04*)((char*)var1 + 0x54), var4);
            func_0205bf3c((struct Struct_0205bf3c*)((char*)var1 + 0x54));
            func_0205bc10((struct Struct_0205bc10*)((char*)var1 + 0x4));
            var2 = 1;
            goto done;
        }
    }

    if (var1->unknown_94_ != 0) {
        typedef int (*Type_0205c5b0)(struct Struct_0205bc2c*, void*);
        if (((Type_0205c5b0)func_0205bc2c)((struct Struct_0205bc2c*)((char*)var1 + 0x4), var0) != 0) {
            int var5 = func_0205bd04((struct Struct_0205bd04*)((char*)var1 + 0x4));
            if (var3 != var5) var2 = 2;
            func_0205bb04((struct Struct_0205bb04*)((char*)var1 + 0x54), var5);
            func_0205bf3c((struct Struct_0205bf3c*)((char*)var1 + 0x54));
            goto done;
        }
    }

    if (var1->unknown_95_ != 0) {
        int var6 = func_0205bb84((struct Struct_0205bb84*)((char*)var1 + 0x54));
        if (func_0205bf58((char*)var1 + 0x54, var0) != 0) {
            int var7 = func_0205bb84((struct Struct_0205bb84*)((char*)var1 + 0x54));
            if (var6 != var7) {
                var2 = 1;
                int var8 = func_0205bb84((struct Struct_0205bb84*)((char*)var1 + 0x54));
                func_0205bcdc((struct Struct_0205bcdc*)((char*)var1 + 0x4), var8);
                var1->unknown_34_ = -1;
                func_0205bc10((struct Struct_0205bc10*)((char*)var1 + 0x4));
            }
        }
    }

done:
    return var2;
}
