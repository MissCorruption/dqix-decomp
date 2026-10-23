#include <globaldefs.h>

struct TagValueEntry020e385c {
    unsigned int val;
    unsigned char tag;
};
struct Entry020e3840 {
    int f0;
    unsigned char f4;
    unsigned char f5;
    unsigned char f6;
};

extern "C" struct TagValueEntry020e385c* func_020e385c(struct TagValueEntry020e385c* entries, int tag, int val);
extern "C" void func_020e3840(struct Entry020e3840* s);
extern "C" void* func_0202ae18(void);
extern "C" int func_0202c508(void*);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: func_020e3994
extern "C" ARM void func_020e3994(struct TagValueEntry020e385c* table, int tag, int val) {
    struct TagValueEntry020e385c* entry = func_020e385c(table, tag, val);
    if (entry == NULL) return;
    func_020e3840((struct Entry020e3840*)entry);
    if (!func_0202c508(func_0202ae18())) return;
    func_ov017_021cebcc(3, tag & 0xff, val);
}
