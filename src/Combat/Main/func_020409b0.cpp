#include <globaldefs.h>

extern "C" int func_0203ce14(void* arg0, int arg1);
extern "C" int func_02041470(void* arg0, int arg1);

struct Struct_020409b0 {
    char unknown_0_[0x14];
    void* unknown_14_;
    void* unknown_18_;
};

// USA: func_020409b0
extern "C" ARM int func_020409b0(struct Struct_020409b0* arg0, int arg1) {
    if (arg0->unknown_14_ != NULL) {
        return func_0203ce14(arg0->unknown_14_, arg1);
    }
    {
        void* var0 = arg0->unknown_18_;
        if (var0 != NULL) {
            return func_02041470(var0, arg1);
        }
        return (int)var0;
    }
}
