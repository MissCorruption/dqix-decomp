#include <globaldefs.h>
#include "std_library_functions.h"
#include "NitroSDK/Matrix.h"

struct Struct_0202ecfc;
extern "C" void func_0202ecfc(struct Struct_0202ecfc* arg0);
extern "C" void func_0202e874(unsigned char* arg0, unsigned short arg1);
struct Struct_0202df68;
extern "C" void func_0202e9a4(struct Struct_0202df68* arg0, int arg1);
extern "C" void func_0202e948(unsigned char* arg0);
struct Struct_0202e95c_2;
extern "C" void func_0202e98c(struct Struct_0202e95c_2* arg0);
extern "C" void* func_0202ee84(char* arg0);
extern "C" void* func_0202ee94(void* arg0);
extern "C" void* func_0202eea4(void* arg0);

// USA: func_ov000_0216d370
extern "C" ARM void func_ov000_0216d370(char* arg0, int arg1, int arg2, int arg3) {
    *(unsigned char*)(arg0 + 0x220) = 0;
    if (*(int*)(arg0 + 0x224) >= 0) {
        Vector3i var0 = *(Vector3i*)(arg0 + 0x12c);
        Vector3i var1 = *(Vector3i*)(arg0 + 0x120);
        *(Vector3i*)(arg0 + 0x10) = var0;
        *(Vector3i*)(arg0 + 0x4) = var1;
    }

    *(int*)(arg0 + 0x224) = -1;
    *(int*)(arg0 + 0x238) = 0;
    *(int*)(arg0 + 0x23c) = 0;
    func_0202ecfc((struct Struct_0202ecfc*)arg0);
    *(unsigned char*)(arg0 + 0x260) = 0;

    if (arg1) {
        func_0202e874((unsigned char*)arg0, 0);
    }

    if (arg2) {
        func_0202e9a4((struct Struct_0202df68*)arg0, 0xf000);
    }

    if (arg3) {
        func_0202e948((unsigned char*)arg0);
        func_0202e98c((struct Struct_0202e95c_2*)arg0);
    }

    memset(arg0 + 0x264, 0, 0x14);
    func_0202ee84(arg0);
    func_0202ee94(arg0);
    func_0202eea4(arg0);
}
