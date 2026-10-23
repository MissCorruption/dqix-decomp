#include <globaldefs.h>

struct StreamPlayer020becd4 {
    unsigned char unknown_0[0xc4];
    unsigned short sampleRate;
    unsigned char unknown_c6[6];
    unsigned int loopEnd;
};

struct StreamHandle020becd4 {
    StreamPlayer020becd4* player;
};

static inline bool IsStreamHandleValid020becd4(const StreamHandle020becd4* handle)
{
    return handle->player != NULL;
}

// USA: func_020becd4
extern "C" ARM unsigned int func_020becd4(void* object)
{
    StreamHandle020becd4* handle = (StreamHandle020becd4*)object;
    StreamPlayer020becd4* player;
    unsigned long long length;
    if (!IsStreamHandleValid020becd4(handle))
        return 0;
    player = handle->player;
    length = player->loopEnd;
    length *= 1000;
    length /= (unsigned int)player->sampleRate;
    return (unsigned int)length;
}
