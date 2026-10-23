#include <globaldefs.h>
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/GamecardBusOwnership.h"

struct Struct_ov031_0223b4d4 {
    void* unknown_0_;
    char unknown_4_[0x84];
    NitroHandle unknown_88_;
    unsigned short unknown_e4_;
};
extern "C" Struct_ov031_0223b4d4* data_ov031_02290d24;
namespace DuplicatePool {
    extern "C" Struct_ov031_0223b4d4* data_ov031_02290d24;
}
extern char data_ov031_0224c564[];
extern "C" unsigned int func_ov031_0223cf70(void**);

// USA: func_ov031_0223b4d4
extern "C" ARM void func_ov031_0223b4d4(void) {
    SetROMFilesystemRoot(data_ov031_0224c564);
    NitroHandle_ReleaseFileTables(&data_ov031_02290d24->unknown_88_);
    NitroHandle_Destroy(&data_ov031_02290d24->unknown_88_);
    NitroHandle_RemoveFromHandleList(&data_ov031_02290d24->unknown_88_);
    ReleaseLockOwnerID(data_ov031_02290d24->unknown_e4_);
    data_ov031_02290d24->unknown_e4_ = 0;
    func_ov031_0223cf70(&data_ov031_02290d24->unknown_0_);
    data_ov031_02290d24->unknown_0_ = NULL;
    func_ov031_0223cf70((void**)&DuplicatePool::data_ov031_02290d24);
}
