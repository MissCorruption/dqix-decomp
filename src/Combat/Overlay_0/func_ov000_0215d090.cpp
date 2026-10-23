#include <globaldefs.h>
#include "std_library_functions.h"
struct Struct_ov000_02157d14;
extern "C" void func_ov000_02157d14(Struct_ov000_02157d14*);
extern "C" void func_ov000_02157cdc(void*);
extern "C" void func_ov000_02160030(void*);
// USA: func_ov000_0215d090
extern "C" ARM void func_ov000_0215d090(unsigned char* arg0) {
    arg0[0x8e00]=0; arg0[0x8e01]=0; arg0[0x8e02]=0; arg0[0x8e03]=0;
    arg0[0x8e82]=0;
    *(unsigned short*)(arg0+0x8e52)=0; *(short*)(arg0+0x8e50)=-1;
    arg0[0x8e83]=0; *(int*)(arg0+0x8e58)=0;
    arg0[0x8e0c]=0; arg0[0x8e0d]=0; arg0[0x8e0e]=0; arg0[0x8e0b]=0;
    arg0[0x8e08]=0; arg0[0x8e09]=0; arg0[0x8e0a]=0; arg0[0x8e0f]=0;
    arg0[0x8e11]=0; arg0[0x8e12]=0; arg0[0x8e10]=0; arg0[0x8e13]=0;
    arg0[0x8e96]=0; *(int*)(arg0+0x8e24)=0; *(unsigned short*)(arg0+0x8e6e)=0;
    for(int var0=0;var0<0x48;var0++) func_ov000_02157d14((Struct_ov000_02157d14*)(arg0+0x20+var0*0x34));
    for(int var1=0;var1<0x88;var1++) func_ov000_02157cdc(arg0+0xec0+var1*0x24);
    for(int var2=0;var2<0x168;var2++) { memset(arg0+0x21e0+var2*0x24,0,0x20); *(int*)(arg0+0x2200+var2*0x24)=0; }
    for(int var3=0;var3<0xfc;var3++) { *(short*)(arg0+0x5480+var3*8)=0; *(int*)(arg0+0x5484+var3*8)=0; }
    for(int var4=0;var4<0x48;var4++) func_ov000_02160030(arg0+0x821c+var4*0x28);
    for(int var5=0;var5<0x14;var5++) func_ov000_02157d14((Struct_ov000_02157d14*)(arg0+0x6380+var5*0x34));
    for(int var6=0;var6<0x14;var6++) func_ov000_02157cdc(arg0+0x6790+var6*0x24);
    for(int var7=0;var7<0x14;var7++) { memset(arg0+0x6a60+var7*0x24,0,0x20); *(int*)(arg0+0x6a80+var7*0x24)=0; }
    for(int var8=0;var8<0x14;var8++) func_ov000_02160030(arg0+0x6060+var8*0x28);
    for(int var9=0;var9<0x10;var9++) func_ov000_02157d14((Struct_ov000_02157d14*)(arg0+0x6fb0+var9*0x34));
    for(int var10=0;var10<0x10;var10++) func_ov000_02157cdc(arg0+0x72f0+var10*0x24);
    for(int var11=0;var11<0x10;var11++) { memset(arg0+0x7530+var11*0x24,0,0x20); *(int*)(arg0+0x7550+var11*0x24)=0; }
    for(int var12=0;var12<0x10;var12++) func_ov000_02160030(arg0+0x6d30+var12*0x28);
    for(int var13=0;var13<0x10;var13++) {
        func_ov000_02160030(arg0+0x7770+var13*0x28);
        func_ov000_02157d14((Struct_ov000_02157d14*)(arg0+0x79f0+var13*0x34));
        func_ov000_02157cdc(arg0+0x7d30+var13*0x24);
        memset(arg0+0x7f70+var13*0x24,0,0x20);
        *(int*)(arg0+0x7f90+var13*0x24)=0;
    }
    *(int*)(arg0+0x8e70)=0; arg0[0x8e80]=0;
    *(int*)(arg0+0x8e74)=0; arg0[0x8e81]=0;
    *(int*)(arg0+0x8e78)=0; *(int*)(arg0+0x8e7c)=0;
}
