#include <globaldefs.h>
#include <NitroSDK/NSBXX/RenderCommands_Common.h>


#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

#if defined(jpn)
#define func_020ca3b8 func_020cbe84
#endif

struct Struct_ov031_0223bdb0 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned int unknown_4_;
};
struct Struct_ov031_0223bdb0_2 {
    unsigned short unknown_0_[3];
    unsigned short unknown_6_;
};
extern Struct_ov031_0223bdb0* data_ov031_02290d2c[];
extern "C" void func_020ca3b8(const void* arg0, void* arg1, unsigned int arg2);

// USA: func_ov031_0223bdb0
extern "C" ARM void func_ov031_0223bdb0(int arg0, int arg1, void* arg2) {
    Struct_ov031_0223bdb0* var0 = data_ov031_02290d2c[arg0];
    const unsigned char* var1 = (const unsigned char*)var0 + var0[arg1].unknown_4_;
    int var2 = var0[arg1].unknown_0_;
    Struct_ov031_0223bdb0_2 var3;
    func_020ca3ec(0, &var3, sizeof(var3));
    Struct_ov031_0223bdb0_2* var4 = (Struct_ov031_0223bdb0_2*)arg2;
    int var5 = 0;
    if (var2 <= 0) {
        return;
    }
    do {
        func_020ca3b8(var1, &var3, 6);
        func_020ca408(&var3, var4, sizeof(var3));
        var5++;
        var1 += 6;
        var4++;
    } while (var5 < var2);
}
