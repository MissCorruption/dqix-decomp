#include <globaldefs.h>

struct ResetObj020d7a5c;
extern "C" struct ResetObj020d7a5c* func_020d7a50();
struct Obj020d7aa0;
extern "C" void func_020d7aa0(struct Obj020d7aa0* obj);
extern "C" int func_020421a0(void);
extern "C" void func_02043204(char* obj);
extern "C" void func_0205c790(char* obj);

struct Struct_0205ba68;
extern "C" void func_0205ba68(struct Struct_0205ba68* s, int a, int b, int mode);
struct Node0205bacc;
extern "C" void func_0205bacc(struct Node0205bacc* s, int val);
extern "C" int func_020e51cc(int value);
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

// USA: func_ov017_021adb50
extern "C" ARM void func_ov017_021adb50(char* self) {
#if defined(jpn)
 enum {regionalOffset0=0x208, regionalOffset1=0x207};
#else
 enum {regionalOffset0=0x278, regionalOffset1=0x277};
#endif
    func_020d7aa0((struct Obj020d7aa0*)func_020d7a50());
    func_02043204((char*)func_020421a0());
    func_0205c790(self + 0x44);
    func_0205ba68((struct Struct_0205ba68*)(self + 0x64), 1, 1, 0);
    func_0205ba68((struct Struct_0205ba68*)(self + 0xb4), 1, 1, 0);
    func_0205bacc((struct Node0205bacc*)(self + 0x64), 1);
    func_0205bacc((struct Node0205bacc*)(self + 0xb4), 1);
#if defined(jpn)
    int val = (int)data_ov017_021d7f74;
#else
    int val = func_020e51cc(0x1f);
#endif

    func_0205cb74(self + 0x44, val);
    *(short*)(self + 0xf8) = 8;
    *(short*)(self + 0xfa) = 0x40;
#if defined(jpn)
    func_0205dfa8(self + 0x44);
#else
    func_0205cc50(self + 0x44, 0, -4);
#endif

    self[regionalOffset0] = 1;
    func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(self + 0x48), 1);
    self[regionalOffset1] = 1;
    self[regionalOffset0] = 1;
    func_0205c77c((struct ResetBytesAndSetByte0x16Data*)(self + 0x48), 1);
#if defined(jpn)

#else
    short v = *(short*)(self + 0xfc);
    *(short*)(self + 0xf8) = (0x100 - v) / 2;
    *(short*)(self + 0xfa) = 0x40;

#endif
    func_0205cd28((unsigned char*)(self + 0x44));
}
