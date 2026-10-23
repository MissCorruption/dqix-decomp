#include <globaldefs.h>

extern int data_ov002_0216c9c0;

// USA: func_ov002_0215a9cc
extern "C" ARM void func_ov002_0215a9cc(void* arg0, int arg1) {
#if defined(jpn)
    enum { Enum_ov002_0215a9cc_7168 = 0x1a00, Enum_ov002_0215a9cc_10 = 0xd2, Enum_ov002_0215a9cc_3196 = 0xb40 };
#else
    enum { Enum_ov002_0215a9cc_7168 = 0x1c00, Enum_ov002_0215a9cc_10 = 0xa, Enum_ov002_0215a9cc_3196 = 0xc7c };
#endif
    unsigned char* var0 = (unsigned char*)arg0 + Enum_ov002_0215a9cc_7168;
    short var1 = *(short*)(var0 + Enum_ov002_0215a9cc_10);
    int var2 = (&data_ov002_0216c9c0)[var1];
    unsigned char* var3 = (unsigned char*)arg0 + var2 + 0x1000;
    var3[Enum_ov002_0215a9cc_3196] = (unsigned char)arg1;
}
