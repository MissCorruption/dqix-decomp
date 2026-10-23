#include <globaldefs.h>

struct Entry_0223bb58 {
    unsigned int word0;
    unsigned short hword4;
    unsigned short pad6;
};

// USA: func_ov031_0223bb58
extern "C" ARM void func_ov031_0223bb58(void* obj, int idx, int a, int b) {
    Entry_0223bb58* arr = *(Entry_0223bb58**)((char*)obj + 0x8);
    if (idx >= 0) {
        arr[idx].word0 = (arr[idx].word0 & ~0xc00) | (a << 10);
        arr[idx].hword4 = (arr[idx].hword4 & ~0xf000) | (b << 12);
    } else {
        for (int i = 0; i < *((unsigned char*)obj + 0xc); i++) {
            arr[i].word0 = (arr[i].word0 & ~0xc00) | (a << 10);
            arr[i].hword4 = (arr[i].hword4 & ~0xf000) | (b << 12);
        }
    }
}
