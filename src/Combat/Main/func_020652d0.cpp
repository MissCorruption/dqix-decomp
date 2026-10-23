#include <globaldefs.h>

#if defined(jpn)
enum { Enum_020652d0_564 = 0x1c4, Enum_020652d0_563 = 0x1c3 };
#else
enum { Enum_020652d0_564 = 0x234, Enum_020652d0_563 = 0x233 };
#endif

extern "C" void func_0205c790(char* arg0);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);

struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);

extern "C" void func_0205cb74(char* arg0, int arg1);

#if defined(jpn)
extern "C" void func_0205dfa8(void* arg0);
extern "C" void func_0206cfd4(char*);
#else
extern "C" void func_0205cc50(void* arg0, int arg1, int arg2);
#endif

extern "C" int func_020421a0(void);
extern "C" void func_0206b7b0(char* arg0);

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* arg0, int arg1);

extern "C" void func_0205bb04(void* arg0, int arg1);

struct Struct_0205c77c;
extern "C" void func_0205c77c(struct Struct_0205c77c* arg0, int arg1);

extern "C" void func_0205cd28(unsigned char* arg0);

// JPN: func_020665bc
// USA: func_020652d0
#if defined(jpn)
extern "C" ARM void func_020665bc(char* arg0, int arg1, const char* arg2, const char* arg3) {
#else
extern "C" ARM void func_020652d0(char* arg0, int arg1, int arg2, int arg3) {
#endif
    func_0205c790(arg0);

    arg0[0xb1] = 1;
    arg0[0xb0] = 1;
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x20), 1, 2, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x70), 1, 2, 0);

    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x20), 2);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x70), 2);

#if defined(jpn)
    func_0205cb74(arg0, (int)arg2);
    func_0205cb74(arg0, (int)arg3);
#else
    func_0205cb74(arg0, arg2);
    func_0205cb74(arg0, arg3);
#endif

    *(short*)(arg0 + 0xb4) = 0;
    *(short*)(arg0 + 0xb6) = 0;

#if defined(jpn)
    func_0205dfa8(arg0);
    func_0206cfd4((char*)func_020421a0());
    func_0205dfa8(arg0);
#else
    func_0205cc50(arg0, 1, -4);
    func_0206b7b0((char*)func_020421a0());
    func_0205cc50(arg0, 1, -4);
#endif

    func_0205bcdc((struct Struct_0205bcdc*)(arg0 + 0x20), arg1);
    func_0205bb04(arg0 + 0x70, arg1);

    arg0[Enum_020652d0_564] = 1;
    func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x4), 1);

    arg0[Enum_020652d0_563] = 1;
    arg0[Enum_020652d0_564] = 1;
    func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x4), 1);

    func_0205cd28((unsigned char*)arg0);

    int var0 = (*(volatile unsigned short*)0x4000304 & 0x8000) >> 15;
    if (var0 == 1) {
        arg0[0xb0] = 0;
    }
}
