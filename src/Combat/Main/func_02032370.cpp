#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" double _dflt(int);
extern "C" double _ddiv(double, double);
extern "C" int _dfix(double);

// USA: func_02032370
extern "C" ARM int func_02032370(int arg0) {
    int var0 = rand();
    double var1 = _dflt(arg0);
    double var2 = _ddiv(_dflt(var0 - 1), 32767.0);
    return _dfix(((var1) * (var2)));
}
