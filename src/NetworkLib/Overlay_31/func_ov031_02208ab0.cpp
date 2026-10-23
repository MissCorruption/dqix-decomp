#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "NitroSDK/NetworkProtocolVersion.h"

struct SslClientHelloState02208ab0 {
    unsigned char unknown0[0x30];
    unsigned char resumed;
    unsigned char unknown31;
    unsigned short cipher;
    unsigned char clientRandom[0x20];
    unsigned char unknown54[0x401];
    unsigned char state;
};

extern "C" int func_ov031_02208a40(const unsigned char*, int, int);

// USA: func_ov031_02208ab0
extern "C" ARM int func_ov031_02208ab0(SslClientHelloState02208ab0* context, const unsigned char* data) {
    int offset;
    int cipherBytes;
    int challengeBytes;
    int result;
    int sessionBytes;
    unsigned short cipher;
    result = func_ov031_02208aa0(data[0], data[1]);
    if (!result) return result;
    cipherBytes = (data[2] << 8) + data[3];
    cipher = func_ov031_02208a40(data + 8, cipherBytes / 3, 3);
    if (!cipher) return cipher;
    context->cipher = cipher;
    sessionBytes = (data[4] << 8) + data[5];
    challengeBytes = (data[6] << 8) + data[7];
    context->resumed = 0;
    offset = 8 + cipherBytes + sessionBytes;
    if (challengeBytes >= 32) {
        VectorizedInvertedMemcpy(data + offset, context->clientRandom, 32);
    } else {
        VectorizedMemset(context->clientRandom, 0, 32 - challengeBytes);
        VectorizedInvertedMemcpy(data + offset, context->clientRandom + 32 - challengeBytes, challengeBytes);
    }
    context->state = 1;
    return 1;
}
