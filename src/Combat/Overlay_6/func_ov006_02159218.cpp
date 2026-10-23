#include <globaldefs.h>

struct LookupByOffset0x362_021591ecStruct;

extern "C" int func_ov006_0215919c(void* p);
extern "C" unsigned short func_ov006_021591ec(struct LookupByOffset0x362_021591ecStruct* p);

// USA: func_ov006_02159218
extern "C" ARM int func_ov006_02159218(struct LookupByOffset0x362_021591ecStruct* p) {
    short* arr = (short*)func_ov006_0215919c(p);
    unsigned short count = func_ov006_021591ec(p);
    int found = 0;
    if (arr != 0) {
        for (unsigned short i = 0; i < count; i++) {
            if (arr[i] > 0) {
                found = 1;
                break;
            }
        }
    }
    return found;
}
