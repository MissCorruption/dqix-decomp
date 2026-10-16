#include <globaldefs.h>

struct PackedNibbleArray0206e120 {
    unsigned char pad[0x2CC];
    unsigned char bits[1];
};

extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void* obj);
extern "C" void func_ov017_021d0924(unsigned char a, unsigned char b, unsigned short c, unsigned short d);

// USA: func_0206e164
extern "C" ARM void func_0206e164(struct PackedNibbleArray0206e120* obj, int index, int value) {
    if (index >= 0xCC || index < 0) {
        return;
    }
    int byteIndex = index / 2;
    if (index % 2) {
        unsigned char n = obj->bits[byteIndex] >> 4;
        n = (n & 0xc) | value;
        obj->bits[byteIndex] &= 0xf;
        obj->bits[byteIndex] |= n << 4;
    } else {
        unsigned char n = obj->bits[byteIndex] & 0xf;
        n = (n & 0xc) | value;
        obj->bits[byteIndex] &= 0xf0;
        obj->bits[byteIndex] |= n;
    }
    if (func_0202c508(func_0202ae18()) == 0) {
        return;
    }
    if (index < 0xAE) {
        return;
    }
    func_ov017_021d0924(7, 0, index, value);
}
