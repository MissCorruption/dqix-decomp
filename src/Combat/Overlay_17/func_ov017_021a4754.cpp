#include <globaldefs.h>
#include "NitroSDK/Matrix.h"

struct Struct_ov009_0218aa28 { int unknown_0_, unknown_4_, unknown_8_; };
extern "C" short func_ov017_021a4700(struct Struct_ov009_0218aa28* arg0, int arg1, struct Struct_ov009_0218aa28* arg2);
int fix32abs(int x);

// USA: func_ov017_021a4754
extern "C" ARM short func_ov017_021a4754(Vector3fix* arg0, int arg1, Vector3fix* arg2) {
	struct Struct_ov009_0218aa28* var0 = (struct Struct_ov009_0218aa28*)arg0;
	struct Struct_ov009_0218aa28* var1 = (struct Struct_ov009_0218aa28*)arg2;
	return (short)fix32abs(func_ov017_021a4700(var0, arg1, var1));
}
