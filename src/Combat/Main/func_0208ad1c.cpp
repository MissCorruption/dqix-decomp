#include <globaldefs.h>
extern "C" void func_02070950(struct Struct_02070950_2*, struct Struct_02070950*, int, int, int);

extern "C" void* func_020704fc(void*);

struct Struct_02108760;
extern "C" void func_0205eaa0(struct Struct_02108760* arg0, int arg1, int arg2);
extern struct Struct_02108760 data_02108760;

// USA: func_0208ad1c
extern "C" ARM void func_0208ad1c(void* arg0) {
    void* var0 = func_020704fc(arg0);
    if (var0 != NULL) {
        func_02070950((struct Struct_02070950_2*)var0, (struct Struct_02070950*)((char*)arg0 + 0xc), 0x14, 5, 0xf);
        func_0205eaa0(&data_02108760, 0x78, 0);
    }
}
