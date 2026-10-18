#include <globaldefs.h>

extern "C" long long func_0200cf24(long long a, long long b);
extern "C" void* memcpy(void* dst, const void* src, unsigned int length);
extern "C" int func_ov031_022212c4(unsigned int* rk, const unsigned char* cipherKey, int keyBits);
extern "C" void func_ov031_0222127c(const unsigned char* a, const unsigned char* b, unsigned char* out);
extern "C" void func_ov031_0222170c(const unsigned int* rk, int Nr, const unsigned char* pt, unsigned char* ct);

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

// USA: func_ov031_02220f0c  (semantic: AES key wrap, RFC 3394)
extern "C" THUMB int func_ov031_02220f0c(Block8* cipher, const unsigned char* plain, unsigned int len,
                                          const unsigned char* kek, unsigned int kekLen) {
    unsigned int rk[80];
    Block8 b[2];
    unsigned long long tb;
    unsigned int iv[2];
    unsigned long long t;
    int n;
    int i;
    int j;
    int Nr;
    Block8* r;
    long long nn;

    iv[0] = 0xa6a6a6a6;
    iv[1] = 0xa6a6a6a6;
    if ((len & 7) || (kekLen & 7)) {
        return 0;
    }
    n = len >> 3;
    if (n < 2) {
        return 0;
    }
    Nr = func_ov031_022212c4(rk, kek, kekLen * 8);
    memcpy(cipher + 1, plain, len);
    Copy8(b[0].v, (unsigned char*)iv);

    j = 0;
    nn = n;
    do {
        i = 1;
        if (i <= n) {
            long long t0 = func_0200cf24(nn, j);
            do {
                r = cipher + i;
                b[1] = *r;
                func_ov031_0222170c(rk, Nr, b[0].v, b[0].v);
                t = i + t0;
                tb = BSWAP64(t);
                func_ov031_0222127c(b[0].v, (unsigned char*)&tb, b[0].v);
                *r = b[1];
            } while (++i <= n);
        }
    } while (++j < 6);
    *cipher = b[0];
    return 1;
}
