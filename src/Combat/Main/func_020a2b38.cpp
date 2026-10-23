#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

extern "C" void func_0202e694(void* arg0, int* arg1);
struct Struct_0202e6a8;
extern "C" void func_0202e6a8(struct Struct_0202e6a8*, int);
extern "C" void func_020a212c(void* arg0, int arg1);

// USA: func_020a2b38
extern "C" ARM void func_020a2b38(void* arg0, int* arg1, int* arg2, int* arg3) {
    char* var0 = (char*)arg0;
    Vector3i var1 = *(Vector3i*)(var0 + 0x10);
    Vector3i var2 = *(Vector3i*)(var0 + 0x70);
    int var3 = *(short*)(var0 + 0x21e);
    func_0202e6a8((struct Struct_0202e6a8*)arg0, var3);
    *(int*)(var0 + 0x220) = *(short*)(var0 + 0x21e);
    func_0202e694(arg0, (int*)(var0 + 0x220));
    func_020a212c(arg0, 0);
    *(Vector3i*)arg1 = *(Vector3i*)(var0 + 0x4);
    *(Vector3i*)arg2 = *(Vector3i*)(var0 + 0x10);
    *(Vector3i*)arg3 = *(Vector3i*)(var0 + 0x70);
    *(Vector3i*)(var0 + 0x10) = var1;
    func_0202e694(arg0, (int*)&var2);
}
