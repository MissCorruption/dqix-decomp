#include <globaldefs.h>
#include "World/Object3D.h"
struct ObjectStatePrefix;

// USA: func_02033fec
ARM void SetBits0x40000AndFlag0x2_02033fec(ObjectStatePrefix* arg0) {
    unsigned char* obj = (unsigned char*)arg0;
    ((Object3D*)obj)->EnableFlag(0x40000);
    obj[0xe0] |= 0x2;
}
