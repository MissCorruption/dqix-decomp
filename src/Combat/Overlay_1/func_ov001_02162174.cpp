#include <globaldefs.h>
#include "World/Object3D.h"
#include "Resource/GameResources.h"

extern "C" int func_ov017_021d60f4(void*);
extern "C" int func_ov017_021bdbc0(unsigned char* arg0);
extern "C" int func_ov017_021bdbcc(void*);

// USA: func_ov001_02162174
extern "C" ARM int func_ov001_02162174(void* arg0, int arg1) {
	int var0;
	unsigned char* var1;
	int var2 = func_ov017_021d60f4(arg0);
	var0 = 0;
	if (arg1 >= 2) var0 = func_ov017_021d60f4((char*)arg0 + 0x8);
	var1 = (unsigned char*)GetGameResources();
	if (var0 == 0 || (var0 & 1)) {
		int var3 = func_ov017_021bdbc0(var1);
		if (var3 != 0) {
			if (var2 != 0) ((Object3D*)((void*)var3))->MakeVisible();
			else ((Object3D*)((void*)var3))->MakeHidden();
		}
	}
	if (var0 & 2) {
		int var4 = func_ov017_021bdbcc(var1);
		if (var4 != 0) {
			if (var2 != 0) ((Object3D*)((void*)var4))->MakeVisible();
			else ((Object3D*)((void*)var4))->MakeHidden();
		}
	}
	return 1;
}
