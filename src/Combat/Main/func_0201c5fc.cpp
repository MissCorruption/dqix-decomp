#include <globaldefs.h>
#include "Resource/Script.h"

#if defined(jpn)
enum { Enum_0201c5fc_52 = 0x54, Enum_0201c5fc_56 = 0x58, Enum_0201c5fc_60 = 0x5c };
#else
enum { Enum_0201c5fc_52 = 0x34, Enum_0201c5fc_56 = 0x38, Enum_0201c5fc_60 = 0x3c };
#endif

#include "std_library_functions.h"

int fix32ReduceAngle0To2Pi(int v);

extern int data_020ef2bc;
extern int data_020fdc14;

// USA: func_0201c5fc
extern "C" ARM int func_0201c5fc(void* arg0) {
    const Script::Parameter* var0 = static_cast<const Script::Parameter*>(arg0);

    if (data_020ef2bc != var0[0].ToInt())
        return 1;

    var0[1].ToInt();
#if defined(jpn)
    const char* var1 = var0[2].ToString();
    strcpy(*(char**)((char*)&data_020fdc14 + 0x4) + 0x2a, var1);
#else
    var0[2].ToString();
#endif
    var0[3].ToInt();
    var0[4].ToString();
    var0[5].ToString();
    var0[6].ToInt();
    var0[7].ToString();
    var0[8].ToInt();
    var0[9].ToInt();
    var0[10].ToInt();

    const char* var2 = var0[11].ToString();
    if (var2 != NULL) {
        strcpy(*(char**)((char*)&data_020fdc14 + 0x4), var2);
    }

    var0[12].ToInt();

    *(unsigned short*)(*(char**)((char*)&data_020fdc14 + 0x4) + Enum_0201c5fc_52) =
        (unsigned short)fix32ReduceAngle0To2Pi((int)(4096.0f * var0[13].ToFloat()));

    *(int*)(*(char**)((char*)&data_020fdc14 + 0x4) + Enum_0201c5fc_56) =
        (int)(4096.0f * var0[14].ToFloat());

    *(int*)(*(char**)((char*)&data_020fdc14 + 0x4) + Enum_0201c5fc_60) =
        (int)(4096.0f * var0[15].ToFloat());

    return 1;
}
