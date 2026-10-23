#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" double _dflt(int);
extern "C" double _ddiv(double, double);
extern "C" int _dfix(double);

// USA: func_020323c4
extern "C" ARM int func_020323c4(int arg0, int arg1) {
    int var0 = rand();
    double var1 = arg1 + 1 - arg0;
    double var2 = _ddiv(_dflt(var0 - 1), 32767.0);
    return arg0 + _dfix(((var1) * (var2)));
}
