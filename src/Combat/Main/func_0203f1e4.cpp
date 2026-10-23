#include <globaldefs.h>

struct Struct_0203f0fc;
extern "C" ARM int func_0203f0fc(struct Struct_0203f0fc* arg0, const char* arg1);
extern "C" int func_0203f138(struct Struct_0203f0fc* arg0, int arg1);

struct Struct_0203ca24_2 {
    char unknown_0_[0x28];
    short unknown_28_;
};

// USA: func_0203f1e4
extern "C" ARM void func_0203f1e4(struct Struct_0203ca24_2* arg0, const char* arg1) {
    if (arg0->unknown_28_ < 0) {
        return;
    }
    func_0203f138((struct Struct_0203f0fc*)arg0,
                  func_0203f0fc((struct Struct_0203f0fc*)arg0, arg1));
}
