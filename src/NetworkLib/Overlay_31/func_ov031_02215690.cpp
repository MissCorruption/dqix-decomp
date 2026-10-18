#include <globaldefs.h>

ARM unsigned int NormalizeIndex_022135ac(unsigned int x);
ARM unsigned int LoadBigEndian32AsLittle_022155e8(unsigned char* p);
ARM int StoreSwappedPair_02207538(unsigned int* a, unsigned int* b);

// USA: func_ov031_02215690
extern "C" ARM void func_ov031_02215690(unsigned char* obj) {
    if (obj[0xd0d] < 6) {
        obj += NormalizeIndex_022135ac(obj[0xd0d]) << 8;
    } else {
        return;
    }
    unsigned char flag = obj[0xc0];
    int sum = obj[0xc8] + obj[0xc9] + obj[0xca] + obj[0xcb];
    if (flag != 0) {
        return;
    }
    if (sum == 0) {
        return;
    }
    unsigned int a = LoadBigEndian32AsLittle_022155e8(obj + 0xc8);
    unsigned int b = LoadBigEndian32AsLittle_022155e8(obj + 0xcc);
    StoreSwappedPair_02207538(&a, &b);
}
