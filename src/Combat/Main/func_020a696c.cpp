#include <globaldefs.h>
#if defined(jpn)
enum { Enum_020a696c_10118 = 0x27c6, Enum_020a696c_10124 = 0x27cc, Enum_020a696c_10128 = 0x27d0, Enum_020a696c_68 = 0x64, Enum_020a696c_72 = 0x68 };
#else
enum { Enum_020a696c_10118 = 0x2786, Enum_020a696c_10124 = 0x278c, Enum_020a696c_10128 = 0x2790, Enum_020a696c_68 = 0x44, Enum_020a696c_72 = 0x48 };
#endif
#include "GameState/GameState.h"

extern "C" void* func_02012fe4(GameState* arg0);
extern "C" void* func_0200fd0c(GameState* arg0);
extern "C" void func_020a6aa4(Vector3i* arg0, int arg1, int arg2, int arg3);

// USA: func_020a696c
extern "C" ARM void func_020a696c(void* arg0, int arg1, int arg2) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = func_02012fe4(var0);
    void* var2 = func_0200fd0c(var0);

    if (arg2 == 0x170c) {
        if ((arg1 >= 0x4e20 && arg1 <= 0x752f) || arg1 == 0x76c) {
            unsigned char* var3 = (unsigned char*)var2;
            if (var3[0x5] == 0 && var3[0x62] == 0) {
                unsigned short var4 = *(unsigned short*)((char*)var1 + Enum_020a696c_10118);
                *(unsigned short*)var2 = var4;
                switch (var4) {
                case 0:
                case 1:
                {
                    Vector3i var5;
                    int var6 = 0x170c;
                    *(unsigned short*)var2 = var6;
                    func_020a6aa4(&var5, -0x7000, var6 >> 3, 0x5e66);
                    *reinterpret_cast<Vector3i*>((char*)var2 + 0x10) = var5;
                    var3[0x7] = 1;
                    break;
                }
                default:
                    if (var4 != 0x76c) {
                        *(int*)((char*)var2 + 0x10) = 0x100000;
                        *(int*)((char*)var2 + 0x14) = 0;
                        *(int*)((char*)var2 + 0x18) = 0x100000;
                        var3[0x7] = 1;
                    }
                    break;
                }
            }
        }
    }

    if (arg1 == 0x2710 && arg2 >= 0x4e20 && arg2 <= 0x752f) {
        *(int*)((char*)var1 + Enum_020a696c_10124) = *(int*)((char*)var1 + Enum_020a696c_68);
        *(int*)((char*)var1 + Enum_020a696c_10128) = *(int*)((char*)var1 + Enum_020a696c_72);
    }
}
