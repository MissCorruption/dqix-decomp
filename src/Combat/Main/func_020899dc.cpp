#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
extern void* data_02108efc;

// USA: func_020899dc
extern "C" ARM int func_020899dc(struct Struct_0201c1c8* arg0) {
    *(short*)((char*)data_02108efc + 0x10) = ((Script::Parameter*)arg0)->ToInt();
    return 1;
}
