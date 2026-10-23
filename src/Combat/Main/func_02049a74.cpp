#include <globaldefs.h>

extern "C" int func_02048bd0(unsigned char* arg0);
extern "C" int func_02048c68(unsigned char* arg0);
struct Struct_02010088;
extern "C" int func_02010088(struct Struct_02010088* arg0);
extern "C" int func_02049ee8(unsigned char* arg0);

struct Struct_02049a74 {
    unsigned char unknown_0_[0x20];
    unsigned int unknown_20_;
    unsigned char unknown_24_[0x56 - 0x24];
    unsigned char unknown_56_;
};

struct Struct_02048f64 {
    unsigned char unknown_0_[0x13c];
    struct Struct_02049a74* unknown_13c_;
};

// USA: func_02049a74
extern "C" ARM void func_02049a74(struct Struct_02048f64* arg0) {
    if (arg0->unknown_13c_ == NULL) return;
    if (func_02048bd0((unsigned char*)arg0)) return;
    if (func_02048c68((unsigned char*)arg0)) return;
    if (arg0->unknown_13c_->unknown_56_ == 0) return;
    if (func_02010088((struct Struct_02010088*)arg0)) return;
    if (func_02049ee8((unsigned char*)arg0)) {
        arg0->unknown_13c_->unknown_20_ |= 4;
    }
}
