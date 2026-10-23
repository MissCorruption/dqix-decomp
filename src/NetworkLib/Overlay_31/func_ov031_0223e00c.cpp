#include <globaldefs.h>

struct Struct_ov031_02222b0c_5 { unsigned int unknown_0_; void* unknown_4_; void* unknown_8_; unsigned int unknown_c_; };
struct Struct_ov031_0223e00c { void* unknown_0_; void* unknown_4_; Struct_ov031_02222b0c_5* unknown_8_; char unknown_c_[16]; unsigned char unknown_1c_; char unknown_1d_[3]; char unknown_20_[16]; unsigned char unknown_30_; char unknown_31_[3]; unsigned int unknown_34_; unsigned char unknown_38_; char unknown_39_[3]; void* unknown_3c_; };
extern Struct_ov031_0223e00c* data_ov031_02290d9c;
extern unsigned char data_ov031_022493c0[];
extern "C" void* func_ov031_0223cf4c(int, int);
extern "C" void* func_ov031_0223beec(int, int, int);
extern "C" void* func_ov031_0223beb8(int);
extern "C" Struct_ov031_02222b0c_5* func_ov031_0223d858();
extern "C" int func_ov031_0223d918(char*);
extern "C" int func_ov031_0223d908(char*);
typedef int (*Type_ov031_0223e00c)(Struct_ov031_02222b0c_5*, void*);
static inline Struct_ov031_0223e00c* inline_ov031_0223e00c(int arg0) {
    return (Struct_ov031_0223e00c*)((char*)data_ov031_02290d9c + arg0);
}

// USA: func_ov031_0223e00c
extern "C" ARM void func_ov031_0223e00c() {
    data_ov031_02290d9c = (Struct_ov031_0223e00c*)func_ov031_0223cf4c(128, 4);
    int var0 = 0;
    unsigned char* var1 = data_ov031_022493c0;
    int var2 = 0;
    do {
        data_ov031_02290d9c[var0].unknown_34_ = *var1;
        data_ov031_02290d9c[var0].unknown_3c_ = func_ov031_0223cf4c(*var1 * 20, 4);
        data_ov031_02290d9c[var0].unknown_0_ = func_ov031_0223beec(*var1, (int)data_ov031_02290d9c[var0].unknown_3c_, 20);
        data_ov031_02290d9c[var0].unknown_4_ = func_ov031_0223beb8(*var1);
        var1++;
        data_ov031_02290d9c[var0].unknown_8_ = func_ov031_0223d858();
        data_ov031_02290d9c[var0].unknown_1c_ = 0;
        data_ov031_02290d9c[var0].unknown_30_ = 255;
        reinterpret_cast<Type_ov031_0223e00c>(func_ov031_0223d918)(data_ov031_02290d9c[var0].unknown_8_, inline_ov031_0223e00c(var2)->unknown_c_);
        reinterpret_cast<Type_ov031_0223e00c>(func_ov031_0223d908)(data_ov031_02290d9c[var0].unknown_8_, inline_ov031_0223e00c(var2)->unknown_20_);
        data_ov031_02290d9c[var0].unknown_38_ = 1;
        var0++;
        var2 += sizeof(Struct_ov031_0223e00c);
    } while (var0 < 2);
}
