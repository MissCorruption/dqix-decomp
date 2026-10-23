#include <globaldefs.h>

typedef void (*Fn02219080)(void*, void*, int);

struct Ctx02219080 {
	char pad[0x110c];
	Fn02219080 handler;
	int pad1110;
	void* field1114;
	void* field1118;
};
struct Data0224e60c { Ctx02219080* field0; char pad[0x10]; void* field14; };
extern Data0224e60c data_ov031_0224e60c;
extern int data_ov031_0224a05c;
extern int data_ov031_0224a06c;
extern int data_ov031_0224a088;
extern int data_ov031_0224a0a8;

extern "C" void func_ov031_022183b4(void*);
extern "C" void func_ov031_02216a2c(void);

// USA: func_ov031_02219080
extern "C" ARM void func_ov031_02219080(void) {
	Fn02219080 fn = data_ov031_0224e60c.field0->handler;
	if (data_ov031_0224e60c.field14 != 0) {
		func_ov031_022183b4(data_ov031_0224e60c.field14);
		fn(&data_ov031_0224a05c, data_ov031_0224e60c.field14, 0);
		data_ov031_0224e60c.field14 = 0;
	}
	func_ov031_02216a2c();
	if (data_ov031_0224e60c.field0 == 0) return;
	if (data_ov031_0224e60c.field0->field1114 != 0) {
		fn(&data_ov031_0224a06c, data_ov031_0224e60c.field0->field1114, 0);
		data_ov031_0224e60c.field0->field1114 = 0;
	}
	if (data_ov031_0224e60c.field0->field1118 != 0) {
		fn(&data_ov031_0224a088, data_ov031_0224e60c.field0->field1118, 0);
		data_ov031_0224e60c.field0->field1118 = 0;
	}
	fn(&data_ov031_0224a0a8, data_ov031_0224e60c.field0, 0);
	data_ov031_0224e60c.field0 = 0;
}
