#include <globaldefs.h>

extern int data_ov002_0216c9dc;

// USA: func_ov002_0215a9f0
extern "C" ARM signed char func_ov002_0215a9f0(void* arg0) {
#if defined(jpn)
    enum { Enum_ov002_0215a9f0_7168 = 0x1a00, Enum_ov002_0215a9f0_10 = 0xd2, Enum_ov002_0215a9f0_7168_2 = 0x1b00, Enum_ov002_0215a9f0_124 = 0x40 };
#else
    enum { Enum_ov002_0215a9f0_7168 = 0x1c00, Enum_ov002_0215a9f0_10 = 0xa, Enum_ov002_0215a9f0_7168_2 = 0x1c00, Enum_ov002_0215a9f0_124 = 0x7c };
#endif
    unsigned char* var0 = (unsigned char*)arg0 + Enum_ov002_0215a9f0_7168;
    short var1 = *(short*)(var0 + Enum_ov002_0215a9f0_10);
    int var2 = (&data_ov002_0216c9dc)[var1];
    unsigned char* var3 = (unsigned char*)arg0 + var2 + Enum_ov002_0215a9f0_7168_2;
    return *(signed char*)(var3 + Enum_ov002_0215a9f0_124);
}
