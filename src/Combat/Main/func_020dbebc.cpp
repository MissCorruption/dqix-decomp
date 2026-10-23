#include <globaldefs.h>

struct Struct_020dbdc0;
struct Struct_020dbd9c;
struct Struct_020dbebc;

extern "C" void func_020dbf70(struct Struct_020dbdc0* arg0);
extern "C" void func_020dbd9c(struct Struct_020dbd9c* arg0);
extern "C" void func_020dbedc(struct Struct_020dbebc* arg0);

// USA: func_020dbebc
extern "C" ARM void func_020dbebc(void* arg0) {
    func_020dbf70((struct Struct_020dbdc0*)arg0);
    func_020dbedc((struct Struct_020dbebc*)arg0);
    func_020dbd9c((struct Struct_020dbd9c*)arg0);
}
