#include <globaldefs.h>

union Decimal02009edc {
    struct {
        unsigned short flags;
        short exponent;
        unsigned char length;
        unsigned char digits[32];
        unsigned char field_25;
    };
    unsigned short halfwords[19];
};

struct DecimalCursors02009edc {
    unsigned char* beginning;
    const unsigned char* rounding;
    const unsigned char* otherBeginning;
    unsigned char* current;
    const unsigned char* other;
    unsigned char* subtractBorrow;
};

// USA: func_02009edc
extern "C" ARM void func_02009edc(Decimal02009edc* result, const Decimal02009edc* first, const Decimal02009edc* second) {
    int roundDown;
    unsigned char* normalEnd;
    DecimalCursors02009edc cursors;
    const unsigned short* source = first->halfwords;
    int pairs = 9;
    unsigned short* dest = result->halfwords;
    do {
        unsigned short a = source[0];
        unsigned short b = source[1];
        source += 2;
        pairs--;
        dest[0] = a;
        dest[1] = b;
        dest += 2;
    } while (pairs != 0);
    *dest = *source;
    if (second->digits[0] == 0) return;
    int length = result->length;
    int common = length;
    if (common < second->length) common = second->length;
    int difference = result->exponent - second->exponent;
    common += difference;
    if (common > 32) common = 32;
    if (length < common) {
        do {
            result->digits[result->length++] = 0;
            length = result->length;
        } while (length < common);
    }
    cursors.beginning = result->digits;
    cursors.current = cursors.beginning + common;
    int secondEnd = second->length + difference;
    if (secondEnd < common) cursors.current = cursors.beginning + secondEnd;
    cursors.otherBeginning = second->digits;
    cursors.other = cursors.otherBeginning + (cursors.current - cursors.beginning - difference);
    cursors.rounding = cursors.other;
    while (cursors.current > cursors.beginning && cursors.other > cursors.otherBeginning) {
        cursors.current--;
        cursors.other--;
        if (*cursors.current < *cursors.other) {
            cursors.subtractBorrow = cursors.current - 1;
            if (*cursors.subtractBorrow == 0) do { --cursors.subtractBorrow; } while (*cursors.subtractBorrow == 0);
            if (cursors.subtractBorrow != cursors.current) {
                do {
                    (*cursors.subtractBorrow)--;
                    cursors.subtractBorrow++;
                    (*cursors.subtractBorrow) += 10;
                } while (cursors.subtractBorrow != cursors.current);
            }
        }
        *cursors.current -= *cursors.other;
    }
    int remainder = cursors.rounding - cursors.otherBeginning;
    if (remainder < second->length) {
        roundDown = 0;
        if (*cursors.rounding < 5) roundDown = 1;
        else if (*cursors.rounding == 5) {
            const unsigned char* roundEnd = second->digits + second->length;
            cursors.rounding++;
            if (cursors.rounding < roundEnd) do {
                if (*cursors.rounding) goto normalize;
                cursors.rounding++;
            } while (cursors.rounding < roundEnd);
            cursors.current = cursors.beginning + remainder + difference - 1;
            if (*cursors.current & 1) roundDown = 1;
        }
        if (roundDown) {
            if (*cursors.current < 1) {
                unsigned char* roundBorrow = cursors.current - 1;
                if (*roundBorrow == 0) do { --roundBorrow; } while (*roundBorrow == 0);
                if (roundBorrow != cursors.current) {
                    do {
                        (*roundBorrow)--;
                        roundBorrow++;
                        (*roundBorrow) += 10;
                    } while (roundBorrow != cursors.current);
                }
            }
            (*cursors.current)--;
        }
    }
normalize:
    unsigned char* nonzero = cursors.beginning;
    if (*nonzero == 0) do { nonzero++; } while (*nonzero == 0);
    if (nonzero > cursors.beginning) {
        unsigned char removed = nonzero - cursors.beginning;
        result->exponent -= removed;
        normalEnd = cursors.beginning + result->length;
        if (nonzero < normalEnd) {
            do {
                *cursors.beginning++ = *nonzero++;
            } while (nonzero < normalEnd);
        }
        result->length -= removed;
    }
    unsigned char* lastBeginning = result->digits;
    unsigned char* last = lastBeginning + result->length;
    if (last > lastBeginning) do {
        --last;
        if (*last != 0) break;
    } while (last > lastBeginning);
    result->length = last - lastBeginning + 1;
}
