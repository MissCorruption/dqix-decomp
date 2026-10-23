#include <globaldefs.h>

extern "C" void func_0203cea4(unsigned int* arg0);
struct Struct_02040bcc;
extern "C" void func_02041538(struct Struct_02040bcc*);

// USA: func_02040bcc
extern "C" ARM void func_02040bcc(char* arg0) {
    void* var0 = *(void**)(arg0 + 0x14);
    if (var0 != NULL) {
        func_0203cea4((unsigned int*)var0);
        return;
    }
    void* var1 = *(void**)(arg0 + 0x18);
    if (var1 == NULL) return;
    func_02041538((struct Struct_02040bcc*)var1);
}
