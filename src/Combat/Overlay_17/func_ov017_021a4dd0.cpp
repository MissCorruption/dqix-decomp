#include <globaldefs.h>
#include <Resource/GameResources.h>

struct Struct_0201bdac_2;
struct Struct_0201bdac;

extern signed char data_ov017_021d76d8;
extern "C" void func_ov017_021a967c(unsigned char* arg0, int arg1);
extern "C" void func_020469b4(Struct_0201bdac_2* arg0, Struct_0201bdac* arg1);

// USA: func_ov017_021a4dd0
extern "C" ARM void func_ov017_021a4dd0(GameResources* arg0) {
	Struct_0201bdac_2* var0 = (Struct_0201bdac_2*)arg0->unknown_ptr_array_36fc[0];
	Struct_0201bdac* var1 = (Struct_0201bdac*)arg0->unknown_ptr_array_3afc[34];
	signed char var2 = data_ov017_021d76d8;
	if (var2 < 0) {
		return;
	}
	func_ov017_021a967c((unsigned char*)var1, var2);
	func_020469b4(var0, var1);
}
