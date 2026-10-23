#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;
extern void* data_02108efc;

// USA: func_02089aa0
extern "C" ARM int func_02089aa0(struct Struct_0201c1c8* arg0) {
    *(short*)((char*)data_02108efc + 0x18) = ((Script::Parameter*)arg0)->ToInt();
    return 1;
}
