#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"

struct Element020e0310 {
    short key;
    char* str;
};

struct Container020e0310;

struct TextTable020e0028 {
    unsigned int count : 12;
    unsigned int rest : 20;
    struct Element020e0310* base;
    char* strings;
};

typedef int (*KeyFunc020e0310)(struct Element020e0310*);

extern "C" struct Element020e0310* func_020e0310(struct Container020e0310* c, int key, KeyFunc020e0310 fn);
extern "C" short func_020dfbd4(short* obj);
extern "C" char* func_020da150(SafeAllocator* allocator, const char* src);
extern "C" int func_020e0280(struct TextTable020e0028* self, void* src, unsigned char* outFlag, void* callback);
extern "C" char* func_020dfbfc(struct TextTable020e0028* c, char* idx, int dflt);

static inline void CopyElement020e0028(struct Element020e0310* dst, struct Element020e0310* src) {
    dst->key = src->key;
    dst->str = src->str;
}

static inline void SwapElements020e0028(struct Element020e0310* a, struct Element020e0310* b) {
    struct Element020e0310 tmp = *a;
    CopyElement020e0028(a, b);
    CopyElement020e0028(b, &tmp);
}

// USA: func_020e0028
extern "C" ARM int func_020e0028(struct TextTable020e0028* self, SafeAllocator* allocator, void* file, unsigned int size, short* ids, unsigned short count) {
    unsigned char flag;
    struct TextTable020e0028 src;
    short* id;
    int n;
    struct Element020e0310* out;
    int i;
    int num;

    if (allocator == NULL || file == NULL || size == 0 || ids == NULL || count == 0) return 0;
    memset(self, 0, sizeof(*self));
    memset(&src, 0, sizeof(src));
    func_020e0280(&src, file, &flag, NULL);

    n = 0;
    id = ids;
    num = count;
    for (i = 0; i < num; i++, id++) {
        if (func_020e0310((struct Container020e0310*)&src, *id, (KeyFunc020e0310)func_020dfbd4) != NULL) n++;
    }

    self->base = (struct Element020e0310*)allocator->Allocate(n * sizeof(struct Element020e0310));
    if (self->base != NULL) {
        self->count = n;
        id = ids;
        out = self->base;
        for (i = 0; i < num; i++, id++) {
            struct Element020e0310* elem = func_020e0310((struct Container020e0310*)&src, *id, (KeyFunc020e0310)func_020dfbd4);
            if (elem != NULL) {
                char* str = func_020dfbfc(&src, elem->str, 0);
                out->key = elem->key;
                out->str = func_020da150(allocator, str);
                out++;
            }
        }
    }

    if (n >= 2 && self != NULL) {
        int cnt = self->count;
        if (self->base != NULL && cnt != 0) {
            struct Element020e0310* q;
            struct Element020e0310* r;
            int down;
            int j;
            struct Element020e0310* p;
            int up;
            int hi;
            int lo;
            lo = 0;
            hi = cnt - 1;
            for (;;) {
                up = -1;
                p = self->base + lo;
                for (j = lo; j < hi; j++) {
                    if (p->key > p[1].key) {
                        q = p + 1;
                        up = j;
                        SwapElements020e0028(p, q);
                    }
                    p++;
                }
                if (up == -1) break;
                hi = up;
                down = -1;
                r = self->base + hi;
                for (; up > lo; up--) {
                    q = r - 1;
                    if (q->key > r->key) {
                        down = up;
                        struct Element020e0310 tmp = *r;
                        CopyElement020e0028(r, q);
                        CopyElement020e0028(q, &tmp);
                    }
                    r = q;
                }
                if (down == -1) break;
                lo = down;
            }
        }
    }
    return 1;
}
