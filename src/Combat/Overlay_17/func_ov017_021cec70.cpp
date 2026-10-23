#include <globaldefs.h>

extern "C" void* func_020e3808(void);
extern "C" int func_0202c508(void*);
extern "C" void func_ov017_021cebcc(int, int, int);

struct TagValueEntry020e385c;
extern "C" void func_020e39d4(struct TagValueEntry020e385c* table, int bit, int tag, int val);
extern "C" void func_020e3a50(struct TagValueEntry020e385c* table, int bit, int tag, int val);
extern "C" void func_020e392c(struct TagValueEntry020e385c* table, int tag, int val);
extern "C" void func_020e3994(struct TagValueEntry020e385c* table, int tag, int val);

struct WriteEntry020e3b44 {
    unsigned int val;
    unsigned char tag;
    unsigned char b5;
    unsigned char b6;
    unsigned char pad;
};
extern "C" void func_020e3b44(struct WriteEntry020e3b44* entries, int index, struct WriteEntry020e3b44 entry);

struct Obj021cec70 {
    char pad0[4];
    unsigned char caseSel;
    signed char field5;
    char pad1[2];
    struct WriteEntry020e3b44 entry;
};

// USA: func_ov017_021cec70
extern "C" ARM void func_ov017_021cec70(int bit, struct Obj021cec70* obj, int unused2, int unused3, void* arg4) {
    struct TagValueEntry020e385c* table = (struct TagValueEntry020e385c*)func_020e3808();
    int inBattle = func_0202c508(arg4);
    int caseSel = obj->caseSel;

    if (inBattle != 0) {
        switch (caseSel) {
        case 0:
            func_020e39d4(table, bit, obj->entry.tag, obj->entry.val);
            break;
        case 1:
            func_020e3a50(table, bit, obj->entry.tag, obj->entry.val);
            break;
        case 2:
            func_020e392c(table, obj->entry.tag, obj->entry.val);
            break;
        case 3:
            func_ov017_021cebcc(3, obj->entry.tag, obj->entry.val);
            break;
        }
    } else {
        if (caseSel != 3) return;
        signed char idx = obj->field5;
        if (idx < 0) {
            func_020e3994(table, obj->entry.tag, obj->entry.val);
            return;
        }
        func_020e3b44((struct WriteEntry020e3b44*)table, idx, obj->entry);
    }
}
