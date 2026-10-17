#include <globaldefs.h>

typedef struct decimal {
    char sgn;
    char unused;
    short exp;
    struct {
        unsigned char length;
        unsigned char text[32];
        unsigned char unused;
    } sig;
} decimal;

typedef struct decform {
    char style;
    char unused;
    short digits;
} decform;

extern "C" void func_0200a180(decimal* d, double x);
extern "C" void func_0200966c(decimal* d, int digits);

// USA: func_0200a300
extern "C" ARM void func_0200a300(const decform* f, double x, decimal* d) {
    short digits = f->digits;
    int i;

    func_0200a180(d, x);

    if (d->sig.text[0] > 9)
        return;

    if (digits > 32)
        digits = 32;

    func_0200966c(d, digits);

    while (d->sig.length < digits)
        d->sig.text[d->sig.length++] = 0;

    d->exp -= d->sig.length - 1;

    for (i = 0; i < d->sig.length; i++)
        d->sig.text[i] += '0';
}
