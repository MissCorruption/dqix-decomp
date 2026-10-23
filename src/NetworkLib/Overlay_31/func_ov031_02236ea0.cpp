#include <globaldefs.h>

struct Obj0223bcc8;
struct GXOamAttr;
struct WifiSetupPoint02236ea0 {
    unsigned short x;
    unsigned short y;
};
struct WifiSetupBanner02236ea0 {
    void* letters[5];
    void* task;
    unsigned char closing;
};
struct WifiSetupBannerState02236ea0 {
    void* screen;
    WifiSetupBanner02236ea0* banner;
};
extern WifiSetupBannerState02236ea0 data_ov031_02290d04;
extern unsigned char data_ov031_0224924c[3][5];
extern unsigned char data_ov031_0224925b[3][5];
extern WifiSetupPoint02236ea0 data_ov031_0224926a[5];
extern "C" GXOamAttr* func_ov031_0223baa0(void*, int);
extern "C" void func_ov031_0223bdb0(int, int, GXOamAttr*);
extern "C" void func_ov031_0223bcc8(Obj0223bcc8*, int, int);
extern "C" void func_ov031_0223bbd8(void*, int, int, int);
enum GXOamMode {
    GX_OAM_MODE_NORMAL = 0,
    GX_OAM_MODE_XLU = 1,
    GX_OAM_MODE_OBJWND = 2,
    GX_OAM_MODE_BITMAPOBJ = 3
};
extern "C" void func_ov031_0223bb58(void*, int, GXOamMode, int);
extern "C" void func_ov031_022373b4(int);

// USA: func_ov031_02236ea0
extern "C" ARM void func_ov031_02236ea0(int kind) {
    int i;
    for (i = 0; i < 5; i += 2) {
        func_ov031_0223bdb0(1, data_ov031_0224924c[kind][i], func_ov031_0223baa0(data_ov031_02290d04.banner->letters[i], 0));
        func_ov031_0223bcc8((Obj0223bcc8*)data_ov031_02290d04.banner->letters[i], -1, 0);
        func_ov031_0223bbd8(data_ov031_02290d04.banner->letters[i], -1, data_ov031_0224926a[i].x, data_ov031_0224926a[i].y);
        func_ov031_0223bb58(data_ov031_02290d04.banner->letters[i], -1, GX_OAM_MODE_NORMAL, data_ov031_0224925b[kind][i]);
    }
    func_ov031_022373b4(kind);
}
