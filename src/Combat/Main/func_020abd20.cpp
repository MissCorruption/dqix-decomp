#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Filesystem/BackgroundLoader.h"
#include "NitroSDK/Matrix.h"
#include "Resource/GameResources.h"

#if defined(jpn)
#define func_0205ec34 func_0205ff20
#endif

extern char data_0211e33c[];

extern "C" void* func_02012fe4();
extern "C" int func_020aaf84(void* arg0, int arg1, int arg2, int arg3);
extern "C" void* func_0205ec34();
extern "C" void func_020a9a50(void* arg0, char* arg1, int arg2);
extern "C" void func_020a9ba4(void* arg0);
extern "C" void func_020a9af8(unsigned char* arg0);
extern "C" void func_020a9b2c(void* arg0);
extern "C" void func_020116c8(void* arg0);
extern "C" void* func_020120a0(char* arg0, unsigned int arg1);

struct Struct_02011544;
extern "C" void func_02011544(struct Struct_02011544* arg0);

// USA: func_020abd20
extern "C" ARM int func_020abd20() {
    GameState* var0 = GameState::GetInstance();
    GetGameResources();
    unsigned char* var1 = (unsigned char*)func_02012fe4();
    var0->unknown_5cc8_ = 0;
    char var2[8];
    if (func_020aaf84(var2, 0, 0, 1) == 0) {
        func_02011544((struct Struct_02011544*)var0);
        return 0;
    }
    {
        BackgroundLoader::AddLockGlobal();
        BackgroundLoader::FreeAllocationsGlobal();
        unsigned char* var3 = (unsigned char*)&data_0211e33c[0] + 0x28000;
        func_020a9a50(var3 + 0x2cac, (char*)func_0205ec34(), 1);
        memcpy(((unsigned char*)GameState::GetInstance()) + 0x5e6c, var3 + 0x6c3c, 0x110);
        func_020a9ba4(var3 + 0x5a04);
        func_020a9af8(var3 + 0x33c0);
        func_020a9b2c(var3 + 0x3ec4);
        unsigned char* var4 = var3 + 4;
        *(unsigned short*)((var1 + 0x2700) + 0x86) = *(unsigned short*)(var4 + 0x2c5c);
        *(unsigned short*)((var1 + 0x2700) + 0x84) = *(short*)(var4 + 0x2c5e);
        ((Vector3i*)(var1 + 0x2774))->operator=(*((const Vector3i*)(var4 + 0x2c60)));
        *(unsigned int*)(var1 + 0x2780) = *(unsigned int*)(var4 + 0x2c6c);
        *(unsigned char*)(var1 + 0x2788) = *(unsigned char*)(var4 + 0x2c74);
        *(unsigned int*)(var1 + 0x2794) = *(unsigned int*)(var4 + 0x2c70);
        *(unsigned short*)((var1 + 0x2700) + 0xb4) = *(unsigned char*)(var4 + 0x2c75);
        *(unsigned short*)((var1 + 0x2700) + 0xb6) = *(unsigned char*)(var4 + 0x2c76);
        unsigned char* var5 = var1 + 0x1840;
        *(unsigned int*)(var5 + 0xb48) = *(unsigned int*)(var4 + 0x2c80);
        *(unsigned int*)(var5 + 0xb4c) = *(unsigned int*)(var4 + 0x2c84);
        func_020116c8(var0);
        memcpy(func_020120a0((char*)var0, 0), var3 + 0x2c54, 8);
        BackgroundLoader::RemoveLockGlobal();
        return 1;
    }
}
