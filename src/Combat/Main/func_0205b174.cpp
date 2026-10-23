#include <globaldefs.h>
#include "Graphics/SpriteAffineTransform.h"
struct Struct_0205ac40;

// USA: func_0205b174
extern "C" ARM int func_0205b174(Struct_0205ac40* arg0, Struct_0205ac40_2* arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return ((unsigned int)arg1->unknown_4_->unknown_0_ >> 10) & 3;
}
