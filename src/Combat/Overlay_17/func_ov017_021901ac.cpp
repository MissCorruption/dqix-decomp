#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

struct Struct_02072e34;
extern "C" void func_02072e34(int arg0, struct Struct_02072e34* arg1);

extern int data_ov017_021d61c0[7];

// USA: func_ov017_021901ac
extern "C" ARM void func_ov017_021901ac(void) {
	GameState* var0 = GameState::GetInstance();
	int var1[11];
	for (int var2 = 0; var2 < 4; var2++) {
		func_02072e34(var2, (struct Struct_02072e34*)var1);
		for (int var3 = 0; var3 < 7; var3++) {
			int var4 = var1[data_ov017_021d61c0[var3]];
			GameObject* var5 = var0->GetGameObjectByIndex(var4);
			if (var5 != NULL) {
				unsigned char* var6 = *(unsigned char**)((char*)var5 + 8);
				if (var6 != NULL) {
					((Model3D*)var6)->CreateBoneMatrixAndMaterialArrays(NULL, 0);
				}
			}
		}
	}
}
