#include <globaldefs.h>
#include "NitroSDK/Memory.h"

extern "C" void* func_ov031_022157e8(char* p);
extern "C" void func_ov031_02215750(int a, void* b);

// USA: func_ov031_022140e8
extern "C" ARM bool func_ov031_022140e8(void* obj, int caseIdx, void* buf) {
    unsigned char* base = (unsigned char*)obj;
    unsigned char* out = (unsigned char*)buf;
    switch (caseIdx) {
    case 2:
        base += 0x100;
    case 1:
        base += 0x100;
    case 0: {
        struct Flags2Bit022140e8 { unsigned char val : 2; unsigned char rest : 6; };
        Flags2Bit022140e8* flags = (Flags2Bit022140e8*)(base + 0xe6);
        out[0] = flags->val;
        VectorizedInvertedMemcpy(base + 0x80, out + 2, 0x10);
        break;
    }
    case 5:
        base += 0x100;
    case 4:
        base += 0x100;
    case 3: {
        out[0] = 1;
        VectorizedInvertedMemcpy(base + 0xd1, out + 2, 5);
        break;
    }
    case 6: {
        out[0] = 2;
        unsigned char idx = base[0xd13];
        unsigned char* p = base + 0x7c;
        void* addr = p + 0x400 + idx * 0xc0;
        typedef void* (*Cb2)(void*, void*);
        ((Cb2)func_ov031_022157e8)(addr, out + 2);
        break;
    }
    case 8:
    case 9:
        break;
    case 7: {
        out[0] = 2;
        unsigned char idx = base[0xd13];
        unsigned char* p = base + 0x7c;
        func_ov031_02215750((int)(p + 0x400 + idx * 0xc0), out + 2);
        break;
    }
    default:
        break;
    }
    return out[0] != 0;
}
