#include <globaldefs.h>
#include "Util/Random.h"

struct Wrapper_02203120 { unsigned char pad[0x68]; struct Random rng; };
extern "C" struct Wrapper_02203120 _ZZ18GetGlobal_02201364vE1s;

// USA: func_ov031_02203120  (semantic: AdvanceEmbeddedRandom_02203120)
extern "C" ARM unsigned int func_ov031_02203120(void) {
	_ZZ18GetGlobal_02201364vE1s.rng.lcg_state = _ZZ18GetGlobal_02201364vE1s.rng.lcg_multiplier * _ZZ18GetGlobal_02201364vE1s.rng.lcg_state + _ZZ18GetGlobal_02201364vE1s.rng.lcg_increment;
	return _ZZ18GetGlobal_02201364vE1s.rng.lcg_state >> 32u;
}
