#include <globaldefs.h>

extern "C" void func_ov023_021f6ed8(void* arg0);
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" void* func_ov023_021fad18(void* arg0);
extern "C" int func_ov023_021f6c90(void* arg0, int arg1, int arg2);
extern "C" void* func_ov023_021fa854(char* arg0, unsigned int arg1);
extern "C" ARM void func_ov023_021f6bec(void* arg0, int arg1, unsigned int arg2, unsigned int arg3);

struct Struct_ov023_021fad84 {
    char unknown_0_[4];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    char unknown_c_[4];
    unsigned int unknown_10_;
    char unknown_14_[8];
    unsigned int unknown_1c_;
    unsigned short unknown_20_;
    unsigned short unknown_22_;
    unsigned short unknown_24_;
    unsigned short unknown_26_;
    unsigned int unknown_28_;
    unsigned int unknown_2c_;
    unsigned short unknown_30_;
    unsigned short unknown_32_;
    unsigned short unknown_34_;
    unsigned short unknown_36_;
    char unknown_38_;
    char unknown_39_;
#if defined(jpn)
    unsigned short unknown_3a_;
#else
    unsigned char unknown1_3a_;
    char unknown_3b_[1];
#endif

    unsigned short unknown_3c_;
    unsigned short unknown_3e_;
    unsigned short unknown_40_;
    unsigned short unknown_42_;
#if defined(jpn)
    int unknown_44_;
    int unknown_48_;
#else
    unsigned short unknown1_44_;
    unsigned short unknown_46_;
#endif

    unsigned short unknown1_48_;
    unsigned char unknown_4a_;
#if defined(jpn)

#else
    unsigned char unknown_4b_;
#endif

};

// USA: func_ov023_021fad84
extern "C" ARM int func_ov023_021fad84(struct Struct_ov023_021fad84* arg0, void* arg1, int arg2, int arg3, int arg4, int arg5) {
    func_ov023_021f6ed8(arg0);
    arg0->unknown_4_ = 1;
    arg0->unknown_6_ = arg2;
    arg0->unknown_8_ = arg3;
    arg0->unknown_a_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_1c_ = 2;
    arg0->unknown_20_ = arg4;
#if defined(jpn)
    arg0->unknown_44_ = -1;
    arg0->unknown_48_ = -1;
#else
    arg0->unknown1_3a_ = 1;
    arg0->unknown1_44_ = 0;
    arg0->unknown_46_ = 0;
#endif


    void* var0 = func_ov011_021849c8(arg1);
    void* var1 = func_ov023_021f6880(var0, arg0->unknown_20_);
    if (var1 == NULL) {
        return 0;
    }

    void* var2 = func_ov023_021fad18(var1);
    unsigned char var3 = *(unsigned char*)((char*)var2 + 0x50);
    *(unsigned short*)((char*)arg0 + 0x22) = arg5;
    void* var4 = func_ov023_021fa854((char*)var2, *(unsigned short*)((char*)arg0 + 0x22));
    unsigned short var5 = *(unsigned short*)var4;

    int var6 = func_ov023_021f6c90(var0, var3, var5);
    *(unsigned short*)((char*)arg0 + 0x24) = var6;
    func_ov023_021f6bec(var0, var3, *(unsigned short*)((char*)arg0 + 0x24), var5);

    arg0->unknown_26_ = 0;
    arg0->unknown_28_ = 0;
    arg0->unknown_2c_ = 0;
    arg0->unknown_30_ = arg0->unknown_32_ = arg0->unknown_34_ = arg0->unknown_36_ = 0;
    arg0->unknown_38_ = -1;
    arg0->unknown_39_ = -1;
#if defined(jpn)
    arg0->unknown_3a_ = 0;
    arg0->unknown_3c_ = 0;
#else
    arg0->unknown_3c_ = 0;
#endif

    arg0->unknown_3e_ = 0;
    arg0->unknown_40_ = 0;
#if defined(jpn)

#else
    arg0->unknown_42_ = 0;
#endif

    arg0->unknown1_48_ = 0;
    arg0->unknown_4a_ = 0;
#if defined(jpn)

#else
    arg0->unknown_4b_ = 0;
#endif

    return 1;
}
