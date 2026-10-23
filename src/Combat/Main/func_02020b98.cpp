#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02020b98_2613 = 0x989 };
enum { Enum_02020b98_8 = 4 };
#else
enum { Enum_02020b98_2613 = 0xa35 };
enum { Enum_02020b98_8 = 8 };
#endif

#include "Filesystem/BackgroundLoader.h"
#include "std_library_functions.h"

extern "C" void* func_02012fe4(void);
extern int data_020ef460;
extern char data_020ef587;
extern char data_020ef58f;

// USA: func_02020b98
extern "C" ARM int func_02020b98(void* arg0) {
    char var0[0x20];
    int var1 = (int)BackgroundLoader::GetInstance();
    char* var2 = (char*)func_02012fe4();
    sprintf(var0, &data_020ef587, (void*)(var2 + 0x26));
    int var3 = ((BackgroundLoader*)(var1))->QueueLoadFileInGP2((const char*)(*(int*)((char*)&data_020ef460 + Enum_02020b98_8)), (const char*)((int)var0), (SafeAllocator*)(0));
    strcpy((char*)arg0 + Enum_02020b98_2613, var2 + 0x26);
    strcpy((char*)arg0 + 0x548, &data_020ef58f);
    return var3;
}
