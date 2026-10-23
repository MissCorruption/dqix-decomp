extern "C" long long func_020c30ac(long long);
extern "C" long long func_020c3194(long long);
// USA: func_020c32f8
extern "C" long long func_020c32f8(int arg0) {
 if(arg0<0) return func_020c32f8(-arg0);
 long long var0=arg0; var0*=0x145f306ddLL; var0>>=12;
 int var1=(int)(var0>>32);
 long long var2=var0 & 0xffffffffLL;
 if(var1&1) var2=0x100000000LL-var2;
 long long var3;
 if((var1+1)&2) var3=func_020c30ac(var2);
 else var3=func_020c3194(var2);
 if(((var1+2) & 7)>3) return -var3;
 return var3;
}
