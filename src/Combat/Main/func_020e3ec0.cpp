#include <globaldefs.h>

struct CombatState020e3c34;
extern "C" void func_020e3c34(CombatState020e3c34* p);

struct Struct020e3ec0 {
    unsigned char byte0;
    unsigned char byte1;
};

// USA: func_020e3ec0
extern "C" ARM void func_020e3ec0(Struct020e3ec0* p) {
    func_020e3c34((CombatState020e3c34*)p);
    p->byte1 = 1;
}
