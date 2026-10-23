#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void func_0204c684(void* arg0);
int AllocateVRAMStagingMemory(unsigned int);

#if defined(jpn)
enum { Enum_02044c74_2509 = 0x7fe, Enum_02044c74_8 = 12 };
#else
enum { Enum_02044c74_2509 = 0x9cd, Enum_02044c74_8 = 8 };
#endif

// USA: func_02044c74
extern "C" ARM void func_02044c74(void* arg0, void* arg1) {
    char* var0 = (char*)arg0;
    char* var1 = (char*)arg1;
    func_0204c684(arg1);
    void* var2 = (void*)AllocateVRAMStagingMemory(0x4800);
    if (var2) {
        unsigned char* var3 = (unsigned char*)(var0 + 0x1000);
        if (var3[Enum_02044c74_2509]) {
            var3[Enum_02044c74_2509] = 0;
            memset(var2, 0, 0x4800);
        }
        *(short*)(var1 + 0xac) = 0;
        *(short*)(var1 + 0xae) = 6;
        *(short*)(var1 + 0xa8) = 0x20;
        *(short*)(var1 + 0xaa) = 0x12;
        *(void**)(var1 + 0x8) = var2;
        *(int*)(var1 + 0xa4) = 0x4800;
        *(int*)(var1 + 0xa0) = 0;
        *(short*)(var1 + 0xc2) = 0;
        *(short*)(var1 + 0xb0) = 0;
        *(short*)(var1 + 0xb2) = 0;
        *(short*)(var1 + 0xb4) = Enum_02044c74_8;
        *(short*)(var1 + 0xb6) = Enum_02044c74_8;
        *(short*)(var1 + 0xb8) = Enum_02044c74_8;
        *(short*)(var1 + 0xba) = Enum_02044c74_8;
    }
}
