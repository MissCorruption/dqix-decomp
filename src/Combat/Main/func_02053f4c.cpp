#include <globaldefs.h>
struct CombatantRecovery;

struct S02053f4c {
#if defined(jpn)
    char unk[0x19c];
#else
    char unk[0x1a8];
#endif
    int field1a8;
    int field1ac;
};

// USA: func_02053f4c
extern "C" ARM void func_02053f4c(CombatantRecovery* arg0, int val1, int val2) {
    struct S02053f4c* obj = (struct S02053f4c*)arg0;
    obj->field1a8 = val1;
    obj->field1ac = val2;
}
