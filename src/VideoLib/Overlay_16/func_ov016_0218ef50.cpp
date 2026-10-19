#include <globaldefs.h>

struct OutStruct0218ef50 {
    int sum;
    char pad_4[8];
    int arr1[6];
    int arr2[6];
};

struct Base0218ef50 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4(unsigned int a, unsigned int b);
    virtual void v5();
};

struct Obj0218ef50 {
    Base0218ef50* child;
    char pad_4[8];
    unsigned int capacity;
    char pad_10[0xe];
    unsigned short multiplier;
    char pad_20[0x14];
    OutStruct0218ef50* out;
    char pad_38[0x24];
    int* table1;
    int* table2;
    char pad_64[0xc];
    unsigned int arr70[2];
    unsigned int arr78[2];
    unsigned int arr80[2];
    unsigned int arr88[2];
    int bufIdx;
    char pad_94[4];
    unsigned int writeIdx;
    #if defined(jpn)
    char pad_9c[0xc];
#else
    char pad_9c[0x10];
#endif
    int idx2tbl[6];
    char pad_c4[4];
    int result;
};

// USA: func_ov016_0218ef50
extern "C" ARM int func_ov016_0218ef50(Obj0218ef50* o) {
    if (o->writeIdx == o->capacity) {
        return 0;
    }
    o->writeIdx = o->writeIdx + 1;

    int idx0 = o->bufIdx;
    o->bufIdx = (idx0 + 1) % 2;

    o->child->v5();

    unsigned int packed = *(unsigned int*)(o->arr80[o->bufIdx] + o->arr78[o->bufIdx] + o->arr70[o->bufIdx]);
    o->arr78[idx0] = packed >> 14;
    o->arr88[idx0] = packed & 0x3fff;

    o->out->sum = o->arr70[o->bufIdx] + o->arr80[o->bufIdx];

    if (o->writeIdx < o->capacity) {
        o->arr80[idx0] = o->child->v4(o->arr70[idx0], o->arr78[idx0] + 4);
    }

    int i = 0;
    do {
        o->out->arr1[i] = o->table1[o->idx2tbl[i]];
        o->out->arr2[i] = o->table2[o->idx2tbl[i]];
        i++;
    } while (i < 6);

    o->result = o->multiplier * o->arr88[o->bufIdx];
    return 1;
}
