#include <globaldefs.h>
#include "Combat/SearchEntry.h"

extern "C" ARM void func_020d8654(void);
extern "C" void func_020d8694(void);

struct Record0202ba08;
extern "C" ARM struct Record0202ba08* func_0202ba08(struct Record0202ba08* dst, struct Record0202ba08* src);

// USA: func_0202c478
extern "C" ARM void func_0202c478(SearchStruct* obj) {
    func_020d8654();
    char* base = (char*)obj;
    int i;
    for (i = 0; i < *(int*)(base + 0xc); i++) {
        ((int*)(base + 0x790))[i] -= 0x10;
        if (((int*)(base + 0x790))[i] > 0) {
            continue;
        }
        int j;
        for (j = i; j < *(int*)(base + 0xc) - 1; j++) {
            func_0202ba08((struct Record0202ba08*)(base + 0x10 + j * 0xc0),
                                (struct Record0202ba08*)(base + 0x10 + (j + 1) * 0xc0));
        }
        (*(int*)(base + 0xc))--;
    }
    func_020d8694();
}
