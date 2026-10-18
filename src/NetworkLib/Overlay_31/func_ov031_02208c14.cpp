#include <globaldefs.h>

struct RsaNumber {
    int length;
    unsigned char* data;
};

struct RsaPrivateKey {
    RsaNumber modulus;
    RsaNumber prime1;
    RsaNumber prime2;
    RsaNumber exponent1;
    RsaNumber exponent2;
    RsaNumber coefficient;
};

void BytesToShortArrayBE_0220c8d0(unsigned short* dst, unsigned char* src, int len, int outLen);
void ShortArrayToBytesBE_0220c92c(unsigned char* dst, unsigned short* src, int count, int words);
unsigned int SwapActiveContextPriority_02207cf0();
void SetActiveContextPriorityIfValid_02207d3c(unsigned int priority);
int CheckHighBitOrTrim_0220bb4c(unsigned short* arr, int len);
extern "C" void func_ov031_0220c6c4(unsigned short* result, unsigned short* base, unsigned short* exponent, int length, unsigned short* modulus);
extern "C" void func_ov031_0220bcbc(unsigned short* destination, unsigned short* left, unsigned short* right, int length);
extern "C" void func_ov031_0220be38(unsigned short* dst, unsigned short* b, unsigned short* c, int n);
extern "C" void func_ov031_0220bb7c(unsigned short* dst, unsigned short* a, unsigned short* b, int len);
extern "C" void func_ov031_0220bc7c(unsigned short* arr, int count);
extern "C" void func_ov031_0220c0dc(unsigned short* quotient, unsigned short* dividend,
    unsigned short* divisor, unsigned short* remainder, int count, unsigned short* work);
extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_02208c14
extern "C" ARM void func_ov031_02208c14(unsigned char* out, unsigned char* input, RsaPrivateKey* key) {
    int words;
    unsigned short* cipher;
    unsigned short* number;
    unsigned short* product;
    unsigned short* m1;
    unsigned short* m2;
    unsigned short* prime;
    unsigned short* message;
    unsigned short* work;
    unsigned int priority;
    if (key == 0 || key->modulus.length == 0)
        return;
    words = (key->modulus.length * 2) / 2 + 1;
    cipher = (unsigned short*)data_ov031_0224c994(words * 0x14);
    if (cipher == 0)
        return;
    number = cipher + words;
    product = number + words;
    m1 = product + words;
    m2 = m1 + words;
    prime = m2 + words;
    message = prime + words;
    work = message + words;
    BytesToShortArrayBE_0220c8d0(cipher, input, key->modulus.length, words);
    BytesToShortArrayBE_0220c8d0(number, key->exponent1.data, key->exponent1.length, words);
    BytesToShortArrayBE_0220c8d0(prime, key->prime1.data, key->prime1.length, words);
    priority = SwapActiveContextPriority_02207cf0();
    func_ov031_0220c6c4(m1, cipher, number, words, prime);
    BytesToShortArrayBE_0220c8d0(number, key->exponent2.data, key->exponent2.length, words);
    BytesToShortArrayBE_0220c8d0(prime, key->prime2.data, key->prime2.length, words);
    func_ov031_0220c6c4(m2, cipher, number, words, prime);
    SetActiveContextPriorityIfValid_02207d3c(priority);
    func_ov031_0220bcbc(cipher, m1, m2, words);
    BytesToShortArrayBE_0220c8d0(number, key->coefficient.data, key->coefficient.length, words);
    func_ov031_0220be38(product, cipher, number, words);
    BytesToShortArrayBE_0220c8d0(number, key->prime2.data, key->prime2.length, words);
    func_ov031_0220be38(cipher, product, number, words);
    func_ov031_0220bb7c(product, cipher, m2, words);
    BytesToShortArrayBE_0220c8d0(number, key->modulus.data, key->modulus.length, words);
    if (CheckHighBitOrTrim_0220bb4c(product, words) < 0) {
        func_ov031_0220bc7c(product, words);
        func_ov031_0220c0dc(0, product, number, message, words, work);
        func_ov031_0220bcbc(message, number, message, words);
    } else {
        func_ov031_0220c0dc(0, product, number, message, words, work);
    }
    ShortArrayToBytesBE_0220c92c(out, message, 0x30, words);
    data_ov031_0224c9c0(cipher);
}
