#include <globaldefs.h>
#include "Graphics/GlyphBitmapContext.h"
#include "std_library_functions.h"

// USA: func_02029060
extern "C" ARM void func_02029060() {
    if (glyphBitmapContext.unknown_0_ == NULL) return;
    memset(glyphBitmapContext.unknown_0_, 0, 256 * 192 / 2);
}
