#include <globaldefs.h>

void GetFields1014_022274e4(int *a, int *b);
extern "C" int func_ov031_02222ce4(void *obj);

// USA: func_ov031_02223568  (semantic: RunElemIfFields1014Is1_02223568)
extern "C" ARM int func_ov031_02223568(void *obj) {
    int b;
    GetFields1014_022274e4(0, &b);
    if (b != 1) return b;
    return func_ov031_02222ce4(obj);
}
