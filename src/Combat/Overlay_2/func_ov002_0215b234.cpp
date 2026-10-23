#include <globaldefs.h>

extern unsigned char data_02108760;
extern char data_02109bf4;
extern "C" unsigned char func_0205ea18(unsigned char*);
extern "C" unsigned char func_0209ca98(char*);

#if defined(jpn)
#define FIELDS_0215b234 0x1af4
#else
#define FIELDS_0215b234 0x1c2c
#endif

// USA: func_ov002_0215b234
extern "C" ARM void func_ov002_0215b234(unsigned char* arg0) {
    arg0[FIELDS_0215b234] = func_0209ca98(&data_02109bf4);
    arg0[FIELDS_0215b234 + 1] = func_0205ea18(&data_02108760);
}
