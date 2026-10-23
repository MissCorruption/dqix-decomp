#include <globaldefs.h>

struct Init0207d7c0 {
    short h0;
    unsigned short h2;
    char b4;
    char b5;
    char pad6[2];
    char b8;
    char b9;
    char ba;
    char bb;
};
extern "C" void func_0207d7c0(struct Init0207d7c0* o);

// USA: func_0207de1c
extern "C" ARM struct Init0207d7c0* func_0207de1c(struct Init0207d7c0* arr) {
    func_0207d7c0(&arr[0]);
    func_0207d7c0(&arr[1]);
    func_0207d7c0(&arr[2]);
    func_0207d7c0(&arr[3]);
    return arr;
}
