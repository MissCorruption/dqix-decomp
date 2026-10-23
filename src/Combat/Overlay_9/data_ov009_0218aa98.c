#if defined(jpn)
#define data_ov009_0218aa98 data_ov009_0218ba4c
#endif

typedef struct SafeAllocator SafeAllocator;

typedef struct ModelFile {
    SafeAllocator* allocator_;
    const char* name_;
    unsigned char model_;
} ModelFile;

typedef struct ModelFiles {
    ModelFile files[4];
} ModelFiles;

// USA: data_ov009_0218aa98
const ModelFiles data_ov009_0218aa98 = {{
    {0, 0, 0},
    {0, 0, 1},
    {0, 0, 2},
    {0, 0, 0},
}};
