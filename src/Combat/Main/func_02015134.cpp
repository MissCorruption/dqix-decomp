#include "World/ZoneResourceInitialization.h"
#include "Filesystem/FileIO.h"
#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02015134_104 = 0x88 };
#else
enum { Enum_02015134_104 = 0x68 };
#endif

extern "C" void func_02014d18(int arg0, char* arg1, char* arg2);
void* GetFileFromNARCInMemory(const char* path);
extern "C" void func_0204bf30(void* arg0);
struct Struct_02015134_3;
struct Struct_02015134_4;
extern "C" void func_0204bf44(Struct_02015134_3*, void*, Struct_02015134_4*, unsigned int);

extern char data_020ef1ee;

// USA: func_02015134
extern "C" ARM int func_02015134(Zone3D* arg0, Struct_02012ff0* arg1, Struct_02014a24* arg2) {
    Struct_02015134* var0 = (Struct_02015134*)arg0;
    Struct_02015134_2* var1 = (Struct_02015134_2*)arg1;
    void* var2 = *(void**)((char*)var0 + Enum_02015134_104);
    char var3[0x50];
    unsigned int var4;
    func_02014d18(arg2->unknown_4_, &data_020ef1ee, var3);
    void* var5 = GetFileFromNARCInMemory(var3);
    if (var5) {
        var1->unknown_4_ = ((SafeAllocator*)var2)->Allocate(0x4c);
        if (var1->unknown_4_ == 0) return 0;
        void* var6 = DecompressLZ77FileIntoAllocatedSpace(*(SafeAllocator*)var2, var5, var4);
        if (var6 == 0) return 0;
        func_0204bf30(var1->unknown_4_);
        func_0204bf44((Struct_02015134_3*)var1->unknown_4_, var2, (Struct_02015134_4*)var6, var4);
    }
    var1->unknown_0_ = 1;
    return 1;
}
