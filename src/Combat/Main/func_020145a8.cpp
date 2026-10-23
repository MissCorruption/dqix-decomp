#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Grotto/Main/ActiveGrottoClass.h"
#include "World/Zone3D.h"
#include "std_library_functions.h"

extern "C" int func_0201b5b0(int arg0);
extern "C" int func_0201b5d8(int arg0);

#if defined(jpn)
#define data_020ef156 data_020ef092
#define data_020ef166 data_020ef0a2
#define data_020ef176 data_020ef0b2
#define data_020ef182 data_020ef0be
#endif

extern char data_020ef116[];
extern char data_020ef156[];
extern char data_020ef166[];
extern char data_020ef176[];
extern char data_020ef182[];
extern char data_020ef18e[];

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020145a8
void Zone3D::func_020145a8() {
    BackgroundLoader* var0 = BackgroundLoader::GetInstance();
    char var1[0x14];

    if (func_0201b5b0(currentZoneID_)) {
        int var2 = grotto_.GetActiveGrottoEnviron();
        if (var2 == 0) var2 = 1;
        if (var2 > 5) var2 = 5;
        sprintf(var1, data_020ef156, data_020ef116, var2);
    } else if (func_0201b5d8(currentZoneID_)) {
        int var3 = grotto_.GetActiveGrottoEnviron();
        sprintf(var1, data_020ef166, data_020ef116, var3);
    } else if (currentZoneID_ == 10000 || currentZoneID_ == 10100) {
        if (unknown_42c_ == 0) {
            sprintf(var1, data_020ef176, data_020ef116, pUnknownStruct_8_->mapShortName_);
            unknown_42c_++;
        } else if (unknown_42c_ == 1) {
            sprintf(var1, data_020ef182, data_020ef116, pUnknownStruct_8_->mapShortName_);
            unknown_42c_++;
        }
    } else {
        sprintf(var1, data_020ef18e, data_020ef116, pUnknownStruct_8_->mapShortName_);
    }

    mapAMDJLoadHandle_ = var0->QueueLoadFile(var1, NULL);
}
