#include <globaldefs.h>

struct Struct_ov001_02158828;
extern "C" void func_ov001_02158828(struct Struct_ov001_02158828* arg0);

struct Struct_ov001_02158e8c {
    char unknown_0_[0x30];
    int unknown_30_;
    int unknown_34_;
};

// USA: func_ov001_02158e8c
extern "C" ARM void* func_ov001_02158e8c(struct Struct_ov001_02158e8c* arg0, struct Struct_ov001_02158828* arg1, int arg2) {
    if (arg1 == NULL) {
        return NULL;
    }
    void* var0 = *(void**)((char*)arg1 + 0x48);
    switch (arg2) {
        case 0:
            if (arg0->unknown_30_ == 0) {
                func_ov001_02158828(arg1);
            }
            break;
        case 1:
            if (arg0->unknown_34_ == 0) {
                func_ov001_02158828(arg1);
            }
            break;
        case 2:
            func_ov001_02158828(arg1);
            break;
        default:
            break;
    }
    return var0;
}
