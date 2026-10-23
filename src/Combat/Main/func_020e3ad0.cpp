#include <globaldefs.h>

struct TagValueEntry020e385c {
    unsigned int val;
    unsigned char tag;
    unsigned char b5;
    unsigned char b6;
    unsigned char b7;
};

extern "C" struct TagValueEntry020e385c* func_020e385c(struct TagValueEntry020e385c* entries, int tag, int val);

// USA: func_020e3ad0
extern "C" ARM int func_020e3ad0(struct TagValueEntry020e385c* entries, int tag, int val) {
    struct TagValueEntry020e385c* e = func_020e385c(entries, tag, val);
    if (e == NULL) {
        return 1;
    }
    if (e->b5 != 0) {
        if (e->b5 == e->b6) {
            return 1;
        }
    }
    return 0;
}
