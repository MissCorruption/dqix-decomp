#include <globaldefs.h>
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif

struct MBUserInfo02238de4 {
	unsigned char b0;
	unsigned char nameLength;
	unsigned short name[10];
};

struct ChildInfo02238de4 {
	struct MBUserInfo02238de4 user;
	unsigned char macAddress[6];
	unsigned short playerNo;
};

struct MBPState02238de4 {
	unsigned short state;
	unsigned short connectChildBmp;
	unsigned short requestChildBmp;
	unsigned short entryChildBmp;
	unsigned short downloadChildBmp;
	unsigned short bootableChildBmp;
	unsigned short rebootChildBmp;
};

struct Work02238de4 {
	struct MBPState02238de4 state;
	struct ChildInfo02238de4 child[15];
	unsigned char pad[0x1b140 - 0x1d0];
	void* buf140;
	void* buf144;
};

struct ConnectInfo02238de4 {
	unsigned short apiid;
	unsigned short errcode;
	unsigned short wlCmdID;
	unsigned short wlResult;
	unsigned short state;
	unsigned char macAddress[6];
};

struct ErrorInfo02238de4 {
	unsigned short errcode;
};

unsigned short GetGlobal02290d14_0223911c(void);
void SetGlobal02290d14_02239108(unsigned short v);
void CallOv027IfFieldsMatch_02238db4(void);
extern "C" int func_ov031_02239188(int bitIdx);
extern "C" void func_ov031_022389b0(int index);
extern "C" void func_ov031_02238910(int index);
extern "C" void func_ov031_02238a88(int index);
extern "C" void* func_ov027_021d8a68(int index);
extern "C" void func_020c9be0(void);

extern struct Work02238de4* data_ov031_02290d14;
#define sMbpState (data_ov031_02290d14->state)
#define sChildInfo (data_ov031_02290d14->child)

// USA: func_ov031_02238de4
extern "C" ARM void func_ov031_02238de4(unsigned short aid, unsigned int status, void* arg) {
	switch (status) {
	case 1:
		break;
	case 2: {
		if (GetGlobal02290d14_0223911c() != 2) {
			break;
		}
		{
			unsigned short* pBitmap = &sMbpState.connectChildBmp;
			int e = DisableIRQInterrupts();
			*pBitmap |= 1 << aid;
			SetIRQInterruptState(e);
		}
		{
			int off = (aid - 1) * sizeof(struct ChildInfo02238de4);
			const unsigned char* src = ((struct ConnectInfo02238de4*)arg)->macAddress;
			unsigned char* dst = sChildInfo[0].macAddress + off;
			*dst = *src;
			*(dst + 1) = *(src + 1);
			*(dst + 2) = *(src + 2);
			*(dst + 3) = *(src + 3);
			*(dst + 4) = *(src + 4);
			*(dst + 5) = *(src + 5);
			*(unsigned short*)((unsigned char*)&sChildInfo[0].playerNo + off) = aid;
		}
		break;
	}
	case 3:
		if (func_ov031_02239188(aid) != 6) {
			unsigned short mask = (unsigned short)~(1 << aid);
			int oldIRQ = DisableIRQInterrupts();
			sMbpState.connectChildBmp &= mask;
			sMbpState.requestChildBmp &= mask;
			sMbpState.entryChildBmp &= mask;
			sMbpState.downloadChildBmp &= mask;
			sMbpState.bootableChildBmp &= mask;
			sMbpState.rebootChildBmp &= mask;
			SetIRQInterruptState(oldIRQ);
			CallOv027IfFieldsMatch_02238db4();
		}
		break;
	case 4:
		break;
	case 10: {
		if (GetGlobal02290d14_0223911c() != 2) {
			func_ov031_022389b0(aid);
			break;
		}
		sMbpState.requestChildBmp |= 1 << aid;
		func_ov031_02238910(aid);
		void* user = func_ov027_021d8a68(aid);
		if (user != NULL) {
			VectorizedInvertedMemcpy(user, &sChildInfo[aid - 1].user, sizeof(struct MBUserInfo02238de4));
		}
		break;
	}
	case 5:
		break;
	case 14:
		sMbpState.requestChildBmp &= ~(1 << aid);
		sMbpState.entryChildBmp |= 1 << aid;
		if (GetGlobal02290d14_0223911c() == 3) {
			func_ov031_02238a88(aid);
		}
		break;
	case 6:
		break;
	case 7:
		sMbpState.downloadChildBmp &= ~(1 << aid);
		sMbpState.bootableChildBmp |= 1 << aid;
		break;
	case 8:
		break;
	case 9:
		sMbpState.bootableChildBmp &= ~(1 << aid);
		sMbpState.rebootChildBmp |= 1 << aid;
		CallOv027IfFieldsMatch_02238db4();
		break;
	case 11:
		break;
	case 12:
		if (GetGlobal02290d14_0223911c() == 4) {
			SetGlobal02290d14_02239108(5);
		} else {
			SetGlobal02290d14_02239108(0);
		}
		{
			struct Work02238de4* w = data_ov031_02290d14;
			if (w->buf144 != NULL) {
				w->buf144 = NULL;
			}
		}
		{
			struct Work02238de4* w = data_ov031_02290d14;
			if (w->buf140 != NULL) {
				w->buf140 = NULL;
			}
		}
		break;
	case 13:
		switch (((struct ErrorInfo02238de4*)arg)->errcode) {
		case 8:
			break;
		case 1:
		case 2:
		case 9:
			SetGlobal02290d14_02239108(7);
			break;
		}
		break;
	default:
		func_020c9be0();
	}
}
