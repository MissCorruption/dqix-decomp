#include <globaldefs.h>

struct Struct_020be924_2 {
    unsigned short unknown_0_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned short unknown_6_;
};

struct Struct_020be924 {
    unsigned long unknown_0_;
    Struct_020be924_2 unknown_4_;
};

struct Struct_020be924_3 {
    char unknown_0_[0x18];
    unsigned long unknown_18_;
};

struct Struct_020bc454;
struct Struct_020bc5bc;
struct Struct_020bc4f8_3;
struct Struct_020bc16c_2;
struct Struct_020bc1ac;
struct Struct_02061c04_19;

extern "C" Struct_020bc5bc* func_020bc454(Struct_020bc454* arg0, int arg1, int arg2);
extern "C" void* func_020bc5bc(int arg0, Struct_020bc5bc* arg1);
extern "C" int func_020bded0(int arg0, unsigned long arg1, void* arg2, int arg3, void** arg4);
extern "C" void func_020bc4ec(void* arg0);
extern "C" void func_020bc4f8(Struct_020bc4f8_3* arg0, int arg1, int arg2, int arg3);
extern "C" void func_020bc16c(Struct_020bc16c_2* arg0, unsigned char arg1);
extern "C" void func_020bc1ac(Struct_020bc1ac* arg0, int arg1);
extern "C" void func_020bc210(Struct_02061c04_19* arg0, int arg1, int arg2);

// USA: func_020be924
extern "C" ARM int func_020be924(void* arg0, int arg1, int arg2, int arg3,
                                 const Struct_020be924* arg4, const Struct_020be924_3* arg5,
                                 int arg6, int arg7) {
    Struct_020bc5bc* var0;
    void* var1;
    void* var2;
    int var3;

    var0 = func_020bc454((Struct_020bc454*)arg0, arg1, arg3);
    if (var0 == NULL)
        return 0;

    var1 = func_020bc5bc(arg1, var0);

    var3 = func_020bded0(arg2, 6, var1, 0, &var2);
    if (var3 != 0) {
        func_020bc4ec(var0);
        return 0;
    }

    func_020bc4f8((Struct_020bc4f8_3*)var0, (int)((unsigned char*)arg5 + arg5->unknown_18_),
                                    arg4->unknown_0_, (int)var2);

    func_020bc16c((Struct_020bc16c_2*)arg0, arg4->unknown_4_.unknown_2_);
    func_020bc1ac((Struct_020bc1ac*)arg0, arg4->unknown_4_.unknown_3_);
    func_020bc210((Struct_02061c04_19*)arg0, arg6, arg7);
    return 1;
}
