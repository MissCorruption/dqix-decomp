#include <globaldefs.h>

extern "C" void func_020464a4(char* src, char* dst, int size);

#if defined(jpn)
enum { STRING_FIELD_OFFSET = 0x27c };
#else
enum { STRING_FIELD_OFFSET = 0x3ac };
#endif

// USA: func_02046504
extern "C" ARM void func_02046504(char* base, char* src) {
    func_020464a4(src, base + STRING_FIELD_OFFSET, 0x40);
}
