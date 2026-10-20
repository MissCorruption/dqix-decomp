#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#define func_020ca3ec func_020cbeb8
#endif

struct UserInfo021dc680 {
	unsigned char playerInfo;
	unsigned char nameLength;
	unsigned short name[10];
};

struct Param021dc680 {
	unsigned char pad0[8];
	unsigned int ggid;
	unsigned short tgid;
	unsigned short entryFlag;
	unsigned short maxEntry;
	unsigned short multiBootFlag;
	unsigned short KS_Flag;
	unsigned short CS_Flag;
	unsigned short beaconPeriod;
	unsigned char pad1a[0x500 - 0x1a];
	unsigned short p_sendlen;
	unsigned short p_recvlen;
	unsigned char* sendBuf;
	unsigned char pad508[4];
	unsigned char flag50c;
	unsigned char flag50d;
	unsigned char pad50e[0x518 - 0x50e];
	unsigned short sendBufSize;
	unsigned short recvBufSize;
	unsigned char pad51c[0x52c - 0x51c];
	unsigned short field52c;
	unsigned char pad52e[2];
	unsigned short userName[4];
	unsigned short gameName[16];
	unsigned char pad558[0x1e00 - 0x558];
};

struct PWork021dc680 {
	unsigned char pad0[0x400];
	unsigned char buf[0x1300 - 0x400];
	UserInfo021dc680 user;
	unsigned short is_started;
	int block_size_max;
	int field131c;
	unsigned char pad1320[0x1340 - 0x1320];
};

struct Ctx021dc680 {
	unsigned short dma;
	unsigned char* wmBuf;
	Param021dc680* param;
	PWork021dc680* pwork;
};

extern Ctx021dc680 data_ov027_021e33e0;

unsigned short data_ov027_021dd8ec = 5;
unsigned short data_ov027_021dd8f2 = 0xffff;
unsigned short data_ov027_021dd8f0 = 40;
unsigned short data_ov027_021dd8ee = 40;

static inline void SetNames_021dc680(Param021dc680* param, const UserInfo021dc680* user) {
	static const wchar_t* gameName = L"multiboot";
	int i;
	{
		unsigned short* dst = param->userName;
		for (i = 0; i < user->nameLength; i++) {
			*dst++ = user->name[i];
		}
	}
	{
		unsigned short* dst = param->gameName;
		for (i = 0; i < 16; i++) {
			unsigned short c = *gameName;
			if (c == 0) break;
			gameName++;
			*dst++ = c;
		}
	}
}

int data_ov027_021dd8f8 = 1;

unsigned short IncrementSlotIndex020d4dd4(void);
extern "C" void func_020ca3ec(int val, void* dst, unsigned int size);
extern "C" void func_020ca390(int val, void* dst, unsigned int size);
extern "C" unsigned int func_ov027_021dc618(void);

// USA: func_ov027_021dc680
extern "C" ARM int func_ov027_021dc680(void* work, const UserInfo021dc680* user, unsigned int ggid, unsigned int tgid, unsigned int dma) {
	Param021dc680* param;
	PWork021dc680* pwork;
	int enabled;

	if (data_ov027_021e33e0.pwork != 0 && data_ov027_021e33e0.pwork->is_started != 0) {
		return 2;
	}
	param = (Param021dc680*)(((unsigned int)work + 31) & ~31);
	pwork = (PWork021dc680*)(((unsigned int)param + sizeof(Param021dc680) + 31) & ~31);
	if (tgid == 0x10000) {
		tgid = IncrementSlotIndex020d4dd4();
	}
	enabled = DisableIRQInterrupts();
	data_ov027_021dd8f2 = 0xffff;
	data_ov027_021dd8ec = 5;
	data_ov027_021dd8ee = 40;
	data_ov027_021dd8f0 = 40;
	data_ov027_021dd8f8 = 1;
	data_ov027_021e33e0.dma = dma;
	data_ov027_021e33e0.param = param;
	data_ov027_021e33e0.pwork = pwork;
	func_020ca3ec(0, param, sizeof(Param021dc680));
	func_020ca390(0, pwork, sizeof(PWork021dc680));
	SetNames_021dc680(param, user);
	VectorizedInvertedMemcpy(user, &pwork->user, sizeof(UserInfo021dc680));
	if (user->nameLength < 10) {
		pwork->user.name[user->nameLength] = 0;
	}
	param->p_sendlen = 0x100;
	param->p_recvlen = 8;
	param->sendBufSize = 0;
	param->recvBufSize = 0;
	param->field52c = 1;
	param->sendBuf = pwork->buf;
	param->entryFlag = 0;
	param->multiBootFlag = 0;
	param->CS_Flag = 1;
	param->KS_Flag = 0;
	param->ggid = ggid;
	param->tgid = tgid;
	param->beaconPeriod = func_ov027_021dc618() + 200;
	param->maxEntry = 15;
	param->flag50c = 0;
	param->flag50d = 0;
	pwork->is_started = 1;
	pwork->field131c = 0;
	SetIRQInterruptState(enabled);
	return 0;
}
