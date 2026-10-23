#include <globaldefs.h>
extern "C" int func_020db2dc(int,int);
struct Struct_020db6e4 {
 unsigned int unknown_0_;
 union { unsigned short unknown_0_; struct { unsigned short unknown_0_0_:10; unsigned short unknown_1_2_:2; unsigned short unknown_1_4_:4; } unknown1_0_; } unknown_4_;
 unsigned short unknown_6_;
};
// USA: func_020db6e4
extern "C" ARM void func_020db6e4(unsigned char* arg0, unsigned short arg1) {
 Struct_020db6e4* var0=(Struct_020db6e4*)func_020db2dc((int)arg0,arg0[0x3c]);
 arg1|=0xf800;
 for(int var1=0;var1<3;++var1) {
  for(int var2=0;var2<4;++var2) {
   int var3=var2+var1*4+0x10;
   var0[var3].unknown_0_=0xc0000000|((var1<<6)&0xff)|((unsigned)(var2<<29)>>7);
   var0[var3].unknown_4_.unknown_0_=arg1;
   var0[var3].unknown_4_.unknown1_0_.unknown_1_2_=2;
  }
 }
}
