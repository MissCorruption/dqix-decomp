#include <globaldefs.h>

struct StreamPlayer020bec98
{
    char pad_0x0[0xc4];
    unsigned short sampleRate_;
    char pad_0xc6[0x9a];
    unsigned int currentSample_;
};
struct StreamHandle020bec98 { StreamPlayer020bec98* player_; };

static inline bool IsStreamHandleValid020bec98(const StreamHandle020bec98* handle)
{
    return handle->player_ != NULL;
}

// USA: func_020bec98
ARM unsigned int ScaleField0x160By1000_020bec98(void* object)
{
    StreamHandle020bec98* handle = (StreamHandle020bec98*)object;
    StreamPlayer020bec98* player;
    unsigned long long position;
    if (!IsStreamHandleValid020bec98(handle))
        return 0;
    player = handle->player_;
    position = player->currentSample_;
    position *= 1000;
    position /= (unsigned int)player->sampleRate_;
    return (unsigned int)position;
}
