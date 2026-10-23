#include <globaldefs.h>

struct FlagObj_021de25c;
extern "C" int func_ov024_021de25c(struct FlagObj_021de25c* obj);

struct Obj_021fd784 {
    char unk[0x661];
    unsigned char flag661;
    char unk2[0x668 - 0x661 - 1];
    struct FlagObj_021de25c* ptr668;
};

extern "C" void func_ov024_021fd160(void* obj, int mode);

// USA: func_ov024_021fd784
extern "C" ARM void func_ov024_021fd784(struct Obj_021fd784* obj) {
    if (func_ov024_021de25c(obj->ptr668)) {
        if (!obj->flag661) {
            func_ov024_021fd160(obj, 7);
        }
    }
}
