#include <globaldefs.h>

#define DIGEST_BLOCK_SIZE 64

struct Struct_020c0cd0
{
    int unknown_0_;
    int unknown_4_;
    void* unknown_8_;
    void* unknown_c_;
    void (*unknown_10_)(void* context);
    void (*unknown_14_)(void* context, const void* input, unsigned long length);
    void (*unknown_18_)(void* context, void* digest);
};

// USA: func_020c0cd0
extern "C" ARM void func_020c0cd0(void* arg0, const void* arg1, int arg2, const void* arg3, int arg4, Struct_020c0cd0* arg5)
{
    unsigned char var0[DIGEST_BLOCK_SIZE];
    unsigned char var1[DIGEST_BLOCK_SIZE];
    unsigned char var2[DIGEST_BLOCK_SIZE];
    const unsigned char* var3;
    int var4;

    if (arg0 == NULL || arg1 == NULL || arg2 == 0 || arg3 == NULL || arg4 == 0 || arg5 == NULL)
        return;

    if (arg4 > arg5->unknown_4_)
    {
        arg5->unknown_10_(arg5->unknown_8_);
        arg5->unknown_14_(arg5->unknown_8_, arg3, arg4);
        arg5->unknown_18_(arg5->unknown_8_, var0);
        arg3 = var0;
        arg4 = arg5->unknown_0_;
    }
    var3 = (const unsigned char*)arg3;

    for (var4 = 0; var4 < arg4; var4++)
        var1[var4] = var3[var4] ^ 0x36;
    for (; var4 < arg5->unknown_4_; var4++)
        var1[var4] = 0x36;
    arg5->unknown_10_(arg5->unknown_8_);
    arg5->unknown_14_(arg5->unknown_8_, var1, arg5->unknown_4_);
    arg5->unknown_14_(arg5->unknown_8_, arg1, arg2);
    arg5->unknown_18_(arg5->unknown_8_, arg5->unknown_c_);

    for (var4 = 0; var4 < arg4; var4++)
        var2[var4] = var3[var4] ^ 0x5c;
    for (; var4 < arg5->unknown_4_; var4++)
        var2[var4] = 0x5c;
    arg5->unknown_10_(arg5->unknown_8_);
    arg5->unknown_14_(arg5->unknown_8_, var2, arg5->unknown_4_);
    arg5->unknown_14_(arg5->unknown_8_, arg5->unknown_c_, arg5->unknown_0_);
    arg5->unknown_18_(arg5->unknown_8_, arg0);
}
