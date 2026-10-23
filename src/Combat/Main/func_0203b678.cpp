#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int LoadToSubBG0CharacterData(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubBG1CharacterData(int arg0, int arg1, unsigned int arg2);
extern int data_021065d8;
extern int data_02105fd8;

// USA: func_0203b678
extern "C" ARM void func_0203b678(int* arg0, int arg1, int arg2) {
    char var0[0x20];
    arg0[arg1] = 0x20;
    *(int*)((char*)&arg0[arg1] + 0x20) = 1;
    memset(var0, 0, sizeof(var0));
    if (arg1 == 1) {
        switch (arg2) {
        case 0:
            memset(&data_021065d8, 0, 0x1000);
            LoadToSubBG0CharacterData((int)var0, 0, 0x20);
            break;
        case 1:
            memset(&data_02105fd8, 0, 0x600);
            LoadToSubBG1CharacterData((int)var0, 0, 0x20);
            break;
        }
    }
}
