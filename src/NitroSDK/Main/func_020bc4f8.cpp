#include <globaldefs.h>

extern "C" int func_020d1e08(int a, int b, int c, int d);
extern "C" int func_020d1ebc(int a, int b, int c);
struct Obj020bc610;
extern "C" void func_020bc610(Obj020bc610* obj);
extern "C" int func_020d26ec(void);

struct Ptr4Target020bc4f8 { unsigned char pad[0x1c]; int field1c; };

struct Obj020bc4f8 {
    unsigned char pad00[4];
    Ptr4Target020bc4f8* field4;
    unsigned char pad08[0x24];
    unsigned char byte2c;
    unsigned char pad2d[2];
    unsigned char byte2f;
    int field30;
    unsigned char pad34[8];
    unsigned char byte3c;
};

// USA: func_020bc4f8
extern "C" ARM void func_020bc4f8(Obj020bc4f8* obj, int b, int c, int d) {
    Ptr4Target020bc4f8* p = obj->field4;
    func_020d1e08(obj->byte3c, b, c, d);
    if (p->field1c != 0) {
        func_020d1ebc(obj->byte3c, 0xffff, p->field1c);
    }
    func_020bc610((Obj020bc610*)obj);
    obj->field30 = func_020d26ec();
    obj->byte2f = 1;
    obj->byte2c = 1;
}
