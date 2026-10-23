struct Struct_ov031_0223fe20 {
    Struct_ov031_0223fe20* unknown_0_;
    Struct_ov031_0223fe20* unknown_4_;
    void* unknown_8_;
    const char* unknown_c_;
    int unknown_10_;
    int unknown_14_;
};
typedef void* (*Type_ov031_0223fe20)(int, int);
extern Type_ov031_0223fe20 data_ov031_02290fc4;
extern int data_ov031_02290fc0;
extern "C" int func_ov031_02242e90(const char*, const char*);

// USA: func_ov031_0223fe20
extern "C" int func_ov031_0223fe20(void* arg0, void* arg1, const char* arg2, int arg3) {
    Struct_ov031_0223fe20** var0 = (Struct_ov031_0223fe20**)arg0;
    Struct_ov031_0223fe20* var1 = *var0;
    int var2 = 0;
    Struct_ov031_0223fe20* var3;
    if (var1 != 0) {
        var3 = var1;
        if (func_ov031_02242e90((const char*)arg1, (const char*)var1->unknown_8_) != 0) {
            var3 = var1->unknown_4_;
            if (var3 != *var0) do {
                if (func_ov031_02242e90((const char*)arg1, (const char*)var3->unknown_8_) == 0) {
                    var2 = 1;
                    break;
                }
                var3 = var3->unknown_4_;
            } while (var3 != *var0);
        } else {
            var2 = 1;
        }
    }
    if (var2) {
        var3->unknown_c_ = arg2;
    } else {
        Struct_ov031_0223fe20* var4 = (Struct_ov031_0223fe20*)data_ov031_02290fc4(arg3, 4);
        switch ((unsigned int)var4) {
        case 0:
            data_ov031_02290fc0 = 1;
            return 0;
        default:
            break;
        }
        var4->unknown_8_ = arg1;
        var4->unknown_c_ = arg2;
        var4->unknown_10_ = 0;
        var4->unknown_14_ = 0;
        if (*var0 == 0) {
            var4->unknown_4_ = var4;
            var4->unknown_0_ = var4;
            *var0 = var4;
        } else {
            var4->unknown_0_ = (*var0)->unknown_0_;
            var4->unknown_4_ = *var0;
            (*var0)->unknown_0_->unknown_4_ = var4;
            (*var0)->unknown_0_ = var4;
        }
    }
    return 1;
}
