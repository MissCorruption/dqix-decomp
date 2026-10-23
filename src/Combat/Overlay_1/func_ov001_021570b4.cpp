#include <globaldefs.h>

#include <NitroSDK/Matrix.h>

struct Struct_ov001_021570b4_2 {
    int unknown_0_;
    int unknown_4_;
    fix32_t unknown_8_[3];
    fix32_t unknown_14_[3];
    fix32_t unknown_20_[3];
    fix32_t unknown_2c_[3];
};

struct Struct_ov001_021570b4 {
    Struct_ov001_021570b4_2 unknown_0_[16];
    int unknown_380_;
    int unknown_384_;
    fix32_t unknown_388_;
    fix32_t unknown_38c_[3];
    fix32_t unknown_398_;
};

static inline fix32_t inline_ov001_021570b4(fix32_t arg0, fix32_t arg1) {
    return FIX32_MULTIPLY(arg0, arg1);
}

// USA: func_ov001_021570b4
extern "C" ARM int func_ov001_021570b4(void *arg0) {
    Struct_ov001_021570b4 *var0 = static_cast<Struct_ov001_021570b4 *>(arg0);
    if (var0->unknown_380_ <= 1) {
        return 1;
    }
    if (var0->unknown_398_ <= 0) {
        return 1;
    }

    Vector3fix var1;
    Vector3fix var2;
    do {
        var0->unknown_388_ += 0x199;
        if (var0->unknown_388_ >=
            (var0->unknown_0_[var0->unknown_384_].unknown_0_ + var0->unknown_0_[var0->unknown_384_].unknown_4_) << 12)
        {
            ++var0->unknown_384_;
            if (var0->unknown_384_ >= var0->unknown_380_) {
                for (int var3 = 0; var3 < 3; ++var3) {
                    var0->unknown_38c_[var3] = var0->unknown_0_[var0->unknown_380_ - 1].unknown_2c_[var3];
                }
                var0->unknown_384_ = var0->unknown_380_ - 1;
                var0->unknown_388_ =
                    (var0->unknown_0_[var0->unknown_384_].unknown_0_ + var0->unknown_0_[var0->unknown_384_].unknown_4_ + 100)
                    << 12;
                return 1;
            }
        }

        fix32_t var4 = fix32_Divide(var0->unknown_388_ - (var0->unknown_0_[var0->unknown_384_].unknown_0_ << 12),
                                        var0->unknown_0_[var0->unknown_384_].unknown_4_ << 12);
        fix32_t var5  = inline_ov001_021570b4(var4, var4);
        fix32_t var6    = inline_ov001_021570b4(var5, var4);
        var1.x       = var0->unknown_38c_[0];
        var2.x           = inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_8_[0], var6) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_14_[0], var5) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_20_[0], var4) +
                 var0->unknown_0_[var0->unknown_384_].unknown_2c_[0];
        var1.y = var0->unknown_38c_[1];
        var2.y     = inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_8_[1], var6) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_14_[1], var5) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_20_[1], var4) +
                 var0->unknown_0_[var0->unknown_384_].unknown_2c_[1];
        var1.z = var0->unknown_38c_[2];
        var2.z     = inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_8_[2], var6) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_14_[2], var5) +
                 inline_ov001_021570b4(var0->unknown_0_[var0->unknown_384_].unknown_20_[2], var4) +
                 var0->unknown_0_[var0->unknown_384_].unknown_2c_[2];
    } while (Vector3fix_Distance(&var1, &var2) < var0->unknown_398_);
    var0->unknown_38c_[0] = var2.x;
    var0->unknown_38c_[1] = var2.y;
    var0->unknown_38c_[2] = var2.z;
    return 0;
}

// USA: func_ov001_021573c0
extern "C" ARM int func_ov001_021573c0(void *arg0) {
    int var0;
    fix32_t var1;
    fix32_t var2;
    Struct_ov001_021570b4 *var3 = static_cast<Struct_ov001_021570b4 *>(arg0);
    if (var3->unknown_380_ <= 1) {
        return 1;
    }

    var3->unknown_388_ += 0x1000;
    if (var3->unknown_388_ >= (var3->unknown_0_[var3->unknown_384_].unknown_0_ + var3->unknown_0_[var3->unknown_384_].unknown_4_)
                                 << 12)
    {
        ++var3->unknown_384_;
        if (var3->unknown_384_ >= var3->unknown_380_) {
            for (var0 = 0; var0 < 3; ++var0) {
                var3->unknown_38c_[var0] = var3->unknown_0_[var3->unknown_380_ - 1].unknown_2c_[var0];
            }
            var3->unknown_384_ = var3->unknown_380_ - 1;
            var3->unknown_388_ =
                (var3->unknown_0_[var3->unknown_384_].unknown_0_ + var3->unknown_0_[var3->unknown_384_].unknown_4_ + 100) << 12;
            return 1;
        }
    }

    fix32_t var4 = fix32_Divide(var3->unknown_388_ - (var3->unknown_0_[var3->unknown_384_].unknown_0_ << 12),
                                    var3->unknown_0_[var3->unknown_384_].unknown_4_ << 12);
    var1          = inline_ov001_021570b4(var4, var4);
    var2            = inline_ov001_021570b4(var1, var4);
    for (var0 = 0; var0 < 3; ++var0) {
        var3->unknown_38c_[var0] = inline_ov001_021570b4(var3->unknown_0_[var3->unknown_384_].unknown_8_[var0], var2) +
                               inline_ov001_021570b4(var3->unknown_0_[var3->unknown_384_].unknown_14_[var0], var1) +
                               inline_ov001_021570b4(var3->unknown_0_[var3->unknown_384_].unknown_20_[var0], var4) +
                               var3->unknown_0_[var3->unknown_384_].unknown_2c_[var0];
    }
    return 0;
}
