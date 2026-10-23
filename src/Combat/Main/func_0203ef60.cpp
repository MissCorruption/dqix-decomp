#include <globaldefs.h>
extern "C" void func_0203cf58(struct Struct_0203cf58*);

struct Struct_020401e4;
extern "C" ARM void func_020401e4(struct Struct_020401e4* arg0);

// USA: func_0203ef60
extern "C" ARM struct Struct_020401e4* func_0203ef60(struct Struct_020401e4* arg0) {
    func_020401e4(arg0);
    func_0203cf58((struct Struct_0203cf58*)(arg0));
    return arg0;
}
