#include <globaldefs.h>

extern "C" void (* volatile data_ov031_02290fc8)(void*);
extern "C" void* (* volatile data_ov031_02290fc4)(int, int);
extern "C" int func_ov031_022410d8(void* arg0, void* arg1, int* arg2);
extern "C" void func_ov031_022406f8(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_ov031_02241534(const char* arg0, const char* arg1);
extern const char data_ov031_0224c784[];

struct Struct_ov031_022411e4 {
    unsigned char unknown_0_[0x8];
    int unknown_8_;
    unsigned char unknown_c_[8];
    void* unknown_14_;
};

// USA: func_ov031_022411e4
extern "C" ARM int func_ov031_022411e4(Struct_ov031_022411e4* arg0, void* arg1, void** arg2) {
    if (arg0->unknown_8_ == 0) return -1;
    if (arg0->unknown_14_) {
        data_ov031_02290fc8(arg0->unknown_14_);
        arg0->unknown_14_ = 0;
    }
    int var0;
    int var1 = func_ov031_022410d8(arg0, arg1, &var0);
    if (var1 >= 0) {
        void* var2 = data_ov031_02290fc4(var1 + 1, 4);
        arg0->unknown_14_ = var2;
        *((char*)var2 + var1) = 0;
        func_ov031_022406f8(arg0, arg0->unknown_14_, var0, var1);
        *arg2 = arg0->unknown_14_;
        return var1;
    }
    int var3 = func_ov031_02241534(data_ov031_0224c784, (const char*)arg1);
    if (var3 != 0) return -1;
    void* var4 = data_ov031_02290fc4(4, 4);
    arg0->unknown_14_ = var4;
    *((char*)var4 + 3) = 0;
    func_ov031_022406f8(arg0, arg0->unknown_14_, 9, 3);
    *arg2 = arg0->unknown_14_;
    return 3;
}
