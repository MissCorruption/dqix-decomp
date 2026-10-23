#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020d3c28_180 = 0xa0 };
#else
enum { Enum_020d3c28_180 = 0xb4 };
#endif

#include "Filesystem/BackgroundLoader.h"
#if defined(jpn)
#include "Filesystem/FileIO.h"
extern char data_020f244c[];
#endif
extern "C" void func_020d3c84(struct Struct_020d3c28*, struct Struct_02013fb4*, int);
#include "std_library_functions.h"

extern "C" void* ExtractFileFromGP2(const char* arg0, const char* arg1, unsigned int* arg2);

extern int data_020f22e0;
extern int data_020f22f4;

struct Struct_02061c04_12 {
    unsigned char unknown_0_[Enum_020d3c28_180];
    int unknown_b4_;
};

// USA: func_020d3c28
extern "C" ARM void func_020d3c28(struct Struct_02061c04_12* arg0) {
    int var0;
    int var1;
    memset(arg0, 0, Enum_020d3c28_180);
    arg0->unknown_b4_ = 0;
    BackgroundLoader::AddLockGlobal();
#if defined(jpn)
    var1 = (int)LoadFileIntoMemory(data_020f244c, data_0211e33c, (unsigned int*)&var0);
#else
    var1 = (int)ExtractFileFromGP2((const char*)&data_020f22e0, (const char*)&data_020f22f4, (unsigned int*)&var0);
#endif
    if (var1 != 0) {
        func_020d3c84((struct Struct_020d3c28*)(arg0), (struct Struct_02013fb4*)(var1), (int)(var0));
    }
    BackgroundLoader::RemoveLockGlobal();
}
