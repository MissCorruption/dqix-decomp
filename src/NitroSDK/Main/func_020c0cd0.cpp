#include <globaldefs.h>

#define DIGEST_BLOCK_SIZE 64

struct HmacHash
{
    int digestSize;
    int blockSize;
    void* context;
    void* digest;
    void (*reset)(void* context);
    void (*setSource)(void* context, const void* input, unsigned long length);
    void (*getDigest)(void* context, void* digest);
};

// USA: func_020c0cd0
extern "C" ARM void func_020c0cd0(void* digest, const void* input, int length, const void* key, int keyLength, HmacHash* hash)
{
    unsigned char keyDigest[DIGEST_BLOCK_SIZE];
    unsigned char innerPad[DIGEST_BLOCK_SIZE];
    unsigned char outerPad[DIGEST_BLOCK_SIZE];
    const unsigned char* keyBytes;
    int i;

    if (digest == NULL || input == NULL || length == 0 || key == NULL || keyLength == 0 || hash == NULL)
        return;

    if (keyLength > hash->blockSize)
    {
        hash->reset(hash->context);
        hash->setSource(hash->context, key, keyLength);
        hash->getDigest(hash->context, keyDigest);
        key = keyDigest;
        keyLength = hash->digestSize;
    }
    keyBytes = (const unsigned char*)key;

    for (i = 0; i < keyLength; i++)
        innerPad[i] = keyBytes[i] ^ 0x36;
    for (; i < hash->blockSize; i++)
        innerPad[i] = 0x36;
    hash->reset(hash->context);
    hash->setSource(hash->context, innerPad, hash->blockSize);
    hash->setSource(hash->context, input, length);
    hash->getDigest(hash->context, hash->digest);

    for (i = 0; i < keyLength; i++)
        outerPad[i] = keyBytes[i] ^ 0x5c;
    for (; i < hash->blockSize; i++)
        outerPad[i] = 0x5c;
    hash->reset(hash->context);
    hash->setSource(hash->context, outerPad, hash->blockSize);
    hash->setSource(hash->context, hash->digest, hash->digestSize);
    hash->getDigest(hash->context, digest);
}
