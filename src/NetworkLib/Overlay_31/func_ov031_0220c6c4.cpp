#include <globaldefs.h>
#include "System/Memory.h"

extern void* (*data_ov031_0224c994)(unsigned int);
extern void (*data_ov031_0224c9c0)(void*);

int TrimTrailingZeroShorts_0220bb24(unsigned short*, int);
void PropagateBorrowSub_0220bd64(unsigned short*, unsigned short*, int, int);
extern "C" void func_ov031_0220c450(unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220be38(unsigned short*, unsigned short*, unsigned short*, int);
extern "C" void func_ov031_0220c0dc(unsigned short*, unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" void func_ov031_0220c59c(unsigned short*, unsigned short*, unsigned int, int, int, unsigned short*, unsigned short*, unsigned short*, unsigned short*);

// USA: func_ov031_0220c6c4
extern "C" ARM void func_ov031_0220c6c4(unsigned short* output, unsigned short* base,
    unsigned short* exponent, int count, unsigned short* modulus)
{
    int allocationSize = count * 22;
    unsigned short* storage = static_cast<unsigned short*>(data_ov031_0224c994(allocationSize));
    if (!storage) {
        return;
    }
    VectorizedMemset(storage, 0, allocationSize);
    int modulusLength;
    int bit;
    unsigned short* scratch;
    unsigned short* reduced = storage + count;
    unsigned short* radix = reduced + count;
    unsigned short* product = radix + count;
    unsigned short* intermediate = product + count;
    unsigned short* accumulator = intermediate + count;
    scratch = accumulator + count;
    modulusLength = TrimTrailingZeroShorts_0220bb24(modulus, count);
    storage[modulusLength] = 1;
    func_ov031_0220c450(reduced, storage, modulus, count, radix);
    func_ov031_0220be38(product, storage, reduced, count);
    PropagateBorrowSub_0220bd64(reduced, product, 1, count);
    func_ov031_0220c0dc(reduced, reduced, modulus, 0, count, scratch);
    func_ov031_0220be38(radix, base, storage, count);
    func_ov031_0220c0dc(0, radix, modulus, radix, count, scratch);
    func_ov031_0220c0dc(0, storage, modulus, output, count, scratch);
    bit = 0;
    unsigned int bitCount = modulusLength << 4;
    if (bitCount != 0) {
        do {
            func_ov031_0220c59c(output, accumulator, 1,
                count, modulusLength, modulus, reduced, product, intermediate);
            if ((exponent + (modulusLength - (bit >> 4)))[-1] & (0x8000u >> (bit & 15))) {
                func_ov031_0220c59c(output, accumulator, (unsigned int)radix, count,
                    modulusLength, modulus, reduced, product, intermediate);
            }
        } while (++bit < bitCount);
    }
    func_ov031_0220c59c(output, accumulator, 0, count, modulusLength,
        modulus, reduced, product, intermediate);
    data_ov031_0224c9c0(storage);
}
