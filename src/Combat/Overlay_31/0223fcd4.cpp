typedef void* (*Type_ov031_022128fc)(unsigned int, unsigned int);
typedef void (*Type_ov031_022128fc_2)(void*);
struct Struct_ov031_02290fbc {
    int unknown_0_;
    int unknown_4_;
    Type_ov031_022128fc unknown_8_;
    Type_ov031_022128fc_2 unknown_c_;
    int unknown_10_;
    int unknown_14_;
    void* unknown_18_;
    int unknown_1c_;
    int unknown_20_;
};
extern Struct_ov031_02290fbc data_ov031_02290fbc;
extern "C" int func_ov031_022402f4(void);
extern "C" void func_ov031_0224030c(void);
extern "C" int func_ov031_02240338(int, int);

// USA: func_ov031_0223fcd4
extern "C" int func_ov031_0223fcd4(Type_ov031_022128fc arg0, Type_ov031_022128fc_2 arg1, int arg2) {
    data_ov031_02290fbc.unknown_8_ = arg0;
    data_ov031_02290fbc.unknown_c_ = arg1;
    data_ov031_02290fbc.unknown_4_ = 0;
    data_ov031_02290fbc.unknown_1c_ = 0;
    data_ov031_02290fbc.unknown_20_ = 0;
    data_ov031_02290fbc.unknown_10_ = 0;
    data_ov031_02290fbc.unknown_14_ = 0;
    switch (func_ov031_022402f4()) {
    case 0:
        data_ov031_02290fbc.unknown_4_ = 9;
        return 0;
    default: break;
    }
    void* var0 = data_ov031_02290fbc.unknown_8_(0x2000, 8);
    data_ov031_02290fbc.unknown_18_ = var0;
    if (!var0) {
        data_ov031_02290fbc.unknown_4_ = 1;
        func_ov031_0224030c();
        return 0;
    }
    if (func_ov031_02240338(arg2, (int)var0)) {
        data_ov031_02290fbc.unknown_0_ = 1;
        return 1;
    }
    data_ov031_02290fbc.unknown_4_ = 9;
    data_ov031_02290fbc.unknown_c_(data_ov031_02290fbc.unknown_18_);
    func_ov031_0224030c();
    return 0;
}
