#include <globaldefs.h>

struct Struct_ov031_0223ea84;
extern "C" int func_ov031_022412e8(Struct_ov031_0223ea84*, int*);
extern "C" int func_ov031_0223fb8c(const char*, int);

struct Struct_ov031_0223f6ec {
    unsigned char unknown_0_[0x10];
    int* unknown_10_;
};

// USA: func_ov031_0223f6ec
extern "C" ARM int func_ov031_0223f6ec(Struct_ov031_0223ea84* arg0, Struct_ov031_0223f6ec* arg1) {
    int var0;
    int var1 = func_ov031_022412e8(arg0, &var0);
    if (var1 >= 0) {
        *arg1->unknown_10_ = func_ov031_0223fb8c((const char*)var0, var1);
        return *arg1->unknown_10_ >= 0;
    }
    return 0;
}
