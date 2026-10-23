#include <globaldefs.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

struct Struct_0202e5d8 { unsigned int unknown_0_[12]; };
struct Struct_0202e5d8 RotationMatrixY(int angle);
extern "C" void func_020c51a4(int arg0);

// USA: func_02031234
extern "C" ARM void func_02031234(int arg0) {
    struct Struct_0202e5d8 var0;

    if (arg0 == 0) {
        return;
    }

    var0 = RotationMatrixY(arg0);
    func_020c51a4((int)&var0);
}
