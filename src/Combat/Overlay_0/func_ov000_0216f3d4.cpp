#include <globaldefs.h>
#include "NitroSDK/Matrix.h"
#include "World/Object3D.h"
#include "GameState/GameState.h"
extern "C" void* func_ov000_02160130();
extern "C" float func_02049fec(char*);
struct Struct_02049f50;
extern "C" void func_02049f50(Struct_02049f50*,int,int);
extern "C" { int func_ov000_02153e40(void*,short*,int,int); int func_02049fc0(void*); }
struct Struct_ov000_0215b278 { char unknown_0_[0x20]; unsigned short unknown_20_; char unknown_22_[0xe]; Struct_ov000_0215b278* unknown_30_; };
struct Struct_ov000_0215440c_6 { char unknown_0_[0xe]; short unknown_e_[4]; unsigned char unknown_16_,unknown_17_; char unknown_18_[8]; Struct_ov000_0215440c_6* unknown_20_; };
struct Struct_ov000_021537b8 { char unknown_0_[0x10]; Struct_ov000_0215b278* unknown_10_; Struct_ov000_0215440c_6* unknown_14_; };
struct Struct_ov000_0216df00 { char unknown_0_[4]; Vector3i unknown_4_; char unknown_10_[0x21c-0x10]; void* unknown_21c_; unsigned char unknown_220_,unknown_221_; char unknown_222_[2]; int unknown_224_; char unknown_228_[0x260-0x228]; unsigned char unknown_260_,unknown_261_,unknown_262_,unknown_263_; char unknown_264_[0x278-0x264]; unsigned char unknown_278_; char unknown_279_[3]; Struct_ov000_021537b8* unknown_27c_; };
inline int inline_ov000_0216f3d4(int arg0) { return (int)(((long long)arg0*arg0+0x800)>>12); }
// USA: func_ov000_0216f3d4
extern "C" ARM void func_ov000_0216f3d4(Struct_ov000_0216df00* arg0) {
    if(!arg0->unknown_21c_ || !arg0->unknown_278_) return;
    short var0[12];
    int var1=func_ov000_02153e40(arg0->unknown_21c_,var0,12,0);
    GameState* var2=GameState::GetInstance();
    int var3=180;
    if(arg0->unknown_221_) { var3=0; arg0->unknown_221_=0; }
    short* var4=var0;
    for(int var5=0;var5<var1;var5++,var4++) {
        GameObject* var6=var2->GetCombatantByIndex(*var4);
        if(!var6 || !var6->obj3D_.IsVisible() || var6->obj3D_.GetInheritedAlpha()<=0) continue;
        Vector3i var7(arg0->unknown_4_);
        int var8=var6->obj3D_.GetRadius()/2;
        int var9=var8+0x2000;
        int var10=var8+0x2b33;
        var9=inline_ov000_0216f3d4(var9); var10=inline_ov000_0216f3d4(var10);
        Vector3i var11(var7),var12(var6->obj3D_.position_),var13;
        var12.y+=var6->obj3D_.GetHeight()/2;
        Vector3fix_Subtract(&var12,&var11,&var13);
        int var14=Vector3fix_InnerProduct(&var13,&var13);
        int var15=arg0->unknown_224_==*var4;
        if(func_ov000_02160130() && (arg0->unknown_260_ || arg0->unknown_27c_) && !var15) {
            Struct_ov000_021537b8* var16=arg0->unknown_27c_;
            if(var16) {
                Struct_ov000_0215b278* var17=var16->unknown_10_;
                while(var17) { if(var17->unknown_20_==*var4) { var15=1; break; } var17=var17->unknown_30_; }
                if(!var15) {
                    Struct_ov000_0215440c_6* var18=var16->unknown_14_;
                    while(var18) {
                        short* var19=var18->unknown_e_;
                        for(int var20=0;var20<var18->unknown_17_;var19++,var20++) { if(*var19==*var4) { var15=1; break; } }
                        if(var15) break;
                        var18=var18->unknown_20_;
                    }
                }
            } else if(arg0->unknown_260_) {
                if(arg0->unknown_262_==*var4 || arg0->unknown_263_==*var4) var15=1;
            }
        }
        if(var14<=var9 && !var15) {
            if((!func_02049fc0(var6) && var6->obj3D_.GetOwnAlpha()>0) || (func_02049fc0(var6) && func_02049fec((char*)var6)>0.0f))
                func_02049f50((Struct_02049f50*)var6,0,var3);
        } else {
            if(var14>=var10 || var3==0 || var15) {
                if(var3==0 || (!func_02049fc0(var6) && var6->obj3D_.GetOwnAlpha()<31) || (func_02049fc0(var6) && func_02049fec((char*)var6)<31.0f))
                    func_02049f50((Struct_02049f50*)var6,31,var3);
            }
        }
    }
}
