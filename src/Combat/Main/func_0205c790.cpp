#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif
#include "std_library_functions.h"

struct InitSubstruct0205c73cData;
extern "C" void func_0205c73c(struct InitSubstruct0205c73cData* p);
struct Struct_0205c53c;
extern "C" void func_0205c53c(struct Struct_0205c53c* s);
struct Foo02042fcc;
extern "C" void func_02042fcc(struct Foo02042fcc* p);

// USA: func_0205c790
extern "C" ARM void func_0205c790(char* obj) {
    func_0205c73c((struct InitSubstruct0205c73cData*)(obj + 0x4));
    func_0205c53c((struct Struct_0205c53c*)(obj + 0x1c));
    func_02042fcc((struct Foo02042fcc*)(obj + 0xb4));

    *(int*)(obj + 0xd0) = 0;
    *(int*)(obj + 0xd4) = 0x34;
    *(int*)(obj + 0xd8) = 0x10;
    *(int*)(obj + 0xdc) = 0;

    memset(obj + 0xe0, 0, 0x10);
    memset(obj + 0xf0, 0, 0x10);
    memset(obj + 0x100, 0, 0x10);
    memset(obj + 0x110, 0, 0x10);
    memset(obj + 0x120, 0, (IS_JPN ? 0x90 : 0x100));
    memset(obj + (IS_JPN ? 0x1b0 : 0x220), 0, 0x10);

    *(short*)(obj + (IS_JPN ? 0x1c0 : 0x230)) = 0;
    *(unsigned char*)(obj + (IS_JPN ? 0x1c2 : 0x232)) = 0;
    *(unsigned char*)(obj + (IS_JPN ? 0x1c3 : 0x233)) = 0;
    *(unsigned char*)(obj + (IS_JPN ? 0x1c4 : 0x234)) = 0;
}
