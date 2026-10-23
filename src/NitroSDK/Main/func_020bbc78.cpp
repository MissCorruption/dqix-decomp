#include <globaldefs.h>

extern "C" int func_020bb984(unsigned short* obj);

struct WrapCtx020bb964 { int unk_0; unsigned int modulus; };
extern "C" unsigned short func_020bb964(WrapCtx020bb964* ctx, unsigned int value);

struct Ring020bbc78 {
    char pad[8];
    unsigned short head;
    unsigned short pad_a;
    unsigned short count;
};

// USA: func_020bbc78
extern "C" ARM int func_020bbc78(Ring020bbc78* ring) {
    if (func_020bb984((unsigned short*)ring)) return 0;
    ring->head = func_020bb964((WrapCtx020bb964*)ring, ring->head);
    ring->count--;
    return 1;
}
