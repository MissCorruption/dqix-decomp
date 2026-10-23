#include <globaldefs.h>
extern "C" int func_020d2ac4(int);

extern int data_0210fcf4[];

struct Struct_020bcbe0 {
    char unknown_0_[0x3c];
    void* unknown_3c_;
    char unknown_40_[0x8];
    int unknown_48_;
    unsigned char unknown_4c_[1];
};

extern "C" int func_020d1ff0(int arg0, int arg1, int arg2);

// USA: func_020bcbe0
extern "C" ARM void func_020bcbe0(struct Struct_020bcbe0* arg0, void* arg1) {
    int var0;
    int var1 = 0;
    arg0->unknown_3c_ = arg1;
    if (arg0->unknown_48_ <= 0) return;
    do {
        var0 = arg0->unknown_4c_[var1];
        char* var2 = (char*)data_0210fcf4 + (var0 << 3);
        void* var3 = (char*)arg0->unknown_3c_ + *(int*)(var2 + 4);
        int var4 = func_020d2ac4((int)(var3));
        func_020d1ff0(1 << var0, var4 & 0xff, var4 >> 8);
        var1++;
    } while (var1 < arg0->unknown_48_);
}
