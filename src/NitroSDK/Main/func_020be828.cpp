#include <globaldefs.h>

struct Struct_020be828_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
};

struct Struct_020be828 {
    unsigned long unknown_0_;
    Struct_020be828_2 unknown_4_;
};

struct Struct_020be828_3 {
    char unknown_0_[0x18];
    unsigned long unknown_18_;
};

struct Struct_020bc454;
struct Struct_020bc5bc;
struct Struct_020bc4f8_3;
struct Struct_020bc16c_2;
struct Struct_020bc1ac;
struct Struct_020bc1ec;

extern "C" Struct_020bc5bc* func_020bc454(Struct_020bc454* arg0, int arg1, int arg2);
extern "C" void* func_020bc5bc(int arg0, Struct_020bc5bc* arg1);
extern "C" int func_020bded0(int arg0, unsigned long arg1, void* arg2, int arg3, void** arg4);
extern "C" int func_020bddec(int arg0, unsigned long arg1, void* arg2, int arg3,
                             Struct_020be828_3** arg4);
extern "C" void func_020bc4ec(void* arg0);
extern "C" void func_020bc4f8(Struct_020bc4f8_3* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020bc16c(Struct_020bc16c_2* arg0, unsigned char arg1);
extern "C" void func_020bc1ac(Struct_020bc1ac* arg0, int arg1);
extern "C" void func_020bc1ec(Struct_020bc1ec* arg0, int arg1);

// USA: func_020be828
extern "C" ARM int func_020be828(void* arg0, int arg1, int arg2, int arg3,
                                 const Struct_020be828* arg4, int arg5) {
    Struct_020bc5bc* var0;
    void* var1;
    Struct_020be828_3* var2;
    void* var3;
    int var4;

    var0 = func_020bc454((Struct_020bc454*)arg0, arg1, arg3);
    if (var0 == NULL)
        return 0;

    var1 = func_020bc5bc(arg1, var0);

    var4 = func_020bded0(arg2, 6, var1, 0, &var3);
    if (var4 != 0) {
        func_020bc4ec(var0);
        return 0;
    }

    var4 = func_020bddec(arg5, 1, var1, 0, &var2);
    if (var4 != 0) {
        func_020bc4ec(var0);
        return 0;
    }

    func_020bc4f8((Struct_020bc4f8_3*)var0, (int)((unsigned char*)var2 + var2->unknown_18_), 0,
                                    (int)var3);

    func_020bc16c((Struct_020bc16c_2*)arg0, arg4->unknown_4_.unknown_2_);
    func_020bc1ac((Struct_020bc1ac*)arg0, arg4->unknown_4_.unknown_3_);
    func_020bc1ec((Struct_020bc1ec*)arg0, arg5);
    return 1;
}
