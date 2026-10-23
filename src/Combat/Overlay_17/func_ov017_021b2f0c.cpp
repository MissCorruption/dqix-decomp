#include <globaldefs.h>
#include "Combat/BattleHeapOwner.h"

extern "C" void func_ov003_0217480c(void);

// USA: func_ov017_021b2f0c
extern "C" ARM void func_ov017_021b2f0c(void*) {
	if (data_ov017_021d840c != 0) {
		func_ov003_0217480c();
	}
}
