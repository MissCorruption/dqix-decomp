#include <globaldefs.h>

struct Entry0223bab4 {
    unsigned int w0;
    unsigned int w1;
};

struct Table0223bab4 {
    unsigned char pad[0x8];
    Entry0223bab4* entries;
    unsigned char count;
};

// USA: func_ov031_0223bab4
extern "C" ARM void func_ov031_0223bab4(void* obj, int idx, int value, int flag) {
    Table0223bab4* table = (Table0223bab4*)obj;
    Entry0223bab4* arr = table->entries;
    unsigned int mask = 0xc1fffcff;
    if (idx >= 0) {
        if (value != 0x100 && value != 0x300) {
            unsigned int v = arr[idx].w0 & mask;
            arr[idx].w0 = v | value;
        } else {
            unsigned int v = arr[idx].w0 & mask;
            arr[idx].w0 = (v | value) | (flag << 0x19);
        }
        return;
    }
    for (idx = 0; idx < table->count; idx++) {
        if (value != 0x100 && value != 0x300) {
            unsigned int v = arr[idx].w0 & mask;
            arr[idx].w0 = v | value;
        } else {
            unsigned int v = arr[idx].w0 & mask;
            arr[idx].w0 = (v | value) | (flag << 0x19);
        }
    }
}
