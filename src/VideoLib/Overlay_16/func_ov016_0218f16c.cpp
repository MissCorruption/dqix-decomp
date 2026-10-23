#include <globaldefs.h>

struct BlitTarget_0218f16c {
    const unsigned char* srcY;
    const unsigned char* srcC;
    unsigned short* dst;
    unsigned int pitch;
    int width;
    int height;
    const unsigned char* field_18;
};
struct VideoState_0218f16c {
    char pad_0[0x10];
    unsigned int width;
    unsigned int height;
    char pad_18[0x24];
    BlitTarget_0218f16c target;
    char pad_58[4];
    const unsigned char** framesY;
    const unsigned char** framesC;
    unsigned int* qpTable;
    unsigned char* scratchY;
    unsigned char* scratchC;
    char pad_70[0x2c];
    unsigned int consumed;
    unsigned int available;
#if !defined(jpn)
    int wideFlag;
#endif
    unsigned int frameCount;
    unsigned int idx[6];
    unsigned int frame;
};
struct FilterJob_0218f16c {
    const unsigned char* srcY;
    const unsigned char* srcC;
    unsigned char* dstY;
    unsigned char* dstC;
    int width;
    int height;
    unsigned int qp;
    void* poolBlock;
    int mode;
};
extern "C" void* func_ov016_0218bc8c(unsigned int);
extern "C" void* func_ov016_0218fe30();
extern "C" void func_ov016_0219c514_unk(FilterJob_0218f16c*);
extern "C" void func_ov016_0218f6b8(BlitTarget_0218f16c*);

// USA: func_ov016_0218f16c
extern "C" ARM int func_ov016_0218f16c(VideoState_0218f16c* state, unsigned short* dst, int pitch, int mode) {
    if (state->consumed >= state->available) return 0;
    if (mode) {
        if (!state->scratchY) {
            state->scratchY = (unsigned char*)func_ov016_0218bc8c(state->height << 8);
            if (!state->scratchY) return 0;
        }
        if (!state->scratchC) {
            state->scratchC = (unsigned char*)func_ov016_0218bc8c((state->height >> 1) << 8);
            if (!state->scratchC) return 0;
        }
        FilterJob_0218f16c job;
        job.srcY = state->framesY[state->frame];
        job.srcC = state->framesC[state->frame];
        job.dstY = state->scratchY;
        job.dstC = state->scratchC;
        job.width = state->width;
        job.height = state->height;
        job.qp = state->qpTable[state->frame];
        job.poolBlock = func_ov016_0218fe30();
        if (mode == 2) job.mode = 0;
        else job.mode = 1;
        func_ov016_0219c514_unk(&job);
        state->target.srcY = state->scratchY;
        state->target.srcC = state->scratchC;
    } else {
        state->target.srcY = state->framesY[state->frame];
        state->target.srcC = state->framesC[state->frame];
    }
    state->target.dst = dst;
    state->target.pitch = pitch << 1;
    func_ov016_0218f6b8(&state->target);
    state->consumed++;
    state->frame++;
    if (state->frame == state->frameCount) state->frame = 0;
    return 1;
}
