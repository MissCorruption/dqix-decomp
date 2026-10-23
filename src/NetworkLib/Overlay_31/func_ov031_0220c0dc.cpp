#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include <std_library_functions.h>

extern "C" int func_ov031_0220bb24(unsigned short* arr, int len);
extern "C" unsigned long long func_ov031_0220c090(unsigned short* p);
extern "C" unsigned long long func_ov031_0220c09c(volatile unsigned short* p);
extern "C" unsigned long long func_ov031_0220c0ac(unsigned short* p);
extern "C" unsigned long long func_ov031_0220c0c0(unsigned short* p);
extern "C" void func_ov031_0220bee4(unsigned short* dst, unsigned short* src, int scalar, int len);
extern "C" int func_ov031_0220bdcc(unsigned short* a, unsigned short* b, int count);
extern "C" void func_ov031_0220bcbc(unsigned short* destination, unsigned short* left, unsigned short* right, int length);

// USA: func_ov031_0220c0dc
extern "C" ARM void func_ov031_0220c0dc(unsigned short* quotient, unsigned short* dividend,
    unsigned short* divisor, unsigned short* remainder, int count, unsigned short* work) {
    int i;
    unsigned int digit;
    int divisorLength;
    unsigned short* q;
    unsigned short* r;
    int dividendLength;
    unsigned long long top;
    int moveBytes;

    q = work + count;
    r = q + count;
    VectorizedMemset(q, 0, count * 4);
    dividendLength = func_ov031_0220bb24(dividend, count);
    divisorLength = func_ov031_0220bb24(divisor, count);
    if (dividendLength > 0 && divisorLength > 0) {
        i = count - dividendLength + divisorLength - 1;
        if (i >= count) {
            VectorizedInvertedMemcpy(dividend, r, count * 2);
        } else {
            VectorizedInvertedMemcpy(dividend, q + i, dividendLength * 2);
            if (divisorLength > 2) top = func_ov031_0220c0ac(divisor + divisorLength - 1);
            else if (divisorLength > 1) top = func_ov031_0220c09c(divisor + divisorLength - 1);
            else top = func_ov031_0220c090(divisor + divisorLength - 1);
            if (i < count) {
                moveBytes = (count * 2 - 1) * 2;
                do {
                    memmove(q + 1, q, moveBytes);
                    digit = func_ov031_0220c0c0(r + divisorLength) / top;
                    if (digit > 0xffff) digit = 0xffff;
                    while (1) {
                        func_ov031_0220bee4(work, divisor, (unsigned short)digit, count);
                        if (func_ov031_0220bdcc(r, work, count) >= 0) break;
                        digit--;
                    }
                    func_ov031_0220bcbc(r, r, work, count);
                    *q = digit;
                    i++;
                } while (i < count);
            }
        }
    }
    if (quotient) VectorizedInvertedMemcpy(q, quotient, count * 2);
    if (remainder) VectorizedInvertedMemcpy(r, remainder, count * 2);
}
