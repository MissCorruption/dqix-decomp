#include <globaldefs.h>

struct ShortField0x28_02099fe8 {
    char pad[0x28];
    short field;
    char pad2[2];
};

struct BitField0209a004 {
    unsigned int count : 12;
    unsigned int : 19;
    unsigned int flag : 1;
};

struct Table0209a004 {
    struct BitField0209a004 header;
    struct ShortField0x28_02099fe8* records;
};

extern "C" int func_02099fe8(struct ShortField0x28_02099fe8*);

// USA: func_0209a004
extern "C" ARM struct ShortField0x28_02099fe8* func_0209a004(void* arg0, int key) {
    struct Table0209a004* table = (struct Table0209a004*)arg0;
    struct ShortField0x28_02099fe8* found;
    int hi, lo, mid, count;
    struct ShortField0x28_02099fe8* records = table->records;
    if (records == NULL || (void*)func_02099fe8 == NULL) {
        found = NULL;
    } else {
        count = table->header.count;
        if (count == 0) {
            found = NULL;
        } else {
            lo = 0;
            hi = count - 1;
            while (lo <= hi) {
                mid = lo + ((hi - lo + 1) >> 1);
                found = &records[mid];
                int v = func_02099fe8(found);
                if (v == key) goto done;
                if (v > key) hi = mid - 1;
                else lo = mid + 1;
            }
            found = NULL;
        }
    }
done:
    return found;
}
