#include <globaldefs.h>

extern "C" int func_ov031_0220d570(int arg0);
extern "C" int func_ov031_0220d8f4(int arg0);
extern "C" unsigned short func_020d4be8(void);
extern "C" void* VectorizedInvertedMemcpy(void* p0, void* p1, int n);

extern int data_ov031_0224e53c;
extern int data_ov031_02245fb0;
extern int data_ov031_02245fb8;

// USA: func_ov031_0220d73c
extern "C" ARM void func_ov031_0220d73c(void* arg0, char* arg1, int arg2) {
    func_ov031_0220d570(arg2);

    *(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x288) = (int)((char*)data_ov031_0224e53c + 0x1500);
    *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x8c) = 0x400;

    int var0 = func_ov031_0220d8f4(0);
    *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x8e) = (unsigned short)((1 << var0) >> 1);

    unsigned short var1 = *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x68);
    unsigned short var2 = var1 != 0 ? var1 : func_020d4be8();
    *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x90) = var2;

    *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x98) = ((*(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x264) & 0x300000) != 0x300000);

    if (arg0 == 0) {
        VectorizedInvertedMemcpy(&data_ov031_02245fb0, (char*)data_ov031_0224e53c + 0x2200 + 0x92, 6);
    } else {
        VectorizedInvertedMemcpy(arg0, (char*)data_ov031_0224e53c + 0x2200 + 0x92, 6);
    }

    if (arg1 == 0 || arg1 == (char*)&data_ov031_02245fb8) {
        VectorizedInvertedMemcpy(&data_ov031_02245fb8, (char*)data_ov031_0224e53c + 0x2000 + 0x29c, 0x20);
        *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x9a) = 0;
    } else {
        VectorizedInvertedMemcpy(arg1, (char*)data_ov031_0224e53c + 0x2000 + 0x29c, 0x20);
        int var3 = 0;
        unsigned char* var4 = (unsigned char*)arg1;
        for (;;) {
            if (*var4 == 0) break;
            var3++;
            var4++;
            if (var3 >= 0x20) break;
        }
        *(unsigned short*)((char*)data_ov031_0224e53c + 0x2200 + 0x9a) = var3;
    }

    *(int*)((char*)data_ov031_0224e53c + 0x2000 + 0x284) = 0;
}
