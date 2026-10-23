#include <globaldefs.h>

extern "C" int func_ov002_0215a8cc(char* arg0);
extern "C" void func_ov002_0215bf34(char* arg0);
extern "C" void func_ov002_0215c028(char* arg0);
extern "C" void func_ov002_0215c0f8(unsigned char* arg0);
extern "C" void func_ov002_02161cf0(char* arg0);
extern "C" void func_ov002_0215f3a0(char* arg0);

// USA: func_ov002_0215a938
extern "C" ARM void func_ov002_0215a938(char* arg0) {
#if defined(jpn)
    enum { Enum_ov002_0215a938_7096 = 0x1a80, Enum_ov002_0215a938_7136 = 0x1aa8, Enum_ov002_0215a938_7104 = 0x1a88, Enum_ov002_0215a938_21 = 0x16 };
#else
    enum { Enum_ov002_0215a938_7096 = 0x1bb8, Enum_ov002_0215a938_7136 = 0x1be0, Enum_ov002_0215a938_7104 = 0x1bc0, Enum_ov002_0215a938_21 = 0x15 };
#endif
    if (!func_ov002_0215a8cc(arg0)) return;

    *(int*)(arg0 + Enum_ov002_0215a938_7096) = 1;
    func_ov002_0215bf34(arg0);
    func_ov002_0215c028(arg0);
    func_ov002_02161cf0(arg0);
    func_ov002_0215c0f8((unsigned char*)arg0);

    if (*(short*)(arg0 + Enum_ov002_0215a938_7136) == 5) {
        *(int*)(arg0 + Enum_ov002_0215a938_7096) = Enum_ov002_0215a938_21;
        func_ov002_02161cf0(arg0);
        func_ov002_0215f3a0(arg0);
    }

    *(int*)(arg0 + Enum_ov002_0215a938_7104) = 1;
}
