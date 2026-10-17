#include <globaldefs.h>

struct FileModes0200173c {
    unsigned int openMode : 2;
    unsigned int ioMode : 3;
    unsigned int bufferMode : 2;
    unsigned int fileKind : 3;
    unsigned int fileOrientation : 2;
    unsigned int binaryIo : 1;
};

struct File0200173c {
    unsigned long handle;
    FileModes0200173c mode;
    unsigned char rest[0x44];
};

extern File0200173c data_020eebe0[];
extern "C" int func_02001878(File0200173c* file);

// USA: func_0200173c
extern "C" ARM int func_0200173c(void) {
    int result = 0;
    File0200173c* file = &data_020eebe0[0];
    int fileIndex = 1;

    do {
        if (file->mode.fileKind != 0) {
            if (func_02001878(file) != 0) {
                result = -1;
            }
        }
        if (fileIndex < 3) {
            file = &data_020eebe0[fileIndex++];
        } else {
            file = 0;
        }
    } while (file != 0);

    return result;
}
