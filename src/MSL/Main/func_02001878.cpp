#include <globaldefs.h>

struct FileModes02001878 {
    unsigned int openMode : 2;
    unsigned int ioMode : 3;
    unsigned int bufferMode : 2;
    unsigned int fileKind : 3;
    unsigned int fileOrientation : 2;
    unsigned int binaryIo : 1;
};

struct FileState02001878 {
    unsigned int ioState : 3;
    unsigned int freeBuffer : 1;
    unsigned char eof;
    unsigned char error;
};

struct File02001878 {
    unsigned long handle;
    FileModes02001878 mode;
    FileState02001878 state;
    unsigned char charBuffer;
    unsigned char charBufferOverflow;
    unsigned char ungetcBuffer[2];
    unsigned short ungetwcBuffer[2];
    unsigned int position;
    unsigned char* buffer;
    unsigned int bufferSize;
    unsigned char* bufferPtr;
    unsigned int bufferLen;
    unsigned int bufferAlignment;
    unsigned int savedBufferLen;
    unsigned int bufferPos;
    void* positionProc;
    void* readProc;
    void* writeProc;
    void* closeProc;
    void* refCon;
};

extern "C" int func_0200173c(void);
extern "C" int func_020017f0(File02001878* file, unsigned int* length);

// USA: func_02001878
extern "C" ARM int func_02001878(File02001878* file) {
    if (file == 0) {
        return func_0200173c();
    }

    if (file->state.error != 0 || file->mode.fileKind == 0) {
        return -1;
    }

    if (file->mode.ioMode == 1) {
        return 0;
    }

    if (file->state.ioState >= 3) {
        file->state.ioState = 2;
    }

    if (file->state.ioState == 2) {
        file->bufferLen = 0;
    }

    if (file->state.ioState != 1) {
        file->state.ioState = 0;
        return 0;
    }

    if (func_020017f0(file, 0) != 0) {
        file->state.error = 1;
        file->bufferLen = 0;
        return -1;
    }

    file->state.ioState = 0;
    file->position = 0;
    file->bufferLen = 0;
    return 0;
}
