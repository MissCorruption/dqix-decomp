#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "World/Zone3D.h"

struct Struct_02000c9c_19;
struct Struct_02013fb4;

extern "C" void func_0201c724(int arg0, void* arg1, Struct_02013fb4* arg2, int arg3);

// USA: func_02013fb4
extern "C" ARM int func_02013fb4(Zone3D* arg0) {
    Zone3D* var0 = arg0;
    if (var0->mapListLoadHandle_ < 0)
        return 1;

    BackgroundLoader* var1 = BackgroundLoader::GetInstance();
    if (!var1->GetTaskStatus(var0->mapListLoadHandle_))
        return 0;

    void* var2;
    unsigned int var3;
    var1->GetLoadedFileByID(var0->mapListLoadHandle_, &var2, &var3);
    func_0201c724(var0->currentZoneID_, &var0->substruct_c_,
                 static_cast<Struct_02013fb4*>(var2), var3);
    var1->RemoveTask(var0->mapListLoadHandle_);
    var0->mapListLoadHandle_ = -1;
    var0->func_0201403c();
    return 1;
}
