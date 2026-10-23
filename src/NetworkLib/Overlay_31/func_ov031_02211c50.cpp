#include <globaldefs.h>

extern "C" void func_ov031_022167a8(int arg0);
extern int data_ov031_02249a14;
extern int data_ov031_02249a3c;
extern int data_ov031_02249a60;

// USA: func_ov031_02211c50
extern "C" ARM void func_ov031_02211c50(int arg0) {
	switch (arg0) {
		case 0: func_ov031_022167a8((int)&data_ov031_02249a14); break;
		case 1: func_ov031_022167a8((int)&data_ov031_02249a3c); break;
		case 2: func_ov031_022167a8((int)&data_ov031_02249a60); break;
	}
}
