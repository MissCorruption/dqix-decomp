#include <globaldefs.h>

#if defined(jpn)
#define data_ov031_0224b1d4 data_ov031_0224bdd4
#define data_ov031_0224fb20 data_ov031_02250720
#endif

struct Struct_ov031_0224fb18 {
    unsigned char unknown_0_[6];
};
struct Struct_ov031_0224b1d4 {
    unsigned char unknown_0_[4];
};
struct Struct_ov031_022205e4 {
    Struct_ov031_0224fb18 unknown_0_;
    Struct_ov031_0224fb18 unknown_6_;
    Struct_ov031_0224b1d4 unknown_c_;
};
struct Struct_ov031_0224b114_2 {
    int unknown_0_;
    int unknown_4_;
};
extern Struct_ov031_0224b1d4 data_ov031_0224b1d4 __attribute__((aligned(4)));
extern Struct_ov031_0224fb18 data_ov031_0224fb20;
extern Struct_ov031_0224fb18 data_ov031_0224fb18;
extern Struct_ov031_0224b114_2 data_ov031_0224b114;
extern "C" int func_ov031_022205d8(void* arg0);
extern "C" int func_02001aec(const void* arg0, const void* arg1, unsigned int arg2);
extern "C" void func_ov031_022228f4(char* arg0, const Struct_ov031_0224fb18* arg1);

#define COPY_ADDRESS(destination, source) do { \
    Struct_ov031_0224fb18* targetAddress = &(destination); \
    const Struct_ov031_0224fb18* sourceAddress = &(source); \
    targetAddress->unknown_0_[0] = sourceAddress->unknown_0_[0]; \
    targetAddress->unknown_0_[1] = sourceAddress->unknown_0_[1]; \
    targetAddress->unknown_0_[2] = sourceAddress->unknown_0_[2]; \
    targetAddress->unknown_0_[3] = sourceAddress->unknown_0_[3]; \
    targetAddress->unknown_0_[4] = sourceAddress->unknown_0_[4]; \
    targetAddress->unknown_0_[5] = sourceAddress->unknown_0_[5]; \
} while (0)

// USA: func_ov031_022205e4
// KEEP-NAME: func_ov031_022205e4
extern "C" THUMB int func_ov031_022205e4(Struct_ov031_022205e4* arg0) {
    char var0[32];
    char var1[32];
    Struct_ov031_0224fb18 var2[2];
    unsigned char* var3 = arg0->unknown_c_.unknown_0_;
    const unsigned char* var4 = data_ov031_0224b1d4.unknown_0_;
    var3[0] = var4[0];
    var3[1] = var4[1];
    var3[2] = var4[2];
    var3[3] = var4[3];
    COPY_ADDRESS(var2[1], data_ov031_0224fb20);
    var2[1].unknown_0_[0] &= 0xfd;
    func_ov031_022205d8(&var2[0]);
    const Struct_ov031_0224fb18* var5 = &var2[0];
    COPY_ADDRESS(data_ov031_0224fb18, *var5);
    const Struct_ov031_0224fb18* var6;
    if (func_02001aec(&var2[1], var5, 6) <= 0) {
        COPY_ADDRESS(arg0->unknown_0_, var2[0]);
        var6 = &var2[1];
    } else {
        COPY_ADDRESS(arg0->unknown_0_, var2[1]);
        var6 = &var2[0];
    }
    COPY_ADDRESS(arg0->unknown_6_, *var6);
    if (data_ov031_0224b114.unknown_4_) {
        func_ov031_022228f4(var0, &var2[0]);
        func_ov031_022228f4(var1, &var2[1]);
    }
    return 1;
}
