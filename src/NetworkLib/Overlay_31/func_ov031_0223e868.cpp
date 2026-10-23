#include <globaldefs.h>

extern "C" void func_ov031_0223e348(void);
extern "C" void func_ov031_0223fa08(void);
extern "C" void func_ov031_0223fa5c(void);

struct Struct_ov031_02290da0_3 {
    void (*unknown_0_)(void);
    unsigned char unknown_4_[4];
    void* unknown_8_;
    unsigned char unknown_c_[4];
    void* unknown_10_;
    unsigned char unknown_14_[0xc];
    void (*unknown_20_)(void*);
};
extern struct Struct_ov031_02290da0_3 data_ov031_02290da0;

// USA: func_ov031_0223e868
extern "C" ARM void func_ov031_0223e868(void) {
    func_ov031_0223e348();
    func_ov031_0223fa08();
    func_ov031_0223fa5c();
    data_ov031_02290da0.unknown_20_(data_ov031_02290da0.unknown_8_);
    data_ov031_02290da0.unknown_20_(data_ov031_02290da0.unknown_10_);
    data_ov031_02290da0.unknown_0_();
}
