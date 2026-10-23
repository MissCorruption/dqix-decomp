#include <globaldefs.h>
#include "Graphics/itcm/VRAMStaging.h"

extern "C" void func_020c89c4(void);
extern "C" void func_020c89d4(void);

struct Struct_020c93bc;
extern "C" void func_020c93bc(struct Struct_020c93bc* arg0);

extern "C" void func_020c93d0(void*, int, int, void*, void*);
void SendStagedVRAMDataToVRAM(void*);

extern unsigned int g_stagingManagerInstance[];
extern int data_0214e5bc;

// USA: func_020dc034
extern "C" ARM void func_020dc034(void) {
    func_020c89c4();
    func_020c89d4();
    ((VRAMStagingManager*)g_stagingManagerInstance)->ZeroInitialize();
    func_020c93bc((struct Struct_020c93bc*)&data_0214e5bc);
    func_020c93d0(&data_0214e5bc, 0xc0, 0xf, (void*)SendStagedVRAMDataToVRAM, g_stagingManagerInstance);
}
