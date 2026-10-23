#include <globaldefs.h>

struct Struct_0214e34c;
extern "C" struct Struct_0214e34c* func_020d7a50();
struct Struct_020d7aa0_2;
extern "C" void func_020d7aa0(struct Struct_020d7aa0_2* arg0);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* arg0);
extern "C" void func_0205c790(char* arg0);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
extern "C" int func_020e51cc(int arg0);
extern "C" void func_0205cb74(char* arg0, int arg1);
extern "C" void func_0205cc50(void* arg0, int arg1, int arg2);
#if defined(jpn)
extern "C" void func_0205dfa8(void*);
extern "C" int sprintf(char*,const char*,...);
extern char data_ov017_021d7f74[];
extern char data_ov017_021d8104[];
#endif
struct Struct_0205c77c;
extern "C" void func_0205c77c(struct Struct_0205c77c* arg0, int arg1);
extern "C" void func_0205cd28(unsigned char* arg0);

// USA: func_ov017_021adb50
extern "C" ARM void func_ov017_021adb50(char* arg0) {
#if defined(jpn)
 enum {Enum_ov017_021adb50_632=0x208, Enum_ov017_021adb50_631=0x207};
#else
 enum {Enum_ov017_021adb50_632=0x278, Enum_ov017_021adb50_631=0x277};
#endif
    func_020d7aa0((struct Struct_020d7aa0_2*)func_020d7a50());
    func_02043204((char*)func_020421a0());
    func_0205c790(arg0 + 0x44);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x64), 1, 1, 0);
    func_0205ba68((struct Struct_0205ba68*)(arg0 + 0xb4), 1, 1, 0);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x64), 1);
    func_0205bacc((struct Struct_0205bacc*)(arg0 + 0xb4), 1);
#if defined(jpn)
    int var0 = (int)data_ov017_021d7f74;
#else
    int var0 = func_020e51cc(0x1f);
#endif

    func_0205cb74(arg0 + 0x44, var0);
    *(short*)(arg0 + 0xf8) = 8;
    *(short*)(arg0 + 0xfa) = 0x40;
#if defined(jpn)
    func_0205dfa8(arg0 + 0x44);
#else
    func_0205cc50(arg0 + 0x44, 0, -4);
#endif

    arg0[Enum_ov017_021adb50_632] = 1;
    func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x48), 1);
    arg0[Enum_ov017_021adb50_631] = 1;
    arg0[Enum_ov017_021adb50_632] = 1;
    func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x48), 1);
#if defined(jpn)

#else
    short var1 = *(short*)(arg0 + 0xfc);
    *(short*)(arg0 + 0xf8) = (0x100 - var1) / 2;
    *(short*)(arg0 + 0xfa) = 0x40;

#endif
    func_0205cd28((unsigned char*)(arg0 + 0x44));
}
