#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Combat/MapDisplay.h"

struct Struct_02026780;
extern "C" int func_02026780(Struct_02020554* arg0, void* arg1, unsigned int arg2);

extern const char data_020ef6d7[];

// USA: func_02026694
extern "C" ARM void func_02026694(Struct_02020554* arg0) {
    if (arg0->unknown_9b8_ == 0) return;

    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    if (arg0->unknown_9b9_ == 0) {
        var0->RemoveTask(arg0->unknown_a2c_);
        var0->AddFence();
        arg0->unknown_a2c_ = var0->QueueLoadFile(data_020ef6d7, NULL);
        arg0->unknown_9b9_++;
        return;
    }
    if (arg0->unknown_9b9_ != 1) return;
    if (var0->GetTaskStatus(arg0->unknown_a2c_) == 0) return;

    void* var1 = NULL;
    unsigned int var2 = 0;
    var0->GetLoadedFileByID(arg0->unknown_a2c_, &var1, &var2);
    if (func_02026780(arg0, var1, var2) == 0) {
        arg0->unknown_9ba_ = 1;
    } else {
        arg0->unknown_779_ = 1;
        arg0->unknown_9ba_ = 1;
    }
    var0->RemoveTask(arg0->unknown_a2c_);
    arg0->unknown_a2c_ = -1;
    arg0->unknown_9b8_ = 0;
    arg0->unknown_9b9_++;
}
