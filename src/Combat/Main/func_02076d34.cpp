#include <globaldefs.h>

extern "C" void func_02012fe4(void* obj);

struct Bytes02033b88;
extern "C" int func_02033b88(struct Bytes02033b88* p, int val);

struct Obj02076d34 {
    char pad[0xb2];
    unsigned short field0xb2;
};

// USA: func_02076d34
extern "C" ARM int func_02076d34(struct Obj02076d34* p) {
    func_02012fe4(p);
    p->field0xb2 = 0;
    func_02033b88((struct Bytes02033b88*)p, 5);
    return 1;
}
