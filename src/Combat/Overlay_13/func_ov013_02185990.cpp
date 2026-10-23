#if defined(jpn)
#define func_0205cc50 func_0205dfa8
#define LOW_REGION(j, u) (j)
#else
#define LOW_REGION(j, u) (u)
#endif
#include <globaldefs.h>

#if defined(jpn)
#define func_ov013_02185990 func_ov013_02186b88
#endif

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);

struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

struct Struct_0201099c_3;
extern "C" int func_020e0434(struct Struct_0201099c_3* arg0, int arg1);

extern "C" void func_0205cb74(char* arg0, int arg1);

#if defined(jpn)
extern "C" void func_0205cc50(void* arg0);
#else
extern "C" void func_0205cc50(void* arg0, int arg1, int arg2);
#endif

struct Struct_0205c77c;
extern "C" void func_0205c77c(struct Struct_0205c77c* arg0, int arg1);

extern "C" void func_0205cd28(unsigned char* arg0);
extern "C" void func_0205cd94(unsigned char* arg0);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);

extern "C" void func_0205c790(char* arg0);

extern int data_02108760;

// USA: func_ov013_02185990
extern "C" ARM void func_ov013_02185990(unsigned char* arg0) {
    unsigned char* var0 = arg0 + LOW_REGION(0, 0x3d4);

    func_0205c790((char*)(var0 + LOW_REGION(0x3d0, 0)));

    *(unsigned char*)(var0 + LOW_REGION(0x481, 0xb1)) = 1;
    *(unsigned char*)(var0 + LOW_REGION(0x480, 0xb0)) = 1;

    func_0205ba68((struct Struct_0205ba68*)(var0 + LOW_REGION(0x3f0, 0x20)), 1, 2, 0);
    func_0205ba68((struct Struct_0205ba68*)(var0 + LOW_REGION(0x440, 0x70)), 1, 2, 0);
    func_0205bacc((struct Struct_0205bacc*)(var0 + LOW_REGION(0x3f0, 0x20)), 2);
    func_0205bacc((struct Struct_0205bacc*)(var0 + LOW_REGION(0x440, 0x70)), 2);

    int var1 = func_020e0434((struct Struct_0201099c_3*)(arg0 + LOW_REGION(0x5ac, 0x620)), 0xa);
    func_0205cb74((char*)(var0 + LOW_REGION(0x3d0, 0)), var1);

    int var2 = func_020e0434((struct Struct_0201099c_3*)(arg0 + LOW_REGION(0x5ac, 0x620)), 0xb);
    func_0205cb74((char*)(var0 + LOW_REGION(0x3d0, 0)), var2);

    *(unsigned short*)(var0 + LOW_REGION(0x484, 0xb4)) = 0xc2;
    *(unsigned short*)(var0 + LOW_REGION(0x486, 0xb6)) = 0x92;

#if defined(jpn)
    func_0205cc50(var0 + 0x3d0);
#else
    func_0205cc50(var0, 0, -4);
#endif

    *(unsigned char*)(var0 + LOW_REGION(0x594, 0x234)) = 1;
    func_0205c77c((struct Struct_0205c77c*)(var0 + LOW_REGION(0x3d4, 0x4)), 1);

    *(unsigned char*)(var0 + LOW_REGION(0x593, 0x233)) = 1;
    *(unsigned char*)(var0 + LOW_REGION(0x594, 0x234)) = 1;
    func_0205c77c((struct Struct_0205c77c*)(var0 + LOW_REGION(0x3d4, 0x4)), 1);

    func_0205cd28(var0 + LOW_REGION(0x3d0, 0));
    func_0205cd94(var0 + LOW_REGION(0x3d0, 0));

    func_0205eaa0((struct Struct_02108760*)&data_02108760, 5, 0);

#if !defined(jpn)
    short var3 = *(short*)(var0 + 0xb6);
    short var4 = *(short*)(var0 + 0xb8);
    *(unsigned short*)(var0 + 0xb4) = 0xfe - var4;
    *(unsigned short*)(var0 + 0xb6) = var3;
    func_0205cc50(var0, 0, -4);
#endif
}
