#include <globaldefs.h>

struct Struct_ov025_021d8c30_11 {
    unsigned int unknown_0_;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
    unsigned char unknown_14_;
};

extern "C" void func_ov025_021dcd28(struct Struct_ov025_021d8c30_11* arg0, struct Struct_ov025_021d8c30_11* arg1);

#if defined(jpn)
#define SLOT_COUNT 0x70f0
#define SLOT_DATA 0x70f8
#define SLOT_BASE 0x7100
#define SLOT_FIELD(n) ((n) - 0x10)
#else
#define SLOT_COUNT 0x6f00
#define SLOT_DATA 0x6f08
#define SLOT_BASE 0x6f00
#define SLOT_FIELD(n) (n)
#endif

// USA: func_ov025_021dcde8
extern "C" ARM void func_ov025_021dcde8(unsigned char* arg0, struct Struct_ov025_021d8c30_11* arg1) {
    if (*(unsigned char*)(arg0 + SLOT_COUNT) >= 5) {
        return;
    }
    func_ov025_021dcd28((struct Struct_ov025_021d8c30_11*)(arg0 + SLOT_DATA + *(unsigned char*)(arg0 + SLOT_COUNT) * 0x1c), arg1);
    *(unsigned short*)(arg0 + *(unsigned char*)(arg0 + SLOT_COUNT) * 0x1c + SLOT_BASE + SLOT_FIELD(0x20)) = 0;
    *(unsigned short*)(arg0 + *(unsigned char*)(arg0 + SLOT_COUNT) * 0x1c + SLOT_BASE + SLOT_FIELD(0x22)) = 0;
    if (*(unsigned char*)(arg0 + SLOT_COUNT) != 0) {
        int var0 = *(unsigned char*)(arg0 + SLOT_COUNT);
        unsigned short var1 = *(unsigned short*)(arg0 + (var0 - 1) * 0x1c + SLOT_BASE + SLOT_FIELD(0x20));
        *(unsigned short*)(arg0 + var0 * 0x1c + SLOT_BASE + SLOT_FIELD(0x22)) = var1;
    }
    *(unsigned char*)(arg0 + SLOT_COUNT) = *(unsigned char*)(arg0 + SLOT_COUNT) + 1;
}
