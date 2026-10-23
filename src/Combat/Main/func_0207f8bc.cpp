#include <globaldefs.h>
#include "Combat/MenuNodeChain.h"
#include "Filesystem/BackgroundLoader.h"

struct BackgroundLoader;

// USA: func_0207f8bc
extern "C" ARM void func_0207f8bc(Struct_0207f7f0 *arg0) {
	if (arg0->unknown_1c_ >= 0) {
		BackgroundLoader *var0 = BackgroundLoader::GetInstance();
		var0->RemoveTask(arg0->unknown_1c_);
	}

#if !defined(jpn)
	for (int var1 = 0; var1 < 3; var1++) {
		BackgroundLoader *var2 = BackgroundLoader::GetInstance();
		int var3 = arg0->unknown_20_[var1];
		if (var3 >= 0) {
			var2->RemoveTask(var3);
		}
	}
#endif

	func_0207f84c(arg0);
}
