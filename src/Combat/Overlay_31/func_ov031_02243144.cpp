#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Resource/Script.h"

struct Struct_ov031_02243144_2 { unsigned char unknown_0_[6]; unsigned char unknown_6_; unsigned char unknown_7_; };
struct Struct_ov031_02243144 { int unknown_0_; unsigned char unknown_4_[6]; };
#if defined(jpn)
struct Struct_ov031_02291e04 {
    unsigned char unknown_0_; unsigned char unknown_6_; unsigned char unknown_2_; unsigned char unknown_3_;
    unsigned char unknown_4_; unsigned char unknown1_7_; unsigned char unknown1_4_; char unknown_7_[9];
    void* unknown_34_; char unknown_14_[4]; Struct_ov031_02243144* unknown_18_;
};
#else
struct Struct_ov031_02291e04 {
    unsigned char unknown_0_[3]; unsigned char unknown_3_; unsigned char unknown1_4_; unsigned char unknown_5_;
    unsigned char unknown_6_; unsigned char unknown1_7_; char unknown_8_[0x10]; Struct_ov031_02243144* unknown_18_;
    char unknown_1c_[0x18]; void* unknown_34_;
};
#endif
extern Struct_ov031_02291e04 data_ov031_02291e04;
extern "C" int func_02001aec(const void*,const void*,unsigned int);

// USA: func_ov031_02243144
extern "C" ARM int func_ov031_02243144(Script::Parameter* arg0) {
    if(!data_ov031_02291e04.unknown_34_) return 1;
    if(data_ov031_02291e04.unknown_3_) return 1;
    arg0++->ToInt();
    unsigned char var0[6];
    for(int var1=0;var1<6;++var1) var0[var1]=(arg0++)->ToInt();
    if(!func_02001aec(var0,data_ov031_02291e04.unknown_18_->unknown_4_,6)) {
        data_ov031_02291e04.unknown_6_=1;
        int var2=-1;
        int var3=-1;
#if defined(jpn)
        Struct_ov031_02243144_2* var4=(Struct_ov031_02243144_2*)((char*)GameState::GetInstance()+0x7cdc);
#else
        Struct_ov031_02243144_2* var4=(Struct_ov031_02243144_2*)&GameState::GetInstance()->unk_6fc0[0x7fb0-0x6fc0];
#endif
        Struct_ov031_02243144_2* var5=var4;
        for(int var6=0;var6<8;++var6,++var5) {
            if(!func_02001aec(var5,var0,6)) {
                var2=var6;
                if(var5->unknown_6_!=255 && !data_ov031_02291e04.unknown1_7_) {
                    data_ov031_02291e04.unknown1_4_=var5->unknown_6_;
                    return 1;
                }
                break;
            }
            if(var3>var5->unknown_6_ || var3<0) { var2=var6; var3=var5->unknown_6_; }
        }
        data_ov031_02291e04.unknown_3_=1;
        var5=var4;
        for(int var7=0;var7<8;++var7,++var5) {
            if(var5->unknown_6_) {
                if(var5->unknown_6_==255) var5->unknown_6_=0;
                else --var5->unknown_6_;
                if(!var5->unknown_6_) memset(var5,0,sizeof(*var5));
            }
        }
        var5=&var4[var2];
        memcpy(var5,var0,6);
        var5->unknown_6_=7;
    }
    return 1;
}
