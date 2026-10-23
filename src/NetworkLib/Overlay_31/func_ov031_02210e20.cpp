#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"

extern void* data_ov031_0224e588;

extern "C" void func_ov031_0221038c(int arg0);
void UnblockContexts(struct BlockedContextList* list);
extern "C" void func_ov031_022103dc(void* arg0);
extern "C" int func_ov031_022104e4(void* arg0);

// USA: func_ov031_02210e20
extern "C" ARM void func_ov031_02210e20(void) {
    char var0[0x414];

    func_ov031_0221038c(0);
    UnblockContexts((struct BlockedContextList*)((char*)data_ov031_0224e588 + 0x204 + 0x800));

    int var1 = *(volatile int*)((char*)data_ov031_0224e588 + 0x1b8);
    int var2 = *(volatile int*)data_ov031_0224e588;
    (void)var1;
    if (var2 != 7) return;

Loop:
    if (*(int*)((char*)data_ov031_0224e588 + 4) == 2) {
        func_ov031_022103dc((void*)5);
        return;
    }
    {
        unsigned int var3 = (unsigned int)func_ov031_022104e4(var0);
        void (*var4)(int, void*) = *(void(**)(int, void*))((char*)data_ov031_0224e588 + 0xa0c);
        if (var4 != NULL) {
            var4(var3, var0);
        }
        if (var3 < 4 || (int)var3 != *(int*)var0) {
            func_ov031_022103dc((void*)5);
            return;
        }
    }
    if (*(int*)data_ov031_0224e588 == 7) goto Loop;
}
