#if defined(jpn)
#define func_020ca408 func_020cbed4
#endif

struct Entry { unsigned char unknown_0_, unknown_1_, unknown_2_; unsigned char unknown_3_; };
extern "C" void func_020ca408(const void*, void*, unsigned);
// USA: func_ov031_02213a68
extern "C" void func_ov031_02213a68(int arg0, void* arg1, int arg2, unsigned char* arg3) {
 Entry* var0=(Entry*)(arg3+0x46c);
 var0->unknown_1_=arg0;
 int var1=((unsigned short*)arg1)[1];
 unsigned char var2=(var1&2) ? (unsigned char)(var1>>2) : (unsigned char)((var1>>2)+25);
 var0->unknown_2_=var2;
 var0->unknown_3_=(var0->unknown_3_ & ~0x7f) | (arg2 & 0x7f);
 func_020ca408(arg1,arg3+0xbf0,0xc0);
}
