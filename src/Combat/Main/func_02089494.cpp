#include <globaldefs.h>

struct Struct02082d38;
extern "C" void func_02082d38(struct Struct02082d38* dst, struct Struct02082d38* src);

struct Packed3c_89494 {
    unsigned int fieldA : 10;
    unsigned int fieldB : 10;
    unsigned int fieldC : 10;
    unsigned int fieldD : 2;
};

// USA: func_02089494
extern "C" ARM void func_02089494(char* dst, char* buf, char* src) {
    *(unsigned short*)(dst + 0x4) = *(unsigned short*)(src + 0x30);
    *(unsigned short*)(dst + 0x6) = *(unsigned short*)(src + 0x32);
    func_02082d38((struct Struct02082d38*)(dst + 0x3e), (struct Struct02082d38*)(buf + 0x9));
    *(unsigned short*)(dst + 0xc) = *(unsigned short*)(src + 0x38);
    *(unsigned short*)(dst + 0x8) = *(unsigned short*)(src + 0x34);
    *(unsigned short*)(dst + 0xa) = *(unsigned short*)(src + 0x36);
    ((Packed3c_89494*)(dst + 0x10))->fieldA = (unsigned short)((Packed3c_89494*)(src + 0x3c))->fieldA;
    ((Packed3c_89494*)(dst + 0x10))->fieldB = (unsigned short)((Packed3c_89494*)(src + 0x3c))->fieldB;
    ((Packed3c_89494*)(dst + 0x10))->fieldC = (unsigned short)((Packed3c_89494*)(src + 0x3c))->fieldC;
}
