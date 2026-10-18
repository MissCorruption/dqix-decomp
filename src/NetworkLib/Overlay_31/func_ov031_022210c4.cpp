#include <globaldefs.h>

extern "C" long long func_0200cf24(long long a, long long b);
extern "C" void* memcpy(void* dst, const void* src, unsigned int length);
extern "C" int func_02001aec(const void* a, const void* b, int n);
extern "C" int func_ov031_0222157c(unsigned int* rk, const unsigned char* cipherKey, int keyBits);
extern "C" void func_ov031_0222127c(const unsigned char* a, const unsigned char* b, unsigned char* out);
extern "C" void func_ov031_02221ac8(const unsigned int* rk, int Nr, const unsigned char* ct, unsigned char* pt);

#define BSWAP64(x) \
    ((((x) & 0x00000000000000ffULL) << 56) | \
     (((x) & 0x000000000000ff00ULL) << 40) | \
     (((x) & 0x0000000000ff0000ULL) << 24) | \
     (((x) & 0x00000000ff000000ULL) <<  8) | \
     (((x) & 0x000000ff00000000ULL) >>  8) | \
     (((x) & 0x0000ff0000000000ULL) >> 24) | \
     (((x) & 0x00ff000000000000ULL) >> 40) | \
     (((x) & 0xff00000000000000ULL) >> 56))

struct Block8 {
    unsigned char v[8];
};

static inline void Copy8(unsigned char* dst, const unsigned char* src) {
    unsigned char* d = dst;
    const unsigned char* s = src;
    int k = 8;
    do {
        *d++ = *s++;
    } while (--k != 0);
}

// USA: func_ov031_022210c4  (semantic: AES key unwrap, RFC 3394)
extern "C" THUMB int func_ov031_022210c4(Block8* plain, const unsigned char* cipher, unsigned int len,
                                          const unsigned char* kek, unsigned int kekLen) {
    unsigned int rk[80];
    Block8 b[2];
    unsigned long long tb;
    unsigned int iv[2];
    int n;
    int i;
    int j;
    int Nr;
    int ret;
    Block8* r;
    long long nn;
    long long t0;
    unsigned long long t;

    ret = 1;
    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((len & 7) || (kekLen & 7)) {
        return 0;
    }
    n = (len - 1) >> 3;
    if (n < 2) {
        return 0;
    }
    Nr = func_ov031_0222157c(rk, kek, kekLen * 8);
    Copy8(b[0].v, cipher);
    memcpy(plain, cipher + 8, len - 1);

    j = 5;
    nn = n;
    do {
        i = n;
        if (i > 0) {
            t0 = func_0200cf24(nn, j);
            do {
                t = i + t0;
                tb = BSWAP64(t);
                func_ov031_0222127c(b[0].v, (unsigned char*)&tb, b[0].v);
                r = plain + (i - 1);
                b[1] = *r;
                func_ov031_02221ac8(rk, Nr, b[0].v, b[0].v);
                *r = b[1];
            } while (--i > 0);
        }
    } while (--j >= 0);
    if (func_02001aec(iv, b, 8) != 0) {
        ret = 0;
    }
    return ret;
}
