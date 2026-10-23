#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0202eab8(void* arg0);
extern "C" void func_0202e5d8(void* arg0, int arg1, int arg2, int arg3);
extern "C" void Mat3x3_WriteIdentity(void* obj);
extern "C" void func_020a0d58(void* arg0);

struct Struct_0202df68;
extern "C" void func_0202e9a4(struct Struct_0202df68* arg0, int arg1);

// USA: func_0202df68
extern "C" ARM void func_0202df68(void* arg0) {
    *(int*)((char*)arg0 + 0x0) = 1;
    *(int*)((char*)arg0 + 0x64) = 0x1555;
    *(int*)((char*)arg0 + 0x68) = 0x1000;
    *(int*)((char*)arg0 + 0x6c) = 0x190000;
    func_0202e9a4((struct Struct_0202df68*)arg0, 0xf000);

    *(int*)((char*)arg0 + 0x4) = 0;
    *(int*)((char*)arg0 + 0x8) = 0x4000;
    *(int*)((char*)arg0 + 0xc) = 0x8000;
    *(int*)((char*)arg0 + 0x10) = 0;
    *(int*)((char*)arg0 + 0x14) = 0x800;
    *(int*)((char*)arg0 + 0x18) = 0;
    *(int*)((char*)arg0 + 0x1c) = 0;
    *(int*)((char*)arg0 + 0x20) = 0x1000;
    *(int*)((char*)arg0 + 0x24) = 0;
    func_0202eab8(arg0);

    func_0202e5d8(arg0, 0, 0x6000, 0xb000);

    memset((char*)arg0 + 0xf0, 0, 0x30);

    *(unsigned short*)((char*)arg0 + 0x7c) = 0;
    *(int*)((char*)arg0 + 0x1e4) = 0;
    *(int*)((char*)arg0 + 0x1e8) = 0;
    *(int*)((char*)arg0 + 0x168) = 0;

    Mat3x3_WriteIdentity((char*)arg0 + 0x144);
    func_020a0d58((char*)arg0 + 0x16c);
    func_020a0d58((char*)arg0 + 0x194);
    func_020a0d58((char*)arg0 + 0x1bc);

    *(int*)((char*)arg0 + 0x1f0) = *(int*)((char*)arg0 + 0x58);
    *(int*)((char*)arg0 + 0x1f4) = 0;
    *(unsigned char*)((char*)arg0 + 0x1f8) = 0;

    *(unsigned short*)((char*)arg0 + 0x1fa) = 0;
    *(int*)((char*)arg0 + 0x1fc) = 0;
    *(int*)((char*)arg0 + 0x200) = 0x3f800000;
    *(int*)((char*)arg0 + 0x204) = 0x1000;
    *(unsigned short*)((char*)arg0 + 0x1ec) = 0;
    *(unsigned short*)((char*)arg0 + 0x1ee) = 0;
    *(unsigned char*)((char*)arg0 + 0x20c) = 0;

    char* var0 = (char*)arg0 + 0x200;
    *(unsigned short*)(var0 + 0xe) = 0;
    *(unsigned short*)(var0 + 0x10) = 0;
    *(unsigned short*)(var0 + 0x12) = 0;
    *(unsigned short*)(var0 + 0x14) = 0;
    *(unsigned short*)(var0 + 0x16) = 0;
}
