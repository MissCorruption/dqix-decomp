#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct Entry { unsigned char unknown_0_, unknown_1_, unknown_2_; unsigned char unknown_3_; };
extern "C" void func_020ca408(const void*, void*, unsigned);
// USA: func_ov031_02213ab4
extern "C" void func_ov031_02213ab4(int arg0, void* arg1, int arg2, unsigned char* arg3) {
 Entry* var0=(Entry*)(arg3+0x444);
 Entry* var1=var0+arg0;
 int var2=((unsigned short*)arg1)[1];
 unsigned char* var3=arg3+0x470+arg0*0xc0;
 unsigned int var4;
 if(var2&2) var4=(unsigned char)(var2>>2);
 else var4=(unsigned char)((var2>>2)+25);
 if((unsigned char)var4>var1->unknown_2_) { var1->unknown_2_=var4; var1->unknown_3_=(var1->unknown_3_ & ~0x7f) | (arg2 & 0x7f); }
 func_020ca408(arg1,var3,0xc0);
}
