#include <globaldefs.h>
extern "C" void func_02028048(int, int, struct StreamHeader*, int);

struct Struct0202811c;
extern "C" void func_0202811c(struct Struct0202811c* s);

// USA: func_02028104
extern "C" ARM void func_02028104(struct Struct0202811c* s, int b, int c, int d) {
    func_02028048((int)(s), (int)(b), (struct StreamHeader*)(c), (int)(d));
    func_0202811c(s);
}
