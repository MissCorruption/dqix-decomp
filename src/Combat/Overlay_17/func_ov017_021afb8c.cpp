#include <globaldefs.h>

extern "C" int func_020421a0(void);
extern "C" void __clear(void* arg0, int arg1);
extern "C" void func_02042764(char* arg0, void* arg1, int arg2);
struct Struct_02046574_2;
extern "C" void func_02046574(struct Struct_02046574_2* arg0, int arg1, char* arg2);
extern "C" int func_020e51cc(int arg0);
extern "C" void func_02046608(void* arg0, int arg1, int arg2, void* arg3, int arg4, int arg5, int arg6);
extern "C" void func_0205c790(char* arg0);
struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* arg0, int arg1, int arg2, int arg3);
struct Struct_0205bacc;
extern "C" void func_0205bacc(struct Struct_0205bacc* arg0, int arg1);
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
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* arg0, unsigned int arg1);

// USA: func_ov017_021afb8c
extern "C" ARM void func_ov017_021afb8c(char* arg0, char* arg1) {
#if defined(jpn)
 enum {Enum_ov017_021afb8c_636=0x20c, Enum_ov017_021afb8c_635=0x20b};
#else
 enum {Enum_ov017_021afb8c_636=0x27c, Enum_ov017_021afb8c_635=0x27b};
#endif
    if ((unsigned char)arg0[2] != 0 && (unsigned char)arg0[9] != 2) {
#if defined(jpn)
        char var3[0x64];
        sprintf(var3,data_ov017_021d8104,arg1);

#else
        void* var0 = (void*)func_020421a0();
        char var1[0x30];
        __clear(var1, 0x30);
        func_02042764(arg1, var1, 1);
        func_02046574((struct Struct_02046574_2*)var0, 0, var1);

        int var2 = func_020e51cc(0x24);
        char var3[0x64];
        func_02046608(var0, 0xc, var2, var3, 0x100, 0, 1);

#endif
        func_0205c790(arg0 + 0x48);
        func_0205ba68((struct Struct_0205ba68*)(arg0 + 0x68), 1, 1, 0);
        func_0205ba68((struct Struct_0205ba68*)(arg0 + 0xb8), 1, 1, 0);
        func_0205bacc((struct Struct_0205bacc*)(arg0 + 0x68), 1);
        func_0205bacc((struct Struct_0205bacc*)(arg0 + 0xb8), 1);

        func_0205cb74(arg0 + 0x48, (int)var3);

        *(short*)(arg0 + 0xfc) = 0xc;
        *(short*)(arg0 + 0xfe) = 0x40;
#if defined(jpn)
        func_0205dfa8(arg0 + 0x48);
#else
        func_0205cc50(arg0 + 0x48, 0, -4);
#endif

        arg0[Enum_ov017_021afb8c_636] = 1;
        func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x4c), 1);
        arg0[Enum_ov017_021afb8c_635] = 1;
        arg0[Enum_ov017_021afb8c_636] = 1;
        func_0205c77c((struct Struct_0205c77c*)(arg0 + 0x4c), 1);

        short var4 = *(short*)(arg0 + 0x100);
        *(short*)(arg0 + 0xfc) = (0x100 - var4) / 2;
        *(short*)(arg0 + 0xfe) = 0x40;

        func_0205cd28((unsigned char*)(arg0 + 0x48));
        func_020466e4((unsigned int*)func_020d6c00(), 0x800000);
    }
}
