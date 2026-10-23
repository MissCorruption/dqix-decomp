#include <globaldefs.h>
#include "World/Object3D.h"

struct Struct_02072adc;
struct Object3D;

// USA: func_02072adc
extern "C" ARM void func_02072adc(struct Struct_02072adc* arg0, struct Struct_02072adc* arg1) {
    ((Object3D*)arg0)->ShallowCloneModelAndAnimationsTo((Object3D*)arg1);
    *(short*)((char*)arg1 + 0x178) = *(int*)((char*)arg0 + 0xac);
}
