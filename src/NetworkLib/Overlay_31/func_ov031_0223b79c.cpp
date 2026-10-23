#include <globaldefs.h>

struct Struct_ov031_0223b79c_2 {
    void* unknown_0_;
    void* unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
};
struct Struct_ov031_0223b79c {
    unsigned char unknown_0_[0x200];
    Struct_ov031_0223b79c_2 unknown_200_;
    Struct_ov031_0223b79c_2 unknown_210_;
    char* unknown_220_;
    void* unknown_224_;
};
extern Struct_ov031_0223b79c* data_ov031_02290d28;
extern "C" void* func_ov031_0223cf4c(int, int);
extern "C" void func_ov031_0223beec(int, int, int);
extern "C" char* func_ov031_0223d858(void);
extern "C" void* func_ov031_0223daa4(int, int);
extern "C" int func_ov031_0223d918(char*);
extern "C" int func_ov031_0223d908(char*);
typedef int (*Type_ov031_0223b79c)(char*, void*);
typedef void* (*Type_ov031_0223b79c_2)(int, int, int);
static inline Struct_ov031_0223b79c* inline_ov000_0217fa60_2(int arg0) {
    return (Struct_ov031_0223b79c*)((char*)data_ov031_02290d28 + arg0);
}

// USA: func_ov031_0223b79c
extern "C" ARM void func_ov031_0223b79c(void) {
    data_ov031_02290d28 = (Struct_ov031_0223b79c*)func_ov031_0223cf4c(0x450, 4);
    int var0 = 0;
    int var1 = 0;
    do {
        void* var2 = reinterpret_cast<Type_ov031_0223b79c_2>(func_ov031_0223beec)(32, (int)inline_ov000_0217fa60_2(var1)->unknown_0_, 16);
        inline_ov000_0217fa60_2(var1)->unknown_224_ = var2;
        char* var3 = func_ov031_0223d858();
        inline_ov000_0217fa60_2(var1)->unknown_220_ = var3;
        void* var4 = func_ov031_0223daa4(var0, 64);
        inline_ov000_0217fa60_2(var1)->unknown_200_.unknown_8_ = var4;
        char* var5 = (char*)func_ov031_0223daa4(var0, 127) + 8;
        inline_ov000_0217fa60_2(var1)->unknown_210_.unknown_8_ = var5;
        reinterpret_cast<Type_ov031_0223b79c>(func_ov031_0223d918)(inline_ov000_0217fa60_2(var1)->unknown_220_, &inline_ov000_0217fa60_2(var1)->unknown_200_);
        reinterpret_cast<Type_ov031_0223b79c>(func_ov031_0223d908)(inline_ov000_0217fa60_2(var1)->unknown_220_, &inline_ov000_0217fa60_2(var1)->unknown_210_);
        var1 += sizeof(Struct_ov031_0223b79c);
        var0++;
    } while (var0 < 2);
}
