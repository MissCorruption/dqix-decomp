#include <globaldefs.h>

struct Obj020dbf70;
struct Struct020dbd9c;
struct BattleTask020dbedc;

extern "C" void func_020dbf70(struct Obj020dbf70* o);
extern "C" void func_020dbd9c(struct Struct020dbd9c* p);
extern "C" void func_020dbedc(struct BattleTask020dbedc* a);

// USA: func_020dbebc
extern "C" ARM void func_020dbebc(void* a) {
    func_020dbf70((struct Obj020dbf70*)a);
    func_020dbedc((struct BattleTask020dbedc*)a);
    func_020dbd9c((struct Struct020dbd9c*)a);
}
