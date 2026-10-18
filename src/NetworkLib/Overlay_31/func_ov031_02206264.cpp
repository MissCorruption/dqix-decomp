#include <globaldefs.h>

struct TransferLimits02206264 {
    unsigned char padding_0[0x48];
    int capacity;
};
struct TransferBuffer02206264 {
    unsigned char padding_0[0x10c];
    TransferLimits02206264* limits;
};
struct TransferContext02206264 {
    unsigned char padding_0[0x68];
    TransferBuffer02206264* buffer;
    unsigned char padding_6c[7];
    signed char mode;
};
extern "C" int func_ov031_02206368(TransferContext02206264* self, int min, int max, int* out, int flags);
extern "C" int func_ov031_02206410(TransferContext02206264* self, const unsigned char* source, int length, int offset, unsigned short tag, unsigned int user_data, int flags);

// USA: func_ov031_02206264
extern "C" ARM int func_ov031_02206264(TransferContext02206264* self, const unsigned char* source, int length, unsigned short tag, unsigned int user_data, int flags) {
    int n;
    int total = 0;
    int capacity = self->buffer->limits->capacity;
    int chunk;
    int offset;

    if (self->mode == 1) {
        if (length > capacity - 42) return total - 35;
        chunk = length;
    } else {
        chunk = capacity - 54;
        if (length <= chunk) chunk = length;
    }
    while (length > 0) {
        n = func_ov031_02206368(self, length, chunk, &offset, flags);
        if (n > 0) {
            if (func_ov031_02206410(self, source, n, offset, tag, user_data, flags) <= 0) return -6;
            source += n;
            length -= n;
            total += n;
        }
        if (!(flags & 1)) {
            if (n > 0) break;
            return -6;
        }
    }
    return total;
}
