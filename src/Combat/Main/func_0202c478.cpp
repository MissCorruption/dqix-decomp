#include <globaldefs.h>
#include "Combat/SearchEntry.h"

extern "C" ARM void func_020d8654(void);
extern "C" void func_020d8694(void);

struct Struct_0202ba08_2;
extern "C" ARM struct Struct_0202ba08_2* func_0202ba08(struct Struct_0202ba08_2* arg0, struct Struct_0202ba08_2* arg1);

// USA: func_0202c478
extern "C" ARM void func_0202c478(Struct_0202b2f0* arg0) {
    func_020d8654();
    char* var0 = (char*)arg0;
    int var1;
    for (var1 = 0; var1 < *(int*)(var0 + 0xc); var1++) {
        ((int*)(var0 + 0x790))[var1] -= 0x10;
        if (((int*)(var0 + 0x790))[var1] > 0) {
            continue;
        }
        int var2;
        for (var2 = var1; var2 < *(int*)(var0 + 0xc) - 1; var2++) {
            func_0202ba08((struct Struct_0202ba08_2*)(var0 + 0x10 + var2 * 0xc0),
                                (struct Struct_0202ba08_2*)(var0 + 0x10 + (var2 + 1) * 0xc0));
        }
        (*(int*)(var0 + 0xc))--;
    }
    func_020d8694();
}
