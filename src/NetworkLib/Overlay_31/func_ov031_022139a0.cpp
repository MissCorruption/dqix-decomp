extern "C" void func_ov031_02213a68(int, void*, int, unsigned char*);
extern "C" void func_ov031_02213ab4(int, void*, int, unsigned char*);
// USA: func_ov031_022139a0
extern "C" int func_ov031_022139a0(int arg0, void* arg1, int arg2, unsigned char* arg3) {
 unsigned char* var0=(unsigned char*)arg1;
 int var1;
 unsigned char* var2;
 unsigned char var3;
 int var4;
 int var5;
 var5=arg3[0xd12];
 var4=-1;
 var1=0;
 if(var5>0) {
 var3=var0[4];
 var2=arg3+0x474;
 do {
  if(var3==var2[0] && var0[5]==var2[1] && var0[6]==var2[2] && var0[7]==var2[3] && var0[8]==var2[4] && var0[9]==var2[5]) { var4=var1; break; }
  var1++; var2+=0xc0;
 } while(var1<var5);
 }
 if(var4==-1) {
  func_ov031_02213a68((unsigned char)arg0,arg1,arg2,arg3);
  if(arg3[0xd12]<10) arg3[0xd12]++;
  var4=10;
 } else func_ov031_02213ab4(var4,arg1,arg2,arg3);
 return var4;
}
