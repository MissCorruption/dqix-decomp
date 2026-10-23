struct Struct_ov031_02222b0c { unsigned int unknown_0_; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_02222b0c_2 {
    void* unknown_0_;
    Struct_ov031_02222b0c* unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned char unknown_a_[2];
};
extern Struct_ov031_02222b0c_2* data_ov031_02250ba4;
extern const unsigned char data_ov031_02248910[];
extern "C" void* func_ov031_0223cf4c(unsigned int, int);
extern "C" int func_ov031_0223be44(int, int);
extern "C" void* func_ov031_0223e218(void*, void*, void*, int);
extern "C" void func_ov031_02222c18(void);

// USA: func_ov031_02222b0c
extern "C" void func_ov031_02222b0c(int arg0) {
    data_ov031_02250ba4 = (Struct_ov031_02222b0c_2*)func_ov031_0223cf4c(12, 4);
    data_ov031_02250ba4->unknown_8_ = arg0;
    data_ov031_02250ba4->unknown_4_ = (Struct_ov031_02222b0c*)func_ov031_0223be44(0, 0x47);
    unsigned char var0 = data_ov031_02248910[arg0];
    data_ov031_02250ba4->unknown_4_->unknown_4_ = (data_ov031_02250ba4->unknown_4_->unknown_4_ & ~0xc00) | 0x400;
    Struct_ov031_02222b0c* var1 = data_ov031_02250ba4->unknown_4_;
    var1->unknown_0_ &= ~0xc00;
    var1->unknown_4_ = (var1->unknown_4_ & ~0xf000) | (var0 << 12);
    data_ov031_02250ba4->unknown_4_->unknown_0_ = (data_ov031_02250ba4->unknown_4_->unknown_0_ & 0xfe00ff00) | 0x8b | 0xe60000;
    data_ov031_02250ba4->unknown_0_ = func_ov031_0223e218((void*)1, (void*)func_ov031_02222c18, 0, 0x78);
}
