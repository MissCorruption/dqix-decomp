struct Struct_0204b9b8 { char unknown_0_[0x14]; unsigned short (*unknown_14_)[32]; };
// USA: func_0204b9b8
extern "C" void func_0204b9b8(Struct_0204b9b8* arg0,int arg1,int arg2,int arg3,int arg4,unsigned arg5) {
 unsigned short (*var0)[32]=arg0->unknown_14_;
 if(!var0)return;
 if(arg1+arg3<0 || arg2+arg4<0)return;
 if(arg1>=32 || arg2>=25)return;
 if(arg5>15)return;
 if(arg1<0){arg3=(short)(arg1+arg3);arg1=0;}else if(arg1+arg3>=32)arg3=(short)(32-arg1);
 if(arg2<0){arg4=arg4+arg2;arg4=(short)arg4;arg2=0;}else if(arg2+arg4>=25)arg4=(short)(25-arg2);
 unsigned short* var1=var0[arg2]+arg1;
 arg5=(unsigned short)(arg5<<12);
 int var2=0;
 unsigned short var3;
 while(var2<arg4) {
  var3=0;
  while(var3<arg3) {
   var1[var3]&=0xfff;
   var1[var3]|=arg5;
   var3=var3+1;
  }
  var1+=32;
  var2=(unsigned short)(var2+1);
 }
}
