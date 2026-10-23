#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov000_0218048c_7538 = 0x1faa };
#else
enum { Enum_ov000_0218048c_7538 = 0x1d72 };
#endif

struct Struct_0205d1e0;
struct Struct_0205d274;
struct Struct_0205d2bc;
struct Struct_0205d6a0;

extern "C" void func_0205d1e0(struct Struct_0205d1e0*);
extern "C" void func_0205d274(struct Struct_0205d274*);
extern "C" void func_0205d2bc(struct Struct_0205d2bc*);
extern "C" void func_0205d6a0(struct Struct_0205d6a0*, int);
extern "C" void func_ov000_02174b14(void* arg0);

struct Struct_ov000_0218048c {
    char unknown_0_[0x24];
    unsigned char unknown_24_;
    char unknown_25_[0x4c - 0x25];
    int unknown_4c_;
#if defined(jpn)
    char unknown_50_[0x488 - 0x50];
#else
    char unknown1_50_[0x448 - 0x50];
#endif
};

// USA: func_ov000_0218048c
extern "C" ARM void func_ov000_0218048c(char* arg0) {
    int var0;
    func_0205d1e0((struct Struct_0205d1e0*)(arg0 + 0x188));
    func_0205d274((struct Struct_0205d274*)(arg0 + 0x188));
    func_0205d2bc((struct Struct_0205d2bc*)(arg0 + 0x188));
    func_0205d6a0((struct Struct_0205d6a0*)(arg0 + 0x188), 1);
    for (var0 = 0; var0 < 4; var0++) {
        signed char var1 = *(signed char*)(arg0 + var0 + 0x6c);
        struct Struct_ov000_0218048c* var2 = (struct Struct_ov000_0218048c*)(arg0 + 0x958) + var1;
        if (var2->unknown_24_ & 0x2) {
            var2->unknown_24_ |= 0x4;
            *(int*)(arg0 + 0x17c) = var2->unknown_4c_;
        }
    }
    *(unsigned short*)(arg0 + Enum_ov000_0218048c_7538) &= ~0x8;
    *(int*)(arg0 + 0x914) = 0;
    *(int*)(arg0 + 0x910) = 0;
    func_ov000_02174b14(arg0);
}
