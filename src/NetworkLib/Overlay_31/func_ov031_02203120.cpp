#include <globaldefs.h>
#include "Util/Random.h"

struct Struct_ov031_0224c980_5 { unsigned char unknown_0_[0x68]; struct Random unknown_68_; };
extern struct Struct_ov031_0224c980_5 data_ov031_0224c980;

// USA: func_ov031_02203120
extern "C" ARM unsigned int func_ov031_02203120(void) {
	data_ov031_0224c980.unknown_68_.lcg_state = data_ov031_0224c980.unknown_68_.lcg_multiplier * data_ov031_0224c980.unknown_68_.lcg_state + data_ov031_0224c980.unknown_68_.lcg_increment;
	return data_ov031_0224c980.unknown_68_.lcg_state >> 32u;
}
