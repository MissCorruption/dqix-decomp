#include <globaldefs.h>

struct Struct_0205faf4_3;
struct Struct_0205faf4_4;
extern "C" int func_0206e31c(int, int);
extern "C" int func_0206e120(Struct_0205faf4_3*, int);
extern "C" int func_0206e260(Struct_0205faf4_4*, int);

// USA: func_0206474c
extern "C" ARM int func_0206474c(Struct_0205faf4_3* arg0, int arg1, int arg2) {
    if (!func_0206e31c((int)arg0, arg1)) return 0;
    switch (arg2) {
    case -1: return func_0206e120(arg0, arg1) == 0;
    case 0: return func_0206e120(arg0, arg1) == 2;
    case 1: return func_0206e260((Struct_0205faf4_4*)arg0, arg1);
    case 2: return func_0206e120(arg0, arg1) == 3;
    case 3: return func_0206e120(arg0, arg1) == 1;
    case 5: return func_0206e120(arg0, arg1) == 0;
    default: return 0;
    }
}
