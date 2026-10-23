#include <globaldefs.h>

struct PackedNibbleArray0206e2a0 {
    unsigned char pad[0x2CC];
    unsigned char bits[1];
};

// USA: func_0206e2a0
extern "C" ARM void func_0206e2a0(struct PackedNibbleArray0206e2a0* obj, int index) {
    int byteIndex;
    if (index >= 0xCC || index < 0) {
        return;
    }
    byteIndex = index / 2;
    obj->bits[byteIndex] |= (index % 2) ? 0x80 : 0x8;
}
