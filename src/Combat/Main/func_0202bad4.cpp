#include <globaldefs.h>

struct Element0202bad4 {
    char data[0xc0];
};

struct ElementArray0202bad4 {
    char pad[0x10];
    struct Element0202bad4 elements[1];
};

// USA: func_0202bad4
extern "C" ARM struct Element0202bad4* func_0202bad4(struct ElementArray0202bad4* base, int index) {
    return &base->elements[index];
}
