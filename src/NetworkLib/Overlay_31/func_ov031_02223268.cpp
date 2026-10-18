#include <globaldefs.h>

struct ElemArray_0223baa0;
struct Elem8_0223baa0;
struct Obj0223bcc8;

struct Ctx02223268 {
	ElemArray_0223baa0* item[4];
	void* item10;
	unsigned short field14;
	signed char field16;
	unsigned char type;
};
extern Ctx02223268* data_ov031_02250ba8;
extern unsigned char data_ov031_02248940[];
extern unsigned char data_ov031_02248924[][2];

extern "C" Elem8_0223baa0* func_ov031_0223baa0(ElemArray_0223baa0* obj, int idx);
extern "C" void func_ov031_0223bdb0(int a, int b, void* c);
ARM void SetEntryHalfword4Bits_0223bcc8(Obj0223bcc8* obj, int idx, int val);
extern "C" ARM void func_ov031_02222eb0(void* obj);
extern "C" ARM void func_ov031_0223e2c0(int a, int b);

// USA: func_ov031_02223268
extern "C" ARM void func_ov031_02223268(int param) {
	data_ov031_02250ba8->field14++;
	if (data_ov031_02250ba8->field14 < 16) return;
	int count = data_ov031_02248940[data_ov031_02250ba8->type];
	int i = 0;
	if (count > 0) {
		do {
			unsigned char v = data_ov031_02248924[data_ov031_02250ba8->type][i];
			Elem8_0223baa0* elem = func_ov031_0223baa0(data_ov031_02250ba8->item[i], 0);
			func_ov031_0223bdb0(0, v, elem);
			SetEntryHalfword4Bits_0223bcc8((Obj0223bcc8*)data_ov031_02250ba8->item[i], -1, 1);
			i++;
		} while (i < count);
	}
	func_ov031_02222eb0((void*)0xa8);
	data_ov031_02250ba8->field14 = 0;
	data_ov031_02250ba8->field16 = -1;
	if (data_ov031_02250ba8->item10) {
		data_ov031_02250ba8->item10 = 0;
		func_ov031_0223e2c0(0, param);
	}
}
