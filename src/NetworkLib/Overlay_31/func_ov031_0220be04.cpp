#include <globaldefs.h>

// USA: func_ov031_0220be04
extern "C" ARM void func_ov031_0220be04(unsigned short* arr, int carry, int i, int count) {
	while (carry != 0 && i < count) {
		int v = carry + arr[i];
		arr[i] = (unsigned short)v;
		i++;
		carry = (unsigned int)v >> 16;
	}
}
