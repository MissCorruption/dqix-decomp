#include <globaldefs.h>

extern int data_ov002_0216c9c0;

// USA: func_ov002_0215a9cc
extern "C" ARM void func_ov002_0215a9cc(void* obj, int val) {
#if defined(jpn)
    enum { regionalBase = 0x1a00, regionalIndex = 0xd2, regionalField = 0xb40 };
#else
    enum { regionalBase = 0x1c00, regionalIndex = 0xa, regionalField = 0xc7c };
#endif
    unsigned char* p = (unsigned char*)obj + regionalBase;
    short idx = *(short*)(p + regionalIndex);
    int off = (&data_ov002_0216c9c0)[idx];
    unsigned char* q = (unsigned char*)obj + off + 0x1000;
    q[regionalField] = (unsigned char)val;
}
