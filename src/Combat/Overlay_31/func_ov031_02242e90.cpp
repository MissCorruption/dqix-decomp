#include <globaldefs.h>

enum AsciiCase02242e90 { AsciiOrdinary = 0, AsciiUppercase = 1 };

// USA: func_ov031_02242e90
extern "C" ARM int func_ov031_02242e90(const signed char* first, const signed char* second) {
    int folded;
    AsciiCase02242e90 classification;
    int left;
    int right;
    goto compare;
advance:
    if (left == 0 || left == ' ') return 0;
    ++first;
    ++second;
compare:
    right = *second;
    classification = AsciiOrdinary;
    if (right >= 'A' && right <= 'Z') classification = AsciiUppercase;
    left = *first;
    if (classification) right += 32;
    classification = AsciiOrdinary;
    if (left >= 'A' && left <= 'Z') classification = AsciiUppercase;
    folded = classification ? left + 32 : left;
    if (folded == right) goto advance;
    return -1;
}


