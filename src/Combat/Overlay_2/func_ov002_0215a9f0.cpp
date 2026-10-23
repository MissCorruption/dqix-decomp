#include <globaldefs.h>

extern int data_ov002_0216c9dc;

// USA: func_ov002_0215a9f0
extern "C" ARM signed char func_ov002_0215a9f0(void* obj) {
#if defined(jpn)
    enum { regionalBase = 0x1a00, regionalIndex = 0xd2, regionalOuter = 0x1b00, regionalField = 0x40 };
#else
    enum { regionalBase = 0x1c00, regionalIndex = 0xa, regionalOuter = 0x1c00, regionalField = 0x7c };
#endif
    unsigned char* p = (unsigned char*)obj + regionalBase;
    short idx = *(short*)(p + regionalIndex);
    int off = (&data_ov002_0216c9dc)[idx];
    unsigned char* q = (unsigned char*)obj + off + regionalOuter;
    return *(signed char*)(q + regionalField);
}
