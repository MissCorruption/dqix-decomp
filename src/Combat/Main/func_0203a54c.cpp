#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"

struct Container0203a54c {
    struct Foo02048004 arrayA[5];
    struct Foo02048004 arrayB[5];
};

extern "C" void func_02047230(struct Foo02048004* obj);

// USA: func_0203a54c
extern "C" ARM void func_0203a54c(struct Container0203a54c* c) {
    int i;
    for (i = 0; i < 5; i++) {
        func_02047230(&c->arrayA[i]);
        func_02047230(&c->arrayB[i]);
    }
}
