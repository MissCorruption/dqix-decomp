#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/Memory.h"
#include "System/ProcessorContext.h"

struct Header0220296c {
    unsigned char pad0[0xc];
    unsigned short f0c;
    unsigned short f0e;
    unsigned short f10;
    unsigned short f12;
};

typedef int (*Callback0220296c)(void*, unsigned int, void*);

ARM int IsChecksumValid_022006a0(void*, unsigned int, void*, unsigned int);

#define SwapBytes16_0220296c(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_0220296c
extern "C" ARM void func_ov031_0220296c(Header0220296c* a, void* b, unsigned int c) {
    unsigned char* entry;
    if (*(unsigned short*)((unsigned char*)b + 6) != 0) {
        if (IsChecksumValid_022006a0(b, c, a, 0x11)) return;
    }
    int priorState = DisableIRQInterrupts();
    ProcessorContext* context = data_02111304.firstContext;
    if (context != NULL) {
        do {
            entry = (unsigned char*)context->unknown_A4;
            if (entry != NULL && *(unsigned int*)entry != 0 && entry[8] == 0xa &&
                *(unsigned short*)(entry + 0xa) == SwapBytes16_0220296c(*(unsigned short*)((unsigned char*)b + 2)) &&
                (*(unsigned short*)(entry + 0x18) == 0 ||
                 *(unsigned short*)(entry + 0x18) == SwapBytes16_0220296c(*(unsigned short*)b)) &&
                (*(unsigned int*)(entry + 0x1c) == 0 || *(unsigned int*)(entry + 0x1c) == 0xffffffff ||
                 *(unsigned int*)(entry + 0x1c) == (((unsigned int)SwapBytes16_0220296c(a->f0c) << 16) | SwapBytes16_0220296c(a->f0e)))) {
                *(unsigned int*)(entry + 0x14) = ((unsigned int)SwapBytes16_0220296c(a->f10) << 16) | SwapBytes16_0220296c(a->f12);
                if (*(unsigned int*)(entry + 0x1c) == 0) {
                    *(unsigned int*)(entry + 0x1c) = ((unsigned int)SwapBytes16_0220296c(a->f0c) << 16) | SwapBytes16_0220296c(a->f0e);
                    *(unsigned short*)(entry + 0x18) = SwapBytes16_0220296c(*(unsigned short*)b);
                }
                if (*(unsigned int*)(entry + 0x44) == 0) {
                    unsigned int capacity = *(unsigned int*)(entry + 0x3c);
                    if (c - 8 > capacity) {
                        *(unsigned int*)(entry + 0x44) = capacity;
                    } else {
                        *(unsigned int*)(entry + 0x44) = c - 8;
                    }
                    VectorizedInvertedMemcpy((unsigned char*)b + 8, *(void**)(entry + 0x40), *(unsigned int*)(entry + 0x44));
                    if (*(unsigned int*)(entry + 4) == 3) {
                        *(unsigned int*)(entry + 4) = 0;
                        MarkContextReadyAndSwitch(*(ProcessorContext**)entry);
                    } else if (*(Callback0220296c*)(entry + 0x38) != NULL) {
                        if ((*(Callback0220296c*)(entry + 0x38))(*(void**)(entry + 0x40), *(unsigned int*)(entry + 0x44), entry) != 0) {
                            *(unsigned int*)(entry + 0x44) = 0;
                        }
                    }
                }
                break;
            }
            context = context->pNext;
        } while (context != NULL);
    }
    SetIRQInterruptState(priorState);
}
