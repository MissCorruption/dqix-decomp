#include <globaldefs.h>
struct Struct_ov031_0220764c {
    int unknown_0_;
    void* (*unknown_4_)(void*, unsigned int);
    void (*unknown_8_)(void*, void*, unsigned int);
    int unknown_c_;
    unsigned int unknown_10_, unknown_14_, unknown_18_, unknown_1c_, unknown_20_;
    char unknown_24_[8];
    int unknown_2c_, unknown_30_;
};
struct Struct_ov031_0224e234_3 {
    int unknown_0_;
    void (*unknown_4_)(void*, void*, unsigned int);
    int unknown_8_;
    void* (*unknown_c_)(void*, unsigned int);
    char unknown_10_[0x30];
    int unknown_40_;
    unsigned int unknown_44_, unknown_48_, unknown_4c_, unknown_50_, unknown_54_;
    void* (*unknown_58_)(unsigned int);
    void (*unknown_5c_)(void*);
    int unknown_60_;
    char unknown_64_[0xc];
    int unknown_70_, unknown_74_;
};
extern Struct_ov031_0224e234_3 data_ov031_0224e234;
extern char data_ov031_0224e274;
extern "C" void* func_ov031_022075f4(unsigned int);
extern "C" void func_ov031_02207620(void*);
extern "C" void func_ov031_02204dbc(void*);
// USA: func_ov031_0220764c
extern "C" ARM void func_ov031_0220764c(Struct_ov031_0220764c* arg0) {
    data_ov031_0224e234.unknown_40_ = arg0->unknown_c_ == 1;
    data_ov031_0224e234.unknown_44_ = (((arg0->unknown_10_ >> 24) & 0xff) | ((arg0->unknown_10_ >> 8) & 0xff00) | ((arg0->unknown_10_ << 8) & 0xff0000) | ((arg0->unknown_10_ << 24) & 0xff000000));
    data_ov031_0224e234.unknown_48_ = (((arg0->unknown_14_ >> 24) & 0xff) | ((arg0->unknown_14_ >> 8) & 0xff00) | ((arg0->unknown_14_ << 8) & 0xff0000) | ((arg0->unknown_14_ << 24) & 0xff000000));
    data_ov031_0224e234.unknown_4c_ = (((arg0->unknown_18_ >> 24) & 0xff) | ((arg0->unknown_18_ >> 8) & 0xff00) | ((arg0->unknown_18_ << 8) & 0xff0000) | ((arg0->unknown_18_ << 24) & 0xff000000));
    data_ov031_0224e234.unknown_50_ = (((arg0->unknown_1c_ >> 24) & 0xff) | ((arg0->unknown_1c_ >> 8) & 0xff00) | ((arg0->unknown_1c_ << 8) & 0xff0000) | ((arg0->unknown_1c_ << 24) & 0xff000000));
    data_ov031_0224e234.unknown_54_ = (((arg0->unknown_20_ >> 24) & 0xff) | ((arg0->unknown_20_ >> 8) & 0xff00) | ((arg0->unknown_20_ << 8) & 0xff0000) | ((arg0->unknown_20_ << 24) & 0xff000000));
    data_ov031_0224e234.unknown_58_ = func_ov031_022075f4;
    data_ov031_0224e234.unknown_5c_ = func_ov031_02207620;
    data_ov031_0224e234.unknown_c_ = arg0->unknown_4_;
    data_ov031_0224e234.unknown_4_ = arg0->unknown_8_;
    data_ov031_0224e234.unknown_60_ = 0x40;
    data_ov031_0224e234.unknown_70_ = arg0->unknown_2c_;
    data_ov031_0224e234.unknown_74_ = arg0->unknown_30_;
    func_ov031_02204dbc(&data_ov031_0224e274);
}
