#include <globaldefs.h>
#include "World/Object3D.h"
#include "Combat/ObjectStateInitialization.h"
struct ObjectStatePrefix;

// USA: func_0203400c
ARM void ClearStateFlags0203400c(ObjectStatePrefix* arg0) {
    unsigned char* obj = (unsigned char*)arg0;
    arg0->object.DisableFlag(0x40000);
    obj[0xe0] &= ~0x2;
}
