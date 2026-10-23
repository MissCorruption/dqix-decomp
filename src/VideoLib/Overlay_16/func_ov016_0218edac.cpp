#include <globaldefs.h>

struct AudioStream;
struct AudioStreamVtable {
    void (*field_00)(AudioStream*);
    void (*destroy)(AudioStream*);
    void (*field_08[4])(AudioStream*);
    void (*close)(AudioStream*);
};
struct AudioStream {
    AudioStreamVtable* vtable;
};
struct AudioResources {
    AudioStream* stream;
    unsigned char pad_04[0x30];
    void* decoder;
    unsigned char pad_38[0x20];
    void* buffer;
    void** firstBuffers;
    void** secondBuffers;
    void* parameters;
    void* firstScratch;
    void* secondScratch;
    void* workBuffers[2];
    unsigned char pad_78[0x1c];
    void* scratch;
    #if defined(jpn)
    unsigned char pad_98[0xc];
#else
    unsigned char pad_98[0x10];
#endif
    unsigned int capacity;
};
extern "C" void func_ov016_0218bca8(void*);

// USA: func_ov016_0218edac
extern "C" ARM void func_ov016_0218edac(AudioResources* resources) {
    if (resources->stream) {
        resources->stream->vtable->close(resources->stream);
        if (resources->stream) resources->stream->vtable->destroy(resources->stream);
    }
    func_ov016_0218bca8(resources->decoder);
    if (resources->firstBuffers) {
        unsigned int i = 0;
        if (i < resources->capacity) do {
            func_ov016_0218bca8(resources->firstBuffers[i]);
            i++;
        } while (i < resources->capacity);
        func_ov016_0218bca8(resources->firstBuffers);
    }
    if (resources->secondBuffers) {
        unsigned int i = 0;
        if (i < resources->capacity) do {
            func_ov016_0218bca8(resources->secondBuffers[i]);
            i++;
        } while (i < resources->capacity);
        func_ov016_0218bca8(resources->secondBuffers);
    }
    if (resources->parameters) func_ov016_0218bca8(resources->parameters);
    if (resources->firstScratch) func_ov016_0218bca8(resources->firstScratch);
    if (resources->secondScratch) func_ov016_0218bca8(resources->secondScratch);
    int i = 0;
    do {
        if (resources->workBuffers[i]) func_ov016_0218bca8(resources->workBuffers[i]);
        resources->workBuffers[i] = 0;
        i++;
    } while (i < 2);
    if (resources->scratch) func_ov016_0218bca8(resources->scratch);
    if (resources->buffer) func_ov016_0218bca8(resources->buffer);
    resources->stream = 0;
    resources->firstBuffers = 0;
    resources->secondBuffers = 0;
    resources->firstScratch = 0;
    resources->secondScratch = 0;
    resources->parameters = 0;
    resources->buffer = 0;
    resources->scratch = 0;
}
