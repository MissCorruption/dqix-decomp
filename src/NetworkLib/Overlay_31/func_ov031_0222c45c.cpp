#include <globaldefs.h>
#include <NitroSDK/Memory.h>

struct ParamA020b1d70;
ARM int FindFirstZeroByte_0223dd34(unsigned char* s, int len);
extern "C" void func_ov031_0223c8d4(ParamA020b1d70* a, int b, int c, int d, int e, unsigned short* counts, int idx);

struct Entry0222c45c {
    unsigned char name[0x20];
    unsigned char pad_0x20[0xa];
};
struct Manager0222c45c {
    Entry0222c45c* entries;
    void* field_0x4;
    void* field_0x8;
    ParamA020b1d70* field_0xc;
    unsigned char pad_0x10[0x41];
    unsigned char count;
};
struct Context0222c45c {
    unsigned char field_0;
    unsigned char pad_1[3];
    Manager0222c45c* manager;
};
extern Context0222c45c data_ov031_02290c8c;

// USA: func_ov031_0222c45c
extern "C" ARM void func_ov031_0222c45c(int idx, int row) {
    unsigned short buf[0x11];
    int len = FindFirstZeroByte_0223dd34(data_ov031_02290c8c.manager->entries[idx].name, 0x20);
    int y = row * 0x1c;
    if (idx >= data_ov031_02290c8c.manager->count) return;
    if (len <= 0x10) y += 6;
    VectorizedMemset(buf, 0, sizeof(buf));
    int n = len <= 0x10 ? len : 0x10;
    int i;
    for (i = 0; i < n; i++) {
        buf[i] = data_ov031_02290c8c.manager->entries[idx].name[i];
    }
    func_ov031_0223c8d4(data_ov031_02290c8c.manager->field_0xc, 10, y, 2, 10, buf, 1);
    if (len <= 0x10) return;
    VectorizedMemset(buf, 0, sizeof(buf));
    len -= 0x10;
    for (i = 0; i < len; i++) {
        buf[i] = data_ov031_02290c8c.manager->entries[idx].name[i + 0x10];
    }
    func_ov031_0223c8d4(data_ov031_02290c8c.manager->field_0xc, 10, y + 0xc, 2, 10, buf, 1);
}
