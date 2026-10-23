#include <globaldefs.h>
#include "Resource/FontBankLoader.h"
#include "Resource/FontGlyphTable.h"

// USA: func_02042a50
extern "C" ARM char* func_02042a50(int arg0, const char* arg1) {
    if (arg1 == NULL) return NULL;
    char* var0 = func_020429e4(func_020429bc(arg0),
        reinterpret_cast<const unsigned char*>(arg1));
    if (var0 != NULL) return var0;
    return func_020429e4(
        static_cast<Struct_0203bebc*>(func_02094b44(func_02094a00(), arg0)),
        reinterpret_cast<const unsigned char*>(arg1));
}
