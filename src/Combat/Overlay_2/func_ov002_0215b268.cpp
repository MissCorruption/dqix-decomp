#include <globaldefs.h>

extern int data_02108760;
extern int data_02109bf4;

extern "C" unsigned char func_0205ea18(unsigned char* obj);
extern "C" void func_0209ca70(void* obj, int val);
struct Obj0205e9f4;
extern "C" void func_0205e9f4(struct Obj0205e9f4* obj, int state);
struct Obj0205eaa0;
extern "C" void func_0205eaa0(struct Obj0205eaa0* obj, int a, int b);

// USA: func_ov002_0215b268
extern "C" ARM void func_ov002_0215b268(char* p) {
#if defined(jpn)
    enum { regionalMode = 0xaf4 };
#else
    enum { regionalMode = 0xc2c };
#endif
    unsigned char a = func_0205ea18((unsigned char*)&data_02108760);
    unsigned char b1 = *(unsigned char*)(p + 0x1000 + regionalMode);
    func_0209ca70(&data_02109bf4, b1);
    unsigned char b2 = *(unsigned char*)(p + 0x1000 + regionalMode + 1);
    func_0205e9f4((struct Obj0205e9f4*)&data_02108760, b2);
    unsigned char b3 = *(unsigned char*)(p + 0x1000 + regionalMode + 1);
    if (a == b3) return;
    func_0205eaa0((struct Obj0205eaa0*)&data_02108760, 1, 0);
}
