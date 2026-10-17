#include <globaldefs.h>

// MSL_C ansi_fp.c __dec2num.
union decimal {
    struct {
        char sgn;
        char unused;
        short exp;
        unsigned char length;
        unsigned char text[32];
    };
    unsigned short halfwords[19];
};

extern "C" double func_02008da4(double x, double y);                           /* copysign */
extern "C" double func_020091d8(double x, int n);                              /* ldexp */
extern "C" double func_020095a4(double x, double y);                           /* pow */
extern "C" void func_020098fc(decimal* d, const char* str, short exp);         /* __str2dec */
extern "C" int func_02009d1c(const decimal* x, const decimal* y);              /* __equals_dec */
extern "C" int func_02009dfc(const decimal* x, const decimal* y);              /* __less_dec */
extern "C" void func_02009edc(decimal* z, const decimal* x, const decimal* y); /* __minus_dec */
extern "C" void func_0200a180(decimal* d, double x);                           /* __num2dec_internal */
extern "C" int func_0200aa74(double x);                                        /* __fpclassifyd */

extern float data_020eecc4;        // __float_huge
extern double data_020eef34[];     // pow_10: 1e1 .. 1e8
extern const char data_020ef048[]; // "179769313486231580793728714053034151"

// USA: func_0200a3a8
extern "C" ARM double func_0200a3a8(const decimal* d) {
    if (d->length <= 0) {
        return func_02008da4(0.0, d->sgn == 0 ? 1.0 : -1.0);
    }

    switch (d->text[0]) {
        case '0':
            return func_02008da4(0.0, d->sgn == 0 ? 1.0 : -1.0);
        case 'I':
            return func_02008da4(data_020eecc4, d->sgn == 0 ? 1.0 : -1.0);
        case 'N': {
            double result;
            unsigned long long* ll = (unsigned long long*)&result;

            *ll = 0x7FF0000000000000ULL;
            if (d->sgn) {
                *ll |= 0x8000000000000000ULL;
            }
            *ll |= 0x0008000000000000ULL;
            return result;
        }
    }

    {
        decimal dec = *d;
        unsigned char* i = dec.text;
        unsigned char* e = i + dec.length;
        double first_guess;
        int exponent;

        for (; i < e; ++i) {
            *i -= '0';
        }

        dec.exp += dec.length - 1;
        exponent = dec.exp;

        {
            decimal max;
            func_020098fc(&max, data_020ef048, 308);
            if (func_02009dfc(&max, &dec)) {
                return func_02008da4(data_020eecc4, d->sgn == 0 ? 1.0 : -1.0);
            }
        }

        i = dec.text;
        first_guess = *i++;

        while (i < e) {
            unsigned long ival = 0;
            int j;
            double temp1, temp2;
            int ndig = (e - i) % 8;

            if (ndig == 0) {
                ndig = 8;
            }

            for (j = 0; j < ndig; ++j, ++i) {
                ival = ival * 10 + *i;
            }

            temp1 = first_guess * data_020eef34[ndig - 1];
            temp2 = temp1 + ival;
            if (ival != 0 && temp1 == temp2) {
                break;
            }
            first_guess = temp2;
            exponent -= ndig;
        }

        if (exponent < 0) {
            first_guess /= func_020095a4(5.0, -exponent);
        } else {
            first_guess *= func_020095a4(5.0, exponent);
        }

        first_guess = func_020091d8(first_guess, exponent);

        if (func_0200aa74(first_guess) == 2) {
            first_guess = 1.7976931348623157e+308;
        }

        {
            decimal feedback1, feedback2, difflow, diffhigh;
            double next_guess;
            unsigned long long* ull = (unsigned long long*)&next_guess;
            int guessed_low = 0;

            func_0200a180(&feedback1, first_guess);

            if (func_02009d1c(&feedback1, &dec)) {
                goto done;
            }

            if (func_02009dfc(&feedback1, &dec)) {
                guessed_low = 1;
            }

            next_guess = first_guess;

            while (1) {
                if (guessed_low) {
                    ++*ull;
                    if (func_0200aa74(next_guess) == 2) {
                        goto done;
                    }
                } else {
                    --*ull;
                }

                func_0200a180(&feedback2, next_guess);

                if (guessed_low && !func_02009dfc(&feedback2, &dec)) {
                    break;
                } else if (!guessed_low && !func_02009dfc(&dec, &feedback2)) {
                    difflow = feedback1;
                    feedback1 = feedback2;
                    feedback2 = difflow;
                    {
                        double temp = first_guess;
                        first_guess = next_guess;
                        next_guess = temp;
                    }
                    break;
                }

                feedback1 = feedback2;
                first_guess = next_guess;
            }

            func_02009edc(&difflow, &dec, &feedback1);
            func_02009edc(&diffhigh, &feedback2, &dec);

            if (func_02009d1c(&difflow, &diffhigh)) {
                if (*(unsigned long long*)&first_guess & 1) {
                    first_guess = next_guess;
                }
            } else if (!func_02009dfc(&difflow, &diffhigh)) {
                first_guess = next_guess;
            }
        }

    done:
        if (dec.sgn) {
            first_guess = -first_guess;
        }

        return first_guess;
    }
}
