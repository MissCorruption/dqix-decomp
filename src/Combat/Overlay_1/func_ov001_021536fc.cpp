#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_ov001_021536fc { int unknown_0_; char* unknown_4_; };
struct Struct_ov001_02165800_2 { int unknown_0_; void* unknown_4_; Struct_ov001_021536fc** unknown_8_; };
extern Struct_ov001_02165800_2 data_ov001_02165800;

// USA: func_ov001_021536fc
extern "C" ARM int func_ov001_021536fc(void* arg0) {
    int var0 = ((Script::Parameter*)arg0)->ToInt();
    Struct_ov001_021536fc* var1 = *data_ov001_02165800.unknown_8_;
    var1[data_ov001_02165800.unknown_0_].unknown_0_ = var0;

    char* var2 = (char*)(void*)((Script::Parameter*)((char*)arg0 + 8))->ToString();
    if (!var2) {
        return 0;
    }

    unsigned int var3 = strlen(var2);
    void* var4 = ((SafeAllocator*)data_ov001_02165800.unknown_4_)->Allocate(var3 + 1);
    (*data_ov001_02165800.unknown_8_)[data_ov001_02165800.unknown_0_].unknown_4_ = (char*)var4;
    if ((*data_ov001_02165800.unknown_8_)[data_ov001_02165800.unknown_0_].unknown_4_ == 0) {
        return 0;
    }

    strcpy((*data_ov001_02165800.unknown_8_)[data_ov001_02165800.unknown_0_].unknown_4_, var2);
    data_ov001_02165800.unknown_0_ += 1;
    return 1;
}
