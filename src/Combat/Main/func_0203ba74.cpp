#include <globaldefs.h>

extern "C" void LoadToSubBG0ScreenData(int data, int offset, unsigned int length);
extern "C" void LoadToSubBG1ScreenData(int data, int offset, unsigned int length);

extern char data_02105fd8[] __attribute__((aligned(4)));
extern char data_021065d8[];

// USA: func_0203ba74
extern "C" ARM void func_0203ba74(void* arg0) {
    char* var0 = (char*)arg0;
    for (int var1 = 0; var1 < 2; var1++) {
        for (int var2 = 0; var2 < 4; var2++) {
            unsigned char var3 = 0;
            var3 = var3 + 0;
            int* var4 = (int*)(var0 + (var2 + var1 * 4) * 4 + 0x40);
            if (*var4 != 0) {
                *var4 = var3;
                if (var1 == 1) {
                    switch (var2) {
                    case 0: LoadToSubBG0ScreenData((int)data_021065d8, var3, 0x1000); break;
                    case 1: LoadToSubBG1ScreenData((int)data_02105fd8, var3, 0x600); break;
                    }
                }
            }
        }
    }
}
