#include <globaldefs.h>

extern "C" void func_020c99ac(void*);
extern "C" int func_ov031_0223fc7c(char*, unsigned int, int);
extern "C" int func_ov031_0223e454(void*, const void*, int);

// USA: func_ov031_0223fae8
extern "C" ARM void func_ov031_0223fae8(void* destination) {
    unsigned char bytes[6];
    char encoded[12];
    func_020c99ac(bytes);
    for (int i = 0; i < 6; i++) {
        func_ov031_0223fc7c(encoded + i * 2, bytes[i], 2);
    }
    func_ov031_0223e454(destination, encoded, 12);
}
