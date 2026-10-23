#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "GameState/GameState.h"
#include "Resource/Brightness.h"
#include "Resource/Script.h"
#include "Resource/GameResources.h"

extern signed char data_ov003_02180cd0;
extern const char data_ov003_02180bd8[];
extern Script::OpcodeLookupEntry data_ov003_02180bc8[];

struct Struct_ov003_0217be40 {
	char unknown_0_[0x12d];
	signed char unknown_12d_;
	char unknown_12e_[0x13c - 0x12e];
	int unknown_13c_;
	unsigned char unknown_140_;
	signed char unknown_141_;
};

// USA: func_ov003_0217be40
extern "C" ARM void func_ov003_0217be40(struct Struct_ov003_0217be40* arg0) {
	BackgroundLoader* var0 = BackgroundLoader::GetInstance();
	GameResources* var1 = GetGameResources();

	if (arg0->unknown_141_ == 0) {
		GameState::GetInstance();
		if (arg0->unknown_12d_ >= 0) {
			data_ov003_02180cd0 = arg0->unknown_12d_;
			arg0->unknown_13c_ = var0->QueueLoadFile(data_ov003_02180bd8, NULL);
			SetBrightness(var1, -16, 10);
			arg0->unknown_141_++;
		}
	} else if (arg0->unknown_141_ == 1) {
		if (var0->GetTaskStatus(arg0->unknown_13c_) != 0) {
			void* var2;
			unsigned int var3;
			Script var4;
			if (var0->GetDetailedTaskStatus(arg0->unknown_13c_) != 2) {
				var0->RemoveTask(arg0->unknown_13c_);
				arg0->unknown_140_ = 4;
				arg0->unknown_141_ = 0;
			}
			var0->GetLoadedFileByID(arg0->unknown_13c_, &var2, &var3);
			var4.Initialize();
			var4.SetOpcodeLookup(data_ov003_02180bc8);
			var4.Load(var2, var3);
			var4.Execute();
			arg0->unknown_140_ = 1;
			arg0->unknown_141_ = 0;
		}
	}
}
