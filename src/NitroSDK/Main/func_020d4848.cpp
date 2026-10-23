#include <globaldefs.h>

#if defined(jpn)
#define func_020ca4b4 func_020cbf80
#endif

extern "C" void* func_020d41d8(void);
extern "C" int func_020d41e8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);
extern "C" int func_020ca4b4(void*, void*, int);

struct BattleCtx020d4848 {
    unsigned char pad0[4];
    void* buffer;
};

// USA: func_020d4848
extern "C" ARM int func_020d4848(void* src) {
    struct BattleCtx020d4848* ctx = (struct BattleCtx020d4848*)func_020d41d8();
    int state = func_020d41e8();
    if (state != 0) {
        return state;
    }
    if (src == NULL) {
        return 6;
    }
    InvalidateDataCacheRange((const void*)((int)ctx->buffer), 0x7d0);
    func_020ca4b4(ctx->buffer, src, 0x7d0);
    return 0;
}
