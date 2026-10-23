#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/GamecardBusOwnership.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct Struct_ov031_0223b324_2 {
	void* unknown_0_;
	unsigned char unknown_4_[0x84 - 4];
	void* unknown_84_;
	NitroHandle unknown_88_;
	unsigned short unknown_e4_;
};
struct Struct_ov031_02290d24 { Struct_ov031_0223b324_2* unknown_0_; };
extern struct Struct_ov031_02290d24 data_ov031_02290d24;

extern "C" int func_ov031_0223b560(NitroVM* arg0, int arg1);
extern "C" int func_ov031_0223b614(NitroHandle*, const void*, unsigned int, unsigned int);
extern "C" ARM int func_ov031_0223b5c4(NitroHandle* arg0, void* arg1, unsigned int arg2, unsigned int arg3);

extern "C" ARM void* func_ov031_0223cf4c(unsigned int arg0, int arg1);
extern "C" void func_020c9be0(void);
extern "C" ARM void* func_ov031_0223beec(int arg0, int arg1, int arg2);
extern "C" int func_020c7130(char*, const char*, ...);

extern const char data_ov031_0224c544[];
extern const char data_ov031_0224939c[];
extern const char data_ov031_0224c55c[];

struct Struct_ov031_0223b324 { unsigned int unknown_0_; unsigned int unknown_4_; };

// USA: func_ov031_0223b324
extern "C" ARM void func_ov031_0223b324(void) {
	data_ov031_02290d24.unknown_0_ = (Struct_ov031_0223b324_2*)func_ov031_0223cf4c(0xe8, 4);

	NitroVM var0;
	NitroVM_Initialize(&var0);
	if (!NitroVM_PrepareReadFileByPath(&var0, data_ov031_0224c544))
		func_020c9be0();

	data_ov031_02290d24.unknown_0_->unknown_e4_ = GenerateLockOwnerID();
	void* var1 = (void*)var0.fileInfo.unknown_4_;
	Struct_ov031_0223b324 var2;
	NitroVM_ReadSync(&var0, &var2, 8);
	Struct_ov031_0223b324 var3;
	NitroVM_ReadSync(&var0, &var3, 8);
	NitroVM_FinishRead(&var0);

	NitroHandle_Initialize(&data_ov031_02290d24.unknown_0_->unknown_88_);
	if (!NitroHandle_AddToHandleList(&data_ov031_02290d24.unknown_0_->unknown_88_, data_ov031_0224939c, 3))
		func_020c9be0();

	NitroHandle_SetOpcodeOverride(&data_ov031_02290d24.unknown_0_->unknown_88_, func_ov031_0223b560, 0x602);

	if (!NitroHandle_Populate(&data_ov031_02290d24.unknown_0_->unknown_88_, var1,
			var3.unknown_0_, var3.unknown_4_, var2.unknown_0_, var2.unknown_4_,
			func_ov031_0223b5c4, func_ov031_0223b614))
		func_020c9be0();

	unsigned int var4 = NitroHandle_LoadFileTables(&data_ov031_02290d24.unknown_0_->unknown_88_, NULL, 0);
	data_ov031_02290d24.unknown_0_->unknown_0_ = func_ov031_0223cf4c(var4, 4);
	NitroHandle_LoadFileTables(&data_ov031_02290d24.unknown_0_->unknown_88_, data_ov031_02290d24.unknown_0_->unknown_0_, var4);

	data_ov031_02290d24.unknown_0_->unknown_84_ = func_ov031_0223beec(0x20, (int)data_ov031_02290d24.unknown_0_ + 4, 4);

	char var5[0x80];
	func_020c7130(var5, data_ov031_0224c55c, data_ov031_0224939c);
	SetROMFilesystemRoot(var5);
}
