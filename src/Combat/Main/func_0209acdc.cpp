#include <globaldefs.h>

struct Holder0209a9dc;
struct Entry0209a9dc { unsigned short id; unsigned short pad; };

extern "C" struct Entry0209a9dc* func_0209a9dc(struct Holder0209a9dc* h, int i);

// USA: func_0209acdc
extern "C" ARM int func_0209acdc(struct Holder0209a9dc* holder, unsigned char* ids, unsigned int count, unsigned short* out) {
    unsigned int i;
    int outCount = 0;
    for (i = 0; i < count; i++) {
        struct Entry0209a9dc* e = func_0209a9dc(holder, ids[i]);
        if (e != NULL) {
            out[outCount] = e->pad;
            outCount++;
        }
    }
    return outCount;
}
