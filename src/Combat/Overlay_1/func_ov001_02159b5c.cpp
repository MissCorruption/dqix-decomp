#include <globaldefs.h>

struct Triple02159b94 { int c, d, e; };
struct S02159b5c { int pad; struct Triple02159b94 t; };
struct T02159b5c { char pad[0x70]; int field112; };

extern int data_ov001_02165884;
extern "C" int func_ov001_02159b94(int a, int b, struct Triple02159b94 t);

// USA: func_ov001_02159b5c
extern "C" ARM int func_ov001_02159b5c(struct S02159b5c* a, struct T02159b5c* b) {
    func_ov001_02159b94(data_ov001_02165884, b->field112, a->t);
    return 0;
}
