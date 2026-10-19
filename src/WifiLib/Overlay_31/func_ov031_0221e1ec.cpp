#include <globaldefs.h>

struct StreamCipherState {
    unsigned int first;
    unsigned int second;
    unsigned char* permutation;
    unsigned int length;
};

// USA: func_ov031_0221e1ec
extern "C" THUMB void func_ov031_0221e1ec(StreamCipherState* state, const unsigned char* key, unsigned int keyLength, unsigned int length) {
    unsigned char* permutation = state->permutation;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    state->first = state->second = 0;
    state->length = length;
    for (i = 0; i < length; i++) {
        permutation[i] = i;
    }
    j = 0;
    k = 0;
    for (i = 0; i < length; i++) {
        unsigned char value = permutation[i];
        unsigned char t;
        j = (j + key[k] + value) % state->length;
        t = permutation[j];
        permutation[j] = value;
        permutation[i] = t;
        k++;
        if (k >= keyLength) {
            k = 0;
        }
    }
}
