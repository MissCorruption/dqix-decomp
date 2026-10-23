#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "std_library_functions.h"
#include "World/Zone3D.h"

#if defined(jpn)
#define data_020ef19f data_020ef0db
#define data_020ef1a9 data_020ef0e5
#define data_020ef1b3 data_020ef0ef
#define data_020ef1bd data_020ef0f9
#define data_020ef1c7 data_020ef103
#endif
extern char data_020ef19f;
extern char data_020ef1a9;
extern char data_020ef1b3;
extern char data_020ef1bd;
extern char data_020ef1c7;
extern char data_020ef116;

// USA: func_02014b04
extern "C" ARM void _ZN6Zone3D13func_02014b04Ev(void* arg0) {
    char* var0 = (char*)arg0;
#if defined(jpn)
    enum { Enum_02014b04_0 = 0x20 };
#else
    enum { Enum_02014b04_0 = 0 };
#endif

    if (*(unsigned char*)(var0 + 0x23b8 + Enum_02014b04_0) != 0) {
        ActiveGrottoClass* var1 = (ActiveGrottoClass*)(var0 + 0x23ec + Enum_02014b04_0);
        int var2 = var1->GetActiveGrottoEnviron();
        if (var2 == 0) var2 = 1;

        signed char var3 = *(signed char*)(var0 + 0x23ba + Enum_02014b04_0);
        if (var3 <= 0x4) {
            sprintf(var0 + 0xc, &data_020ef19f, var2);
        } else if (var3 <= 0x8) {
            sprintf(var0 + 0xc, &data_020ef1a9, var2);
        } else if (var3 <= 0xc) {
            sprintf(var0 + 0xc, &data_020ef1b3, var2);
        } else if (var3 <= 0x10) {
            sprintf(var0 + 0xc, &data_020ef1bd, var2);
        }
    }

    if (strlen(var0 + 0xc) == 0) {
        ((Zone3D*)arg0)->func_020145a8();
        return;
    }

    int var4 = (int)BackgroundLoader::GetInstance();
    signed char var5 = *(signed char*)(var0 + 0xc);
    char var6[0x28];
    sprintf(var6, &data_020ef1c7, &data_020ef116, var5);
    *(int*)(var0 + 0x440 + Enum_02014b04_0) = ((BackgroundLoader*)(var4))->QueueLoadFile((const char*)((int)var6), (SafeAllocator*)(0));
}
