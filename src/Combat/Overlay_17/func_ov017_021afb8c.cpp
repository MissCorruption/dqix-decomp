#include <globaldefs.h>

extern "C" int func_020421a0(void);
extern "C" void __clear(void* buf, int size);
extern "C" void func_02042764(char* name, void* buf, int flag);
struct Obj02046574;
extern "C" void func_02046574(struct Obj02046574* obj, int index, char* str);
extern "C" int func_020e51cc(int value);
extern "C" void func_02046608(void* a, int b, int c, void* d, int e, int f, int g);
extern "C" void func_0205c790(char* obj);
struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* s, int a, int b, int mode);
struct Node0205bacc;
extern "C" void func_0205bacc(struct Node0205bacc* s, int val);
extern "C" void func_0205cb74(char* obj, int value);
extern "C" void func_0205cc50(void* obj, int a, int b);
#if defined(jpn)
extern "C" void func_0205dfa8(void*);
extern "C" int sprintf(char*,const char*,...);
extern char data_ov017_021d7f74[];
extern char data_ov017_021d8104[];
#endif
struct ResetBytesAndSetByte0x16Data;
extern "C" void func_0205c77c(struct ResetBytesAndSetByte0x16Data* p, int val);
extern "C" void func_0205cd28(unsigned char* obj);
extern "C" void* func_020d6c00(void);
extern "C" void func_020466e4(unsigned int* p, unsigned int mask);

// USA: func_ov017_021afb8c
extern "C" ARM void func_ov017_021afb8c(char* self, char* name) {
#if defined(jpn)
 enum {regionalOffset0=0x20c, regionalOffset1=0x20b};
#else
 enum {regionalOffset0=0x27c, regionalOffset1=0x27b};
#endif
    if ((unsigned char)self[2] != 0 && (unsigned char)self[9] != 2) {
#if defined(jpn)
        char buf2[0x64];
        sprintf(buf2,data_ov017_021d8104,name);

#else
        void* g = (void*)func_020421a0();
        char buf1[0x30];
        __clear(buf1, 0x30);
        func_02042764(name, buf1, 1);
        func_02046574((struct Obj02046574*)g, 0, buf1);

        int ret = func_020e51cc(0x24);
        char buf2[0x64];
        func_02046608(g, 0xc, ret, buf2, 0x100, 0, 1);

#endif
        func_0205c790(self + 0x48);
        func_0205ba68((struct Struct_0205ba68*)(self + 0x68), 1, 1, 0);
        func_0205ba68((struct Struct_0205ba68*)(self + 0xb8), 1, 1, 0);
        func_0205bacc((struct Node0205bacc*)(self + 0x68), 1);
        func_0205bacc((struct Node0205bacc*)(self + 0xb8), 1);

        func_0205cb74(self + 0x48, (int)buf2);

        *(short*)(self + 0xfc) = 0xc;
        *(short*)(self + 0xfe) = 0x40;
#if defined(jpn)
        func_0205dfa8(self + 0x48);
#else
        func_0205cc50(self + 0x48, 0, -4);
#endif

        self[regionalOffset0] = 1;
        func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(self + 0x4c), 1);
        self[regionalOffset1] = 1;
        self[regionalOffset0] = 1;
        func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(self + 0x4c), 1);

        short v = *(short*)(self + 0x100);
        *(short*)(self + 0xfc) = (0x100 - v) / 2;
        *(short*)(self + 0xfe) = 0x40;

        func_0205cd28((unsigned char*)(self + 0x48));
        func_020466e4((unsigned int*)func_020d6c00(), 0x800000);
    }
}
