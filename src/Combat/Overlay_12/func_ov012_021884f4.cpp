#if defined(jpn)
#define func_ov023_021e6de4 func_ov023_021e7148
#define func_ov012_02184384 func_ov012_021853f8
#define func_ov012_0218930c func_ov012_02189be8
enum {
    Enum_ov012_021884f4_4976 = 0x1340,
    Enum_ov012_021884f4_4977 = 0x1341,
    Enum_ov012_021884f4_5024 = 0x1368,
    Enum_ov012_021884f4_172 = 0x90,
    Enum_ov012_021884f4_5096 = 0x1440,
    Enum_ov012_021884f4_5060 = 0x141c,
    Enum_ov012_021884f4_5064 = 0x1420
};
#else
enum {
    Enum_ov012_021884f4_4976 = 0x1370,
    Enum_ov012_021884f4_4977 = 0x1371,
    Enum_ov012_021884f4_5024 = 0x13a0,
    Enum_ov012_021884f4_172 = 0xac,
    Enum_ov012_021884f4_5096 = 0x13e8,
    Enum_ov012_021884f4_5060 = 0x13c4,
    Enum_ov012_021884f4_5064 = 0x13c8
};
#endif

#include <globaldefs.h>

struct Struct_ov012_021884f4 {
    unsigned short unknown_0_0_ : 5;
    unsigned short unknown_0_5_ : 11;
};

extern "C" int func_ov012_02184384(unsigned short* arg0, int arg1);
struct Struct_0205de24_2;
extern "C" void func_0205de24(struct Struct_0205de24_2* arg0, unsigned char arg1, unsigned char arg2);
extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" void func_ov012_0218a438(char* arg0);
struct Struct_0205c570;
extern "C" int func_0205d794(struct Struct_0205c570* arg0);
extern "C" int func_ov023_021e6de4(char* arg0);
struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
struct Struct_ov012_02186a7c;
extern "C" int func_ov023_021e6e20(struct Struct_ov012_02186a7c* arg0);
extern "C" void func_ov012_0218930c(void* arg0, int arg1);
extern int data_02108760;

// USA: func_ov012_021884f4
extern "C" ARM void func_ov012_021884f4(char* arg0) {
    unsigned char var0 = *(unsigned char*)(arg0 + Enum_ov012_021884f4_4976);
    if (var0 == 0) {
        *(unsigned char*)(arg0 + Enum_ov012_021884f4_5024) = 0;
        *(int*)(arg0 + Enum_ov012_021884f4_5096) = 1;

        unsigned int var1 = ((Struct_ov012_021884f4*)(arg0 + Enum_ov012_021884f4_5060))->unknown_0_5_;
        int var2 = func_ov012_02184384(*(unsigned short**)(arg0 + Enum_ov012_021884f4_5064), var1);
        if (var2 < 0) {
            *(int*)(arg0 + Enum_ov012_021884f4_5096) = 0;
        }

        func_0205de24((struct Struct_0205de24_2*)(arg0 + Enum_ov012_021884f4_172), 0, 3);
        func_ov023_021e6e60(arg0);
        func_ov012_0218a438(arg0);

        (*(unsigned char*)(arg0 + Enum_ov012_021884f4_4976))++;
        return;
    }
    if (var0 != 1) return;

    *(unsigned char*)(arg0 + Enum_ov012_021884f4_5024) = 1;
    int var3 = func_0205d794((struct Struct_0205c570*)(arg0 + Enum_ov012_021884f4_172));
    *(int*)(arg0 + Enum_ov012_021884f4_5096) = var3;

    if (func_ov023_021e6de4(arg0) != 0) {
        int var4 = *(int*)(arg0 + Enum_ov012_021884f4_5096);
        int var5 = 1;
        switch (var4) {
        case 0:
            *(unsigned char*)(arg0 + Enum_ov012_021884f4_4977) = 0xb;
            *(unsigned char*)(arg0 + Enum_ov012_021884f4_4976) = 0;
            break;
        case 1: {
            if (((Struct_ov012_021884f4*)(arg0 + Enum_ov012_021884f4_5060))->unknown_0_5_ != 0) {
                *(unsigned char*)(arg0 + Enum_ov012_021884f4_4977) = 0xc;
                *(unsigned char*)(arg0 + Enum_ov012_021884f4_4976) = 0;
            } else {
                var5 = 0;
            }
            break;
        }
        }

        if (var5 != 0) {
            func_0205eaa0((struct Struct_02108760*)&data_02108760, 1, 0);
        }
    } else {
        if (func_ov023_021e6e20((struct Struct_ov012_02186a7c*)arg0) != 0) {
            func_ov012_0218930c(arg0, 1);
        }
    }
}
