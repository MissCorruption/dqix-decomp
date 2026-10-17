#include <globaldefs.h>

struct TargetContext0200f1a0 {
    unsigned long gpr[16];
    char* throwSp;
    unsigned long frameSize;
    unsigned long argumentSize;
    unsigned short savedGprs;
    bool hasFlushback;
    bool hasFramePtr;
    bool isThumb;
};

struct ThrowContext0200f1a0 {
    unsigned char* throwType;
    void* location;
    void* dtor;
    void* catchInfo;
    char* returnAddr;
    char* sp;
    char* fp;
    TargetContext0200f1a0 target;
};

struct ExceptionInfo0200f1a0;

// USA: func_0200f1a0
extern "C" ARM char* func_0200f1a0(ThrowContext0200f1a0* context, ExceptionInfo0200f1a0* info) {
    unsigned long frameSize, flushbackAreaSize, *gprs;
    int i;

    frameSize = context->target.frameSize;
    flushbackAreaSize = context->target.hasFlushback ? 16 : 0;

    gprs = (unsigned long*)(context->fp + frameSize - flushbackAreaSize);
    for (i = 15; i >= 0; i--) {
        if (context->target.savedGprs & (1 << i))
            context->target.gpr[i] = *--gprs;
    }

    context->sp = context->fp + frameSize;

    return (char*)context->target.gpr[14];
}
