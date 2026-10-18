#include <globaldefs.h>

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef unsigned long long u64;

#define CHARACTER_WIDTH 8
#define CHARACTER_HEIGHT 8

struct LC_INFO {
    const u8* dst;
    const u8* src;
    int ofs_x;
    int ofs_y;
    int width;
    int height;
    int dsrc;
    int srcBpp;
    int dstBpp;
    u32 cl;
};

struct BitReader020b29f8 {
    const u8* src;
    s8 availableBits;
    u8 bits;
    u8 padding_[2];
};

u32 ReadBits020b29f8(BitReader020b29f8* reader, int nBits);

static inline void NNSi_G2dBitReaderInit(BitReader020b29f8* reader, const void* src) {
    reader->availableBits = 0;
    reader->src = (const u8*)src;
    reader->bits = 0;
}

static inline int MATH_IMin(int a, int b) {
    return (a <= b) ? a : b;
}

static inline int MATH_IMax(int a, int b) {
    return (a >= b) ? a : b;
}

// USA: func_020b1300
extern "C" ARM void func_020b1300(LC_INFO* i) {
    const u8* pSrc;
    u32 x_st;
    u32 x_ed;
    u32 y_st;
    u32 y_ed;
    u32 offset;

    {
        u32 bit_y_begin;

        x_st = (unsigned int)MATH_IMax(i->ofs_x, 0);
        y_st = (unsigned int)MATH_IMax(i->ofs_y, 0);
        x_ed = (unsigned int)MATH_IMin(CHARACTER_WIDTH, i->ofs_x + i->width);
        y_ed = (unsigned int)MATH_IMin(CHARACTER_HEIGHT, i->ofs_y + i->height);

        bit_y_begin = (unsigned int)-MATH_IMin(i->ofs_y, 0);
        offset = -MATH_IMin(i->ofs_x, 0) * i->srcBpp + bit_y_begin * i->dsrc;

        pSrc = i->src;
    }

    {
        u32 x;
        const int dsrc = i->dsrc;
        const int srcBpp = i->srcBpp;
        const int dstBpp = i->dstBpp;

        x_st *= dstBpp;
        x_ed *= dstBpp;

        if (dstBpp == 4) {
            u32* pDst = (u32*)i->dst + y_st;
            u32* pDstEnd = (u32*)i->dst + y_ed;
            u32 cl = i->cl;

            for (; pDst < pDstEnd; pDst++) {
                BitReader020b29f8 reader;
                u32 out_line = *pDst;

                NNSi_G2dBitReaderInit(&reader, pSrc + offset / 8);
                (void)ReadBits020b29f8(&reader, (int)offset % 8);

                for (x = x_st; x < x_ed; x += 4) {
                    u32 bits = ReadBits020b29f8(&reader, srcBpp);

                    if (bits != 0) {
                        out_line = (out_line & ~(0xF << x)) | ((cl + bits) << x);
                    }
                }

                *pDst = out_line;

                offset += dsrc;
            }
        } else {
            u32* pDst = (u32*)((u64*)i->dst + y_st);
            u32* const pDstEnd = (u32*)((u64*)i->dst + y_ed);
            u32 cl = i->cl;

            for (; pDst < pDstEnd; pDst += 2) {
                BitReader020b29f8 reader;
                u32 out_line_0 = *pDst;
                u32 out_line_1 = *(pDst + 1);

                NNSi_G2dBitReaderInit(&reader, pSrc + offset / 8);
                (void)ReadBits020b29f8(&reader, (int)offset % 8);

                for (x = x_st; x < x_ed; x += 8) {
                    u32 bits = ReadBits020b29f8(&reader, srcBpp);

                    if (bits != 0) {
                        if (x < 32) {
                            out_line_0 = (out_line_0 & ~((u32)0xFF << x)) | ((u32)(cl + bits) << x);
                        } else {
                            const u32 x_32 = x - 32;
                            out_line_1 = (out_line_1 & ~((u32)0xFF << x_32)) | ((u32)(cl + bits) << x_32);
                        }
                    }
                }

                *pDst = out_line_0;
                *(pDst + 1) = out_line_1;

                offset += dsrc;
            }
        }
    }
}
