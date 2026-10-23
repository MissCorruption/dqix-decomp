#include <globaldefs.h>

extern "C" void func_02067e98(unsigned char* arg0, int arg1);
extern "C" void func_02044d0c(unsigned char* arg0);

struct Struct_0204394c;
extern "C" void func_0204394c(struct Struct_0204394c* arg0);

#if defined(jpn)
struct Struct_02044f3c {
    unsigned char unknown_0_0_ : 1;
};

extern "C" void func_02069878(unsigned char* arg0, int arg1);
extern "C" void func_02044104(struct Struct_0204394c* arg0);

extern "C" ARM void func_02044f3c(unsigned char* arg0, int arg1, int arg2) {
    (arg0 + 0x1000)[0x7ed] = 1;
    func_02069878(arg0, arg1);
    if ((arg0 + 0x1000)[0x7fd] == 0 && arg2 == 1) {
        (arg0 + 0x1000)[0x7de] = 0;
        (arg0 + 0x1000)[0x7df] = 0;
        (arg0 + 0x1000)[0x7fe] = 1;
        *(int*)(arg0 + 0xc) = 0;
        func_02044d0c(arg0 + 0x1000);
    }
    (arg0 + 0x1000)[0x7fd] = 0;
    ((Struct_02044f3c*)(arg0 + 0x1000 + 0x7ff))->unknown_0_0_ = 0;
    if (arg2 == 1) {
        (arg0 + 0x1000)[0x7fd] = 1;
    } else if (arg2 == 1) {
        ((Struct_02044f3c*)(arg0 + 0x1000 + 0x7ff))->unknown_0_0_ = 1;
    }
    if ((arg0 + 0x1000)[0x7fd] != 0) {
        (arg0 + 0x1000)[0x7fd] = 1;
        (arg0 + 0x1000)[0x7de] = 0;
        (arg0 + 0x1000)[0x7df] = 0;
        (arg0 + 0x1000)[0x7fe] = 1;
        *(int*)(arg0 + 0xc) = 0;
    }
    if (((Struct_02044f3c*)(arg0 + 0x1000 + 0x7ff))->unknown_0_0_) {
        *(int*)(arg0 + 0x10) = 0;
        func_02044104(*(struct Struct_0204394c**)(arg0 + 0x1000 + 0xc4c));
    }
}
#else
// USA: func_02044f3c
extern "C" ARM void func_02044f3c(unsigned char* arg0, int arg1, int arg2) {
    (arg0 + 0x1000)[0x9bd] = 1;
    func_02067e98(arg0, arg1);
    if ((arg0 + 0x1000)[0x9cc] == 0 && arg2 == 1) {
        (arg0 + 0x1000)[0x9ae] = 0;
        (arg0 + 0x1000)[0x9af] = 0;
        (arg0 + 0x1000)[0x9cd] = 1;
        *(int*)(arg0 + 0x40) = 0;
        func_02044d0c(arg0 + 0x1000);
    }
    (arg0 + 0x1000)[0x9cc] = 0;
    (arg0 + 0x1000)[0x9ce] = 0;
    if (arg2 == 1) {
        (arg0 + 0x1000)[0x9cc] = 1;
    } else if (arg2 == 1) {
        (arg0 + 0x1000)[0x9ce] = 1;
    }
    if ((arg0 + 0x1000)[0x9cc] != 0) {
        (arg0 + 0x1000)[0x9cc] = 1;
        (arg0 + 0x1000)[0x9ae] = 0;
        (arg0 + 0x1000)[0x9af] = 0;
        (arg0 + 0x1000)[0x9cd] = 1;
        *(int*)(arg0 + 0x40) = 0;
    }
    if ((arg0 + 0x1000)[0x9ce] != 0) {
        *(int*)(arg0 + 0x44) = 0;
        func_0204394c(*(struct Struct_0204394c**)(arg0 + 0x1000 + 0xe28));
    }
    ((char*)arg0)[0x30] = -1;
    ((char*)arg0)[0x31] = -1;
}
#endif
