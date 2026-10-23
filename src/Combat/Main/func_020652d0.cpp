#include <globaldefs.h>

#if defined(jpn)
enum { kEnabled = 0x1c4, kActive = 0x1c3 };
#else
enum { kEnabled = 0x234, kActive = 0x233 };
#endif

extern "C" void func_0205c790(char* obj);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* s, int a, int b, int mode);

struct Node0205bacc;
extern "C" void func_0205bacc(struct Node0205bacc* s, int val);

extern "C" void func_0205cb74(char* obj, int value);

#if defined(jpn)
extern "C" void func_0205dfa8(void* obj);
extern "C" void func_0206cfd4(char*);
#else
extern "C" void func_0205cc50(void* obj, int a, int b);
#endif

extern "C" int func_020421a0(void);
extern "C" void func_0206b7b0(char* base);

struct Struct_0205bcdc;
extern "C" void func_0205bcdc(struct Struct_0205bcdc* s, int index);

extern "C" void func_0205bb04(void* s, int n);

struct ResetBytesAndSetByte0x16Data;
extern "C" void func_0205c77c(struct ResetBytesAndSetByte0x16Data* p, int val);

extern "C" void func_0205cd28(unsigned char* obj);

// JPN: func_020665bc
// USA: func_020652d0
#if defined(jpn)
extern "C" ARM void func_020665bc(char* obj, int a, const char* b, const char* c) {
#else
extern "C" ARM void func_020652d0(char* obj, int a, int b, int c) {
#endif
    func_0205c790(obj);

    obj[0xb1] = 1;
    obj[0xb0] = 1;
    func_0205ba68((struct Struct_0205ba68*)(obj + 0x20), 1, 2, 0);
    func_0205ba68((struct Struct_0205ba68*)(obj + 0x70), 1, 2, 0);

    func_0205bacc((struct Node0205bacc*)(obj + 0x20), 2);
    func_0205bacc((struct Node0205bacc*)(obj + 0x70), 2);

#if defined(jpn)
    func_0205cb74(obj, (int)b);
    func_0205cb74(obj, (int)c);
#else
    func_0205cb74(obj, b);
    func_0205cb74(obj, c);
#endif

    *(short*)(obj + 0xb4) = 0;
    *(short*)(obj + 0xb6) = 0;

#if defined(jpn)
    func_0205dfa8(obj);
    func_0206cfd4((char*)func_020421a0());
    func_0205dfa8(obj);
#else
    func_0205cc50(obj, 1, -4);
    func_0206b7b0((char*)func_020421a0());
    func_0205cc50(obj, 1, -4);
#endif

    func_0205bcdc((struct Struct_0205bcdc*)(obj + 0x20), a);
    func_0205bb04(obj + 0x70, a);

    obj[kEnabled] = 1;
    func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(obj + 0x4), 1);

    obj[kActive] = 1;
    obj[kEnabled] = 1;
    func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(obj + 0x4), 1);

    func_0205cd28((unsigned char*)obj);

    int bit = (*(volatile unsigned short*)0x4000304 & 0x8000) >> 15;
    if (bit == 1) {
        obj[0xb0] = 0;
    }
}
