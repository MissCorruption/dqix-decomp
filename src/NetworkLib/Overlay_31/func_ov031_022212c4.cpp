#include <globaldefs.h>

extern const unsigned long data_ov031_022460e8[];
extern const unsigned long data_ov031_02247d10[];

#define KEY_WORD(p) (((unsigned long)(p)[0] << 24) ^ ((unsigned long)(p)[1] << 16) ^ ((unsigned long)(p)[2] << 8) ^ (p)[3])

// USA: func_ov031_022212c4
extern "C" THUMB int func_ov031_022212c4(unsigned long* rk, const unsigned char* key, int keyBits) {
    unsigned long temp;
    int i = 0;
    rk[0] = KEY_WORD(key);
    rk[1] = KEY_WORD(key + 4);
    rk[2] = KEY_WORD(key + 8);
    rk[3] = KEY_WORD(key + 12);
    if (keyBits == 128) {
        const unsigned long* roundConstant = data_ov031_022460e8;
        for (;;) {
            temp = rk[3];
            rk[4] = rk[0] ^
                (data_ov031_02247d10[(temp >> 16) & 0xff] & 0xff000000) ^
                (data_ov031_02247d10[(temp >> 8) & 0xff] & 0x00ff0000) ^
                (data_ov031_02247d10[temp & 0xff] & 0x0000ff00) ^
                (data_ov031_02247d10[temp >> 24] & 0x000000ff) ^
                *roundConstant;
            ++roundConstant;
            rk[5] = rk[1] ^ rk[4];
            rk[6] = rk[2] ^ rk[5];
            rk[7] = rk[3] ^ rk[6];
            if (++i >= 10) return 10;
            rk += 4;
        }
    }
    rk[4] = KEY_WORD(key + 16);
    rk[5] = KEY_WORD(key + 20);
    if (keyBits == 192) {
        const unsigned long* roundConstant = data_ov031_022460e8;
        for (;;) {
            temp = rk[5];
            rk[6] = rk[0] ^
                (data_ov031_02247d10[(temp >> 16) & 0xff] & 0xff000000) ^
                (data_ov031_02247d10[(temp >> 8) & 0xff] & 0x00ff0000) ^
                (data_ov031_02247d10[temp & 0xff] & 0x0000ff00) ^
                (data_ov031_02247d10[temp >> 24] & 0x000000ff) ^
                *roundConstant;
            ++roundConstant;
            rk[7] = rk[1] ^ rk[6];
            rk[8] = rk[2] ^ rk[7];
            rk[9] = rk[3] ^ rk[8];
            if (++i >= 8) return 12;
            rk[10] = rk[4] ^ rk[9];
            rk[11] = rk[5] ^ rk[10];
            rk += 6;
        }
    }
    rk[6] = KEY_WORD(key + 24);
    rk[7] = KEY_WORD(key + 28);
    if (keyBits == 256) {
        const unsigned long* roundConstant = data_ov031_022460e8;
        for (;;) {
            temp = rk[7];
            rk[8] = rk[0] ^
                (data_ov031_02247d10[(temp >> 16) & 0xff] & 0xff000000) ^
                (data_ov031_02247d10[(temp >> 8) & 0xff] & 0x00ff0000) ^
                (data_ov031_02247d10[temp & 0xff] & 0x0000ff00) ^
                (data_ov031_02247d10[temp >> 24] & 0x000000ff) ^
                *roundConstant;
            ++roundConstant;
            rk[9] = rk[1] ^ rk[8];
            rk[10] = rk[2] ^ rk[9];
            rk[11] = rk[3] ^ rk[10];
            if (++i >= 7) return 14;
            temp = rk[11];
            rk[12] = rk[4] ^
                (data_ov031_02247d10[temp >> 24] & 0xff000000) ^
                (data_ov031_02247d10[(temp >> 16) & 0xff] & 0x00ff0000) ^
                (data_ov031_02247d10[(temp >> 8) & 0xff] & 0x0000ff00) ^
                (data_ov031_02247d10[temp & 0xff] & 0x000000ff);
            rk[13] = rk[5] ^ rk[12];
            rk[14] = rk[6] ^ rk[13];
            rk[15] = rk[7] ^ rk[14];
            rk += 8;
        }
    }
    return i;
}
