#include <globaldefs.h>

extern "C" void* func_ov011_021849c8(void*);
extern "C" void* func_ov023_021f6880(void*, int);
#if defined(jpn)
extern "C" int func_ov023_021f6f10(void* arg0);
#else
extern "C" int func_ov024_021f6f10(void* arg0);
#endif
extern char* data_ov004_021707c0; // pointer to struct with fields at 0x78 (short), 0x7a (short)
extern "C" short func_ov004_021537e0(void);
extern "C" short func_ov004_02153860(void);
extern "C" short func_ov004_021538f0(void);

// Real virtual calls: index 0x3c/4=15 (MethodNotify), index 0xec/4=59 (CallEc).
class Struct_ov004_02154c78 {
public:
	virtual void inline_ov004_02154c78_43(); virtual void inline_ov004_02154c78_44(); virtual void inline_ov004_02154c78_45(); virtual void inline_ov004_02154c78_46();
	virtual void inline_ov004_02154c78_47(); virtual void inline_ov004_02154c78_48(); virtual void inline_ov004_02154c78_49(); virtual void inline_ov004_02154c78_50();
	virtual void inline_ov004_02154c78_51(); virtual void inline_ov004_02154c78_52(); virtual void inline_ov004_02154c78_53(); virtual void inline_ov004_02154c78_54();
	virtual void inline_ov004_02154c78_55(); virtual void inline_ov004_02154c78_56(); virtual void inline_ov004_02154c78_57();
	virtual void inline_ov004_02154c78_58(int arg0);
	virtual void inline_ov004_02154c78_59(); virtual void inline_ov004_02154c78_60(); virtual void inline_ov004_02154c78(); virtual void inline_ov004_02154c78_2();
	virtual void inline_ov004_02154c78_3(); virtual void inline_ov004_02154c78_4(); virtual void inline_ov004_02154c78_5(); virtual void inline_ov004_02154c78_6();
	virtual void inline_ov004_02154c78_7(); virtual void inline_ov004_02154c78_8(); virtual void inline_ov004_02154c78_9(); virtual void inline_ov004_02154c78_10();
	virtual void inline_ov004_02154c78_11(); virtual void inline_ov004_02154c78_12(); virtual void inline_ov004_02154c78_13(); virtual void inline_ov004_02154c78_14();
	virtual void inline_ov004_02154c78_15(); virtual void inline_ov004_02154c78_16(); virtual void inline_ov004_02154c78_17(); virtual void inline_ov004_02154c78_18();
	virtual void inline_ov004_02154c78_19(); virtual void inline_ov004_02154c78_20(); virtual void inline_ov004_02154c78_21(); virtual void inline_ov004_02154c78_22();
	virtual void inline_ov004_02154c78_23(); virtual void inline_ov004_02154c78_24(); virtual void inline_ov004_02154c78_25(); virtual void inline_ov004_02154c78_26();
	virtual void inline_ov004_02154c78_27(); virtual void inline_ov004_02154c78_28(); virtual void inline_ov004_02154c78_29(); virtual void inline_ov004_02154c78_30();
	virtual void inline_ov004_02154c78_31(); virtual void inline_ov004_02154c78_32(); virtual void inline_ov004_02154c78_33(); virtual void inline_ov004_02154c78_34();
	virtual void inline_ov004_02154c78_35(); virtual void inline_ov004_02154c78_36(); virtual void inline_ov004_02154c78_37(); virtual void inline_ov004_02154c78_38();
	virtual void inline_ov004_02154c78_39(); virtual void inline_ov004_02154c78_40(); virtual void inline_ov004_02154c78_41();
	virtual void inline_ov004_02154c78_42();
};

// USA: func_ov004_02154c78
extern "C" ARM int func_ov004_02154c78(void* arg0) {
	Struct_ov004_02154c78* var0 = (Struct_ov004_02154c78*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x39);
	if (!var0) return 0;
#if defined(jpn)
	if (func_ov023_021f6f10(var0) != 0x12) return 0;
#else
	if (func_ov024_021f6f10(var0) != 0x12) return 0;
#endif

	var0->inline_ov004_02154c78_42();
	if (!var0) return 0;

	if (*(short*)(data_ov004_021707c0 + 0x7a) == 0) {
		Struct_ov004_02154c78* var1 = (Struct_ov004_02154c78*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1a);
		if (var1) var1->inline_ov004_02154c78_58(0);
	}

	if (func_ov004_021537e0() == 0) {
		Struct_ov004_02154c78* var2 = (Struct_ov004_02154c78*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1b);
		if (var2) var2->inline_ov004_02154c78_58(0);
	}

	if (func_ov004_02153860() == 0) {
		Struct_ov004_02154c78* var3 = (Struct_ov004_02154c78*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1c);
		if (var3) var3->inline_ov004_02154c78_58(0);
	}

	if (func_ov004_021538f0() == 0) {
		Struct_ov004_02154c78* var4 = (Struct_ov004_02154c78*)func_ov023_021f6880(func_ov011_021849c8(arg0), 0x1d);
		if (var4) var4->inline_ov004_02154c78_58(0);
	}

	return 0;
}
