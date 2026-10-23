#include <globaldefs.h>

extern "C" int func_ov031_02206ce8(void* arg0);
extern "C" int func_ov031_022068cc(void* arg0);
extern "C" int func_ov031_02206900(void* arg0);
extern "C" void func_ov031_02206c08(void);
extern "C" int func_ov031_022004d4(void);
extern "C" void func_ov031_0220f0e4(int arg0);

extern void* data_ov031_0224e1cc;

// USA: func_ov031_02206d90
extern "C" ARM int func_ov031_02206d90(void) {
	int var0;
	void* var1 = data_ov031_0224e1cc;
	if (var1) {
		var0 = func_ov031_02206ce8(var1);
		if (var0 == 0) {
			func_ov031_02206900(data_ov031_0224e1cc);
			if (func_ov031_022068cc(data_ov031_0224e1cc) != 0) {
				data_ov031_0224e1cc = 0;
			}
			var0 = -26;
		}
		func_ov031_02206c08();
	} else {
		if (func_ov031_022004d4() == 0) {
			var0 = -26;
		} else {
			func_ov031_0220f0e4(0);
			var0 = 0;
		}
	}
	return var0;
}
