#include <globaldefs.h>

struct PackedFields;
extern "C" int func_020de3ac(struct PackedFields* obj, int a, int unused, int b);

struct MatchPackedFields;
extern "C" int func_020de38c(struct MatchPackedFields* obj, int a, int b);

struct BitTriple020de3cc;
extern "C" int func_020de3cc(struct BitTriple020de3cc* obj, int a, int b, int c);

// USA: func_020de524
extern "C" ARM void func_020de524(int a, int b, void** out) {
    if (a == 999) {
        if (b == 999) {
            *out = 0;
        } else {
            *out = (void*)func_020de3ac;
        }
    } else {
        if (b == 999) {
            *out = (void*)func_020de38c;
        } else {
            *out = (void*)func_020de3cc;
        }
    }
}
