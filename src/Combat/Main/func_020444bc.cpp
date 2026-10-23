#include <globaldefs.h>

#if defined(jpn)
enum { regionalField78 = 0x44, regionalField9a0 = 0x870 };
#else
enum { regionalField78 = 0x78, regionalField9a0 = 0x9a0 };
#endif

struct Struct020444bc {
    char pad0[regionalField78];
    int field78;
    char pad7c[regionalField9a0 - regionalField78 - 4];
    int field9a0;
};

// USA: func_020444bc
extern "C" ARM void func_020444bc(struct Struct020444bc* s) {
    s->field9a0 = 5;
    s->field78 = s->field78 + 1;
}
