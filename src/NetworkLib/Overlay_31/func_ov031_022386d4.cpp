#include <globaldefs.h>

struct OwnerInfo_022386d4 {
	unsigned char language;
	unsigned char favoriteColor;
	unsigned char month;
	unsigned char day;
	unsigned short nickName[11];
	unsigned short nickNameLength;
	unsigned short comment[27];
	unsigned short commentLength;
};

struct UserInfo_022386d4 {
	unsigned char favoriteColor : 4;
	unsigned char playerNo : 4;
	unsigned char nameLength;
	unsigned short name[10];
};

struct Flags_022386d4 {
	unsigned short v[7];
};

struct Ctx_022386d4 {
	struct Flags_022386d4 flags;
	char pad0[0x40 - 0xe];
	char buf[0x10000];
	char work[0x1b140 - 0x10040];
	void* workPtr;
};

extern struct Ctx_022386d4* data_ov031_02290d14;

extern "C" void func_020c99c8(void* out);
extern "C" void* VectorizedInvertedMemcpy(void* src, void* dst, int n);
extern "C" int func_ov027_021dc680(void* work, struct UserInfo_022386d4* user, void* ggid, unsigned short tgid, int dma);
extern "C" void func_020c9be0(void);
extern "C" int func_ov027_021dc8d4(int a, int b);
extern "C" void func_ov023_021d8a40(void* cb);
extern "C" void func_ov031_02238de4(void);
void SetGlobal02290d14_02239108(unsigned short v);

// USA: func_ov031_022386d4
extern "C" ARM void func_ov031_022386d4(void* ggid, unsigned short tgid) {
	struct OwnerInfo_022386d4 info;
	struct UserInfo_022386d4 user;
	func_020c99c8(&info);
	user.favoriteColor = info.favoriteColor;
	user.nameLength = info.nickNameLength;
	VectorizedInvertedMemcpy(info.nickName, user.name, info.nickNameLength * 2);
	user.playerNo = 0;
	struct Flags_022386d4 flags = {0};
	data_ov031_02290d14->flags = flags;
	data_ov031_02290d14->workPtr = data_ov031_02290d14->work;
	if (func_ov027_021dc680(data_ov031_02290d14->workPtr, &user, ggid, tgid, 2) != 0) {
		func_020c9be0();
	}
	func_ov027_021dc8d4(0x100, 1);
	func_ov023_021d8a40((void*)func_ov031_02238de4);
	SetGlobal02290d14_02239108(1);
}
