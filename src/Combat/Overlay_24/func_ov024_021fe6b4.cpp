#include <globaldefs.h>

struct IndexedObj_021fe6b4 {
    char unk[0x3c];
    int value;
};

// USA: func_ov024_021fe6b4
extern "C" ARM void func_ov024_021fe6b4(struct IndexedObj_021fe6b4* obj, int val) {
    obj->value = val;
    *((unsigned char*)obj + 0x40) = *((unsigned char*)obj + val + 0x10);
}
