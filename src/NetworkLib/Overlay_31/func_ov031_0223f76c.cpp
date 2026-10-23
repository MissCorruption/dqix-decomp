#include <globaldefs.h>

struct Struct_ov031_0223ea84;
extern "C" int func_ov031_022412e8(Struct_ov031_0223ea84*, int*);
extern "C" void func_ov031_0223fb60(void*, unsigned int);
extern "C" void func_ov031_0223fb74(void*, const void*, unsigned int);
extern "C" int func_ov031_0223e42c(int);
extern "C" int func_ov031_022411e4(Struct_ov031_0223ea84*, const char*, char**);
extern "C" int func_ov031_0223e54c(signed char*, const char*, int);
extern "C" int func_ov031_0223fb8c(const char*, int);
extern const char data_ov031_0224c760[];
struct Struct_ov031_0223f76c {
    char unknown_0_[33];
    short unknown_22_[51];
    char unknown_88_[11];
    char unknown_93_[11];
    char unknown_9e_[11];
    unsigned int unknown_ac_;
};
struct Struct_ov031_0223f76c_2 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    void* unknown_10_;
    int unknown_14_;
    void* unknown_18_;
    void* unknown_1c_;
    void* unknown_20_;
};

// USA: func_ov031_0223f76c
extern "C" ARM int func_ov031_0223f76c(Struct_ov031_0223ea84* arg0, Struct_ov031_0223f76c_2* arg1) {
    int var0;
    char* var1;
    int var2 = 0;
    func_ov031_0223fb60(arg1->unknown_10_, arg1->unknown_14_ * sizeof(Struct_ov031_0223f76c));
    if (func_ov031_022411e4(arg0, data_ov031_0224c760, &var1) > 0) {
        if (var1[0] == '0' && var1[1] == 0) return 1;
    }
    int var3 = func_ov031_022412e8(arg0, &var0);
    if (var3 > 0) {
        int var4 = 0;
        int var5 = 0;
        if (arg1->unknown_14_ > 0) {
            int var6 = 0;
            do {
                if (var4 >= var3) { var2 = 1; break; }
                int var7 = 0;
                int var8 = var4;
                Struct_ov031_0223f76c* var9 = (Struct_ov031_0223f76c*)((unsigned char*)arg1->unknown_10_ + var6);
                int var10 = 0;
                var2 = 0;
                if (var4 < var3) do {
                    int var11 = ((const char*)var0)[var4];
                    if (var11 == '\r') var10 = 1;
                    else {
                        if (var10) {
                            if (var11 == '\n') {
                                if (var7 == 5) {
                                    int var12 = var4 - 1 - var8;
                                    if (var12 > 8) goto done;
                                    int var13 = func_ov031_0223fb8c((const char*)var0 + var8, var12);
                                    if (var13 < 0) goto done;
                                    var9->unknown_ac_ = var13;
                                }
                                ++var4;
                                var2 = var7 >= 5;
                                break;
                            }
                        } else if (var11 == '\t') {
                            switch (var7) {
                            case 0:
                                if ((unsigned int)(var4 - var8) > 32) goto done;
                                func_ov031_0223fb74(var9->unknown_0_, (const char*)var0 + var8, var4 - var8);
                                break;
                            case 1: {
                                int var14 = var4 - var8;
                                if ((unsigned int)func_ov031_0223e42c(var14) > 102) goto done;
                                func_ov031_0223e54c((signed char*)var9->unknown_22_, (const char*)var0 + var8, var14);
                                var9->unknown_22_[50] = 0;
                                break;
                            }
                            case 2:
                                if ((unsigned int)(var4 - var8) > 10) goto done;
                                func_ov031_0223fb74(var9->unknown_88_, (const char*)var0 + var8, var4 - var8);
                                break;
                            case 3:
                                if ((unsigned int)(var4 - var8) > 10) goto done;
                                func_ov031_0223fb74(var9->unknown_93_, (const char*)var0 + var8, var4 - var8);
                                break;
                            case 4:
                                if ((unsigned int)(var4 - var8) > 10) goto done;
                                func_ov031_0223fb74(var9->unknown_9e_, (const char*)var0 + var8, var4 - var8);
                                break;
                            case 5: {
                                int var15 = var4 - var8;
                                if (var15 > 8) goto done;
                                int var16 = func_ov031_0223fb8c((const char*)var0 + var8, var15);
                                if (var16 < 0) goto done;
                                var9->unknown_ac_ = var16;
                                break;
                            }
                            }
                            ++var7;
                            var8 = var4 + 1;
                        }
                        var10 = 0;
                    }
                    ++var4;
                } while (var4 < var3);
                ++var5;
                var6 += sizeof(Struct_ov031_0223f76c);
            } while (var5 < arg1->unknown_14_);
        }
    }
done:
    return var2;
}
