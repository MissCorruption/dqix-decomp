#include <globaldefs.h>

struct SearchStruct0202c1a4;
extern "C" signed char func_0202c1a4(struct SearchStruct0202c1a4* obj);

struct SearchStruct;
extern "C" void func_0202c5bc(struct SearchStruct* obj, int value);

// USA: func_ov017_021cea64
extern "C" ARM void func_ov017_021cea64(int unused0, int* p, int unused2, int unused3, struct SearchStruct0202c1a4* extra) {
    int field = p[1];
    int val = func_0202c1a4(extra);
    if (field == val) return;
    func_0202c5bc((struct SearchStruct*)extra, field);
}
