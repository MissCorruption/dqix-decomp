#include <globaldefs.h>
#include "Resource/Brightness.h"

struct AxisFloats0203b5a0;
extern char data_02108760;
extern "C" void func_0205eb80(void* obj);
extern "C" void func_0205eb54(void* obj, int arg1, int arg2);
extern "C" void func_0205eb90(void* obj, int a, int b);
extern "C" void* func_0202ae18(void);
struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);
extern "C" void func_ov017_021d1874(unsigned char a, unsigned char b, unsigned char c, int d, int e, int f, int g);

struct Obj020a87d0 {
    unsigned char byte0;
    unsigned char byte1;
    unsigned char byte2;
    unsigned char byte3_pad;
    unsigned char field4;
    unsigned char field5;
};

// USA: func_020a87d0
extern "C" ARM void func_020a87d0(struct Obj020a87d0* obj) {
    if (obj->field4 == 1) return;
    obj->field4 = 1;

    struct AxisFloats0203b5a0* s = (struct AxisFloats0203b5a0*)GetGameResources();
    if (IsBrightnessWithinValidRange((GameResources*)s, false) != 0) {
        func_0205eb80(&data_02108760);
        func_0205eb54(&data_02108760, 0x72, 0x72);
        func_0205eb90(&data_02108760, 0, 0);
    }

    signed char idx = func_0202c1a4((struct SearchStruct0202c1a4*)func_0202ae18());
    obj->field5 |= (1 << idx);
    func_ov017_021d1874(obj->byte0, obj->byte1, obj->byte2, 1, idx & 0xff, 0, 0);
}
