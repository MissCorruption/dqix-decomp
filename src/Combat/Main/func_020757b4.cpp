#include <globaldefs.h>
#include "std_library_functions.h"

// USA: func_020757b4

extern char data_020f0dc2[];
extern char* data_020f0da0[];

extern "C" char* func_020d2f88(char* haystack, char* needle);
extern "C" int func_020d2ff0(const char* s);

char* StringReplaceLanguageTag(const char* src, char* dst, int language) {
    if (src == 0 || dst == 0) {
        return dst;
    }

    char* const tag = data_020f0dc2;
    strcpy(dst, src);
    char* at = func_020d2f88(dst, tag);
    char* code = data_020f0da0[language];
    int codeLength = func_020d2ff0(code);
    int shift = func_020d2ff0(code) - func_020d2ff0(tag);

    while (at != 0) {
        if (shift > 0) {
            memmove(at + shift, at, func_020d2ff0(at) + 1);
        } else if (shift < 0) {
            memmove(at, at - shift, shift + func_020d2ff0(at) + 1);
        }
        memmove(at, code, codeLength);
        at = func_020d2f88(dst, tag);
    }
    return dst;
}
