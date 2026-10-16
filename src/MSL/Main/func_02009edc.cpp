#include <globaldefs.h>

union Decimal02009edc {
    struct {
        char sign;
        char unused;
        short exp;
        unsigned char length;
        unsigned char text[32];
    };
    unsigned short halfwords[19];
};

// USA: func_02009edc
extern "C" ARM void func_02009edc(Decimal02009edc* z, const Decimal02009edc* x, const Decimal02009edc* y) {
    int zlen, dexp;
    unsigned char *ib, *i, *ie;
    const unsigned char *jb, *j, *jn;
    *z = *x;
    if (y->text[0] == 0) return;
    zlen = z->length;
    if (zlen < y->length) zlen = y->length;
    dexp = z->exp - y->exp;
    zlen += dexp;
    if (zlen > 32) zlen = 32;
    while (z->length < zlen) z->text[z->length++] = 0;
    ib = z->text;
    i = ib + zlen;
    if (y->length + dexp < zlen) i = ib + (y->length + dexp);
    jb = y->text;
    j = jb + (i - ib - dexp);
    jn = j;
    while (i > ib && j > jb) {
        --i;
        --j;
        if (*i < *j) {
            unsigned char* k = i - 1;
            while (*k == 0) --k;
            while (k != i) {
                --*k;
                *++k += 10;
            }
        }
        *i -= *j;
    }
    if (jn - jb < y->length) {
        int round_down = 0;
        if (*jn < 5) {
            round_down = 1;
        } else if (*jn == 5) {
            const unsigned char* je = y->text + y->length;
            for (j = jn + 1; j < je; ++j) {
                if (*j != 0) goto done;
            }
            i = ib + (jn - jb) + dexp - 1;
            if (*i & 1) round_down = 1;
        }
        if (round_down) {
            if (*i < 1) {
                unsigned char* k = i - 1;
                while (*k == 0) --k;
                while (k != i) {
                    --*k;
                    *++k += 10;
                }
            }
            --*i;
        }
    }
done:
    for (i = ib; *i == 0; ++i) {
    }
    if (i > ib) {
        unsigned char dl = (unsigned char)(i - ib);
        z->exp -= dl;
        ie = ib + z->length;
        for (; i < ie; ++i, ++ib) *ib = *i;
        z->length -= dl;
    }
    ib = z->text;
    for (i = ib + z->length; i > ib;) {
        --i;
        if (*i != 0) break;
    }
    z->length = (unsigned char)(i - ib + 1);
}
