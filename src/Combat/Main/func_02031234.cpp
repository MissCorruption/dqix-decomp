#include <globaldefs.h>

#if defined(jpn)
#define func_020c51a4 func_020c6c70
#endif

struct Mtx43_02030d84 { unsigned int v[12]; };
struct Mtx43_02030d84 RotationMatrixY(int angle);
extern "C" void func_020c51a4(int cmd);

// USA: func_02031234
extern "C" ARM void func_02031234(int angle) {
    struct Mtx43_02030d84 mtx;

    if (angle == 0) {
        return;
    }

    mtx = RotationMatrixY(angle);
    func_020c51a4((int)&mtx);
}
