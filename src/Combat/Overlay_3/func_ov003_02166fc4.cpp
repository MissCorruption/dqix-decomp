#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02166fc4_804=0x20c, Enum_ov003_02166fc4_1124=0x28c, Enum_ov003_02166fc4_1213=0x2e5, Enum_ov003_02166fc4_54=0x2a, Enum_ov003_02166fc4_21=20 };
#else
enum { Enum_ov003_02166fc4_804=0x324, Enum_ov003_02166fc4_1124=0x464, Enum_ov003_02166fc4_1213=0x4bd, Enum_ov003_02166fc4_54=0x36, Enum_ov003_02166fc4_21=21 };
#endif
struct Struct_0204b010_2 { char unknown_0_[Enum_ov003_02166fc4_54]; short unknown_36_; short inline_ov003_02166fc4() const { return unknown_36_; } };
struct Struct_ov003_02166fc4 { char unknown_0_[0x40]; char unknown_40_[1]; };
struct Struct_ov003_02166fc4_2 {
 char unknown_0_[Enum_ov003_02166fc4_804]; Struct_0204b010_2* unknown_324_; Struct_ov003_02166fc4* unknown_328_;
 char unknown_32c_[Enum_ov003_02166fc4_1124-Enum_ov003_02166fc4_804-8]; unsigned int unknown_464_;
 char unknown_468_[Enum_ov003_02166fc4_1213-Enum_ov003_02166fc4_1124-4]; unsigned char unknown_4bd_;
};
struct Struct_0204b010;
extern "C" void func_0204b010(Struct_0204b010*, void*);
extern "C" void func_0204bc74(void*,int,int,int,int,int,int);
struct Struct_0204b8d0;
extern "C" void func_0204b8d0(Struct_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);
extern "C" void func_0204b04c(void*,int);
// USA: func_ov003_02166fc4
extern "C" ARM void func_ov003_02166fc4(Struct_ov003_02166fc4_2* arg0) {
 Struct_ov003_02166fc4* var0=arg0->unknown_328_;
 if((arg0->unknown_464_&0x80000) || (arg0->unknown_464_&0x100000) || (arg0->unknown_464_&0x200000) || (arg0->unknown_464_&0x800000)) {
  func_0204b010((Struct_0204b010*)var0->unknown_40_, 0);
  if(arg0->unknown_464_&0x80000) {
   func_0204bc74(var0->unknown_40_,0,0,0,32,25,0);
   arg0->unknown_464_|=0x40000;arg0->unknown_464_&=~0x80000;
  }
  if(arg0->unknown_464_&0x100000) {
   func_0204b8d0((Struct_0204b8d0*)var0->unknown_40_, 0, 0, 0, 0, 0, 32, 12, 0xffff);
   arg0->unknown_464_|=0x40000;arg0->unknown_464_&=~0x100000;
  }
  if(arg0->unknown_464_&0x200000) {
   func_0204b8d0((Struct_0204b8d0*)var0->unknown_40_, 1, 0, 0, 11, 0, Enum_ov003_02166fc4_21, 2, 0xffff);
   arg0->unknown_464_|=0x40000;arg0->unknown_464_&=~0x200000;
  }
  if(arg0->unknown_464_&0x400000) {
   short var1=arg0->unknown_324_->inline_ov003_02166fc4();
   short var2=var1-arg0->unknown_4bd_;
   short var3=(var2%4)*2+2;
   func_0204b8d0((Struct_0204b8d0*)var0->unknown_40_, 2, 0, 0, 2, var3, 28, 2, 0xffff);
   arg0->unknown_464_|=0x40000;arg0->unknown_464_&=~0x400000;
  }
  if(arg0->unknown_464_&0x800000) {
   func_0204b8d0((Struct_0204b8d0*)var0->unknown_40_, 3, 0, 0, 3, 10, 1, 2, 0xffff);
   func_0204b8d0((Struct_0204b8d0*)var0->unknown_40_, 4, 0, 0, 28, 10, 1, 2, 0xffff);
   arg0->unknown_464_|=0x40000;arg0->unknown_464_&=~0x800000;
  }
  if(arg0->unknown_464_&0x40000) func_0204b04c(var0->unknown_40_,0);
 }
}
