#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"


struct Struct020dfc40;
extern "C" void func_020dfc6c(struct Struct020dfc40*);


#if defined(jpn)
extern int data_020f2cb0;
#else
extern int data_020f2a1c;
#endif
#if defined(jpn)
extern int data_020f2c9c;
#else
extern int data_020f2a20;
#endif


// USA: func_ov023_021e0c38
extern "C" ARM int func_ov023_021e0c38(void* obj) {
#if defined(jpn)
 enum {regionalOffset0=0x6cc};
#else
 enum {regionalOffset0=0x750};
#endif
    int listPtr = (int)BackgroundLoader::GetInstance();
    func_020dfc6c((struct Struct020dfc40*)((char*)obj + 0xa4));
#if defined(jpn)
    *(int*)((char*)obj + regionalOffset0) = ((BackgroundLoader*)(listPtr))->QueueLoadFileInGP2((const char*)(data_020f2cb0), (const char*)(data_020f2c9c), (SafeAllocator*)(0));
#else
    *(int*)((char*)obj + regionalOffset0) = ((BackgroundLoader*)(listPtr))->QueueLoadFileInGP2((const char*)(data_020f2a1c), (const char*)(data_020f2a20), (SafeAllocator*)(0));
#endif

    return 0x3;
}
