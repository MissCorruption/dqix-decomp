#include <globaldefs.h>

struct Ctx0223bf48 { unsigned short field0; unsigned char field2; unsigned char field3; int field4[64]; };
extern "C" Ctx0223bf48* func_ov031_0223beb8(int n);

// USA: func_ov031_0223beec
ARM void FillSlotArrayField4_0223beec(int n, int base, int stride) {
    Ctx0223bf48* arr = func_ov031_0223beb8(n);
    for (int i = 0; i < n; i++) {
        arr->field4[i] = base;
        base += stride;
    }
    arr->field3 = n;
}
