#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
extern "C" void* func_ov004_0216b1c4(void* arg0, int arg1);
extern "C" void func_ov004_0216afb0(void* arg0, int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8);
extern "C" int func_ov004_0216b7bc(void* arg0, int arg1, int arg2, int arg3);
extern "C" int func_ov004_0216b2c8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void func_ov004_0216b20c(void* arg0, int arg1, int arg2, int arg3);

extern unsigned char data_ov004_02171034[];

#if defined(jpn)
#define RESULT_OFFSET 0x10
#else
#define RESULT_OFFSET 0xc
#endif

// USA: func_ov004_0216c750
extern "C" ARM int func_ov004_0216c750(void* arg0) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), 1);
    if (var0 != 0) {
        *(unsigned char*)((char*)var0 + 0xc) |= 8;
    }
    func_ov004_0216b1c4(arg0, 0x12c);

    func_ov004_0216afb0(arg0, 0x32, 2, 0xd4, 0x36, 0xa, 0xa, 0xc, 1);
    *(int*)&data_ov004_02171034[RESULT_OFFSET] = func_ov004_0216b7bc(arg0, 0xd4, 0x60, 0);

    func_ov004_0216b2c8(arg0, 0x12c, 0x32, 0);

    func_ov004_0216b20c(arg0, 0x32, 0xc9, 0);

    return 0;
}
