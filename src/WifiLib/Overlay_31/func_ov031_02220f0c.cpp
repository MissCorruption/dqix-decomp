#include <globaldefs.h>

extern "C" long long func_0200cf24(long long a, long long b);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" int func_ov031_022212c4(unsigned int* arg0, const unsigned char* arg1, int arg2);
extern "C" void func_ov031_0222127c(const unsigned char* arg0, const unsigned char* arg1, unsigned char* arg2);
extern "C" void func_ov031_0222170c(const unsigned int* arg0, int arg1, const unsigned char* arg2, unsigned char* arg3);

#define BSWAP64(x) \
    ((((x) & 0x00000000000000ffULL) << 56) | \
     (((x) & 0x000000000000ff00ULL) << 40) | \
     (((x) & 0x0000000000ff0000ULL) << 24) | \
     (((x) & 0x00000000ff000000ULL) <<  8) | \
     (((x) & 0x000000ff00000000ULL) >>  8) | \
     (((x) & 0x0000ff0000000000ULL) >> 24) | \
     (((x) & 0x00ff000000000000ULL) >> 40) | \
     (((x) & 0xff00000000000000ULL) >> 56))

struct Struct_ov031_02220f0c {
    unsigned char unknown_0_[8];
};

static inline void inline_ov031_02220f0c(const unsigned char* arg0, unsigned char* arg1) {
    unsigned int var0;
    for (var0 = 8; var0 != 0; var0--) {
        *arg1++ = *arg0++;
    }
}

// USA: func_ov031_02220f0c  (semantic: AES key wrap, RFC 3394)
extern "C" THUMB int func_ov031_02220f0c(Struct_ov031_02220f0c* arg0, const unsigned char* arg1, unsigned int arg2,
                                          const unsigned char* arg3, unsigned int arg4) {
    unsigned int var0[80];
    Struct_ov031_02220f0c var1[2];
    unsigned long long var2;
    unsigned int var3[2];
    unsigned long long var4;
    int var5;
    int var6;
    int var7;
    int var8;
    Struct_ov031_02220f0c* var9;
    long long var10;
    long long var11;

    var3[0] = 0xa6a6a6a6;
    var3[1] = 0xa6a6a6a6;
    if ((arg2 & 7) || (arg4 & 7)) {
        return 0;
    }
    var5 = arg2 >> 3;
    if (var5 < 2) {
        return 0;
    }
    var8 = func_ov031_022212c4(var0, arg3, arg4 * 8);
    memcpy(arg0 + 1, arg1, arg2);
    inline_ov031_02220f0c((unsigned char*)var3, var1[0].unknown_0_);

    var7 = 0;
    var10 = var5;
    do {
        var6 = 1;
        if (var6 <= var5) {
            var11 = func_0200cf24(var10, var7);
            do {
                var9 = (Struct_ov031_02220f0c*)((char*)arg0 + var6 * sizeof(Struct_ov031_02220f0c));
                var1[1] = *var9;
                func_ov031_0222170c(var0, var8, var1[0].unknown_0_, var1[0].unknown_0_);
                var4 = var6 + var11;
                var2 = BSWAP64(var4);
                func_ov031_0222127c(var1[0].unknown_0_, (unsigned char*)&var2, var1[0].unknown_0_);
                *var9 = var1[1];
            } while (++var6 <= var5);
        }
    } while (++var7 < 6);
    inline_ov031_02220f0c(var1[0].unknown_0_, arg0->unknown_0_);
    return 1;
}
