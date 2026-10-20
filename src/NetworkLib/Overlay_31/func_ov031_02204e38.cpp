#include <globaldefs.h>
#include <NitroSDK/Memory.h>

void SetPriorityAndApplyToContexts_0220057c(unsigned int priority);
void SetGlobal0224e540Field28_0220f0e4(int v);
void SetGlobal0224c980Field3c_02200524(int v);
extern "C" void func_ov031_02200298(void* settings);
extern "C" void func_ov031_02200aa0(void);
int CheckField0220f040_02205018(void);
void DrainList0224e230_02206c08(void);
void SetGlobal0224e1c0Flag2_02205000(void);
void CopyFieldsAndSetFlag_02204f94(void);

struct Config022496a4 {
	int mode;
	char pad4[0x14];
	void* (*alloc)(int);
	void (*free)(void*);
	char pad20[4];
	int bufferSize;
	void* buffer;
	int priority;
	int width;
	int height;
};
extern Config022496a4* data_ov031_022496a4;

struct Sizes022496c4 {
	unsigned short pad0;
	unsigned short height;
	unsigned short halfHeight;
	char pad6[0x12];
};
extern Sizes022496c4 data_ov031_022496c4;
extern int data_ov031_0224c9d0;

struct Settings0224e1d0 {
	int field0;
	void* (*alloc)(int);
	void (*free)(void*);
	void (*callback)(void);
	int (*check)(void);
	int field14;
	int field18;
	void* buffer;
	int bufferSize;
	int width;
	int field28;
	int field2c;
};

struct State0224e1c0 {
	int field0;
	int field4;
	int field8;
	int fieldc;
	Settings0224e1d0 settings;
};
extern State0224e1c0 data_ov031_0224e1c0;

enum OnFlag { ON_FLAG = 1 };

// USA: func_ov031_02204e38
extern "C" ARM void func_ov031_02204e38(void) {
	Settings0224e1d0* settings = &data_ov031_0224e1c0.settings;
	Config022496a4* cfg = data_ov031_022496a4;
	void* buffer;
	int width;
	int height;
	OnFlag on;

	VectorizedMemset(settings, 0, sizeof(Settings0224e1d0));
	data_ov031_0224e1c0.settings.alloc = cfg->alloc;
	data_ov031_0224e1c0.settings.free = cfg->free;
	data_ov031_0224e1c0.settings.check = CheckField0220f040_02205018;
	data_ov031_0224e1c0.settings.field14 = 0;
	data_ov031_0224e1c0.settings.field18 = 0;
	data_ov031_0224e1c0.settings.field2c = data_ov031_0224e1c0.field0;

	if (cfg->bufferSize != 0) {
		settings->bufferSize = cfg->bufferSize;
	} else {
		settings->bufferSize = 0x4000;
	}
	buffer = cfg->buffer;
	if (buffer == NULL) {
		buffer = data_ov031_022496a4->alloc(settings->bufferSize);
	}
	settings->buffer = buffer;

	width = cfg->width != 0 ? cfg->width : 0x240;
	height = cfg->height != 0 ? cfg->height : 0x10c0;
	data_ov031_022496c4.height = height;
	data_ov031_022496c4.halfHeight = height / 2;
	settings->width = width - 0x28;
	data_ov031_0224c9d0 = 0;

	on = ON_FLAG;
	if (cfg->mode != 0) {
		settings->field0 = 0;
		settings->callback = SetGlobal0224e1c0Flag2_02205000;
		data_ov031_0224e1c0.field8 = on;
		settings->field28 = data_ov031_0224e1c0.field4;
	} else {
		data_ov031_0224e1c0.field8 = 0;
		settings->field0 = on;
		settings->callback = CopyFieldsAndSetFlag_02204f94;
	}

	SetPriorityAndApplyToContexts_0220057c(cfg->priority != 0 ? cfg->priority : 0xb);
	SetGlobal0224e540Field28_0220f0e4((int)func_ov031_02200aa0);
	SetGlobal0224c980Field3c_02200524((int)DrainList0224e230_02206c08);
	func_ov031_02200298(settings);
}
