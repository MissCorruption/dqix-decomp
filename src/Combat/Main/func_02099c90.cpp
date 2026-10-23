#include <globaldefs.h>
#include "Resource/Script.h"

struct Struct_0201c1c8;

extern int data_02109a28;

// USA: func_02099c90
extern "C" ARM int func_02099c90(struct Struct_0201c1c8* arg0) {
    *(short*)((char*)&data_02109a28 + 0x28) = ((Script::Parameter*)arg0)->ToInt();
    return 1;
}
