#include <globaldefs.h>
#include "System/Interrupts.h"
#include "System/IPC.h"

#if defined(jpn)
#define func_020ca390 func_020cbe5c
#endif

struct Param021dca40 {
	unsigned char pad0[0x32];
	unsigned short channel;
	unsigned short parentMaxSize;
	unsigned short childMaxSize;
	unsigned char pad38[0x500 - 0x38];
	unsigned short p_sendlen;
	unsigned short p_recvlen;
	unsigned char pad504[4];
	void (*callback_ptr)(void);
	unsigned char pad50c[0x518 - 0x50c];
	unsigned short sendBufSize;
	unsigned short recvBufSize;
	void (*callback)(void);
	unsigned char pad520[4];
	unsigned short mode;
};

struct PWork021dca40 {
	unsigned char common[0x1318];
	int block_size_max;
	unsigned char pad131c[0x14e4 - 0x131c];
	void* parent_callback;
	int p_comm_state[15];
	unsigned char file_num;
	unsigned char pad1525;
	signed char fileid_of_child[15];
	unsigned char pad1535[0x1538 - 0x1535];
	unsigned char req_data_buf[0x1754 - 0x1538];
	unsigned char req2child[0x1e];
	unsigned char pad1772[0x1788 - 0x1772];
	unsigned char fileinfo[0x5d40];
	int useWvrFlag;
	unsigned char pad74cc[0x7d00 - 0x74cc];
};

struct CombatCtx021dca40 {
	unsigned int field0;
	unsigned char* wmBuf;
	Param021dca40* param;
	PWork021dca40* pwork;
};

extern CombatCtx021dca40 data_ov027_021e33e0;

void SetCallback_021d8a40(void* cb);
void SetDivRatio_021dd5a4(int val);
void StoreAndClear_021dd5d4(void* obj);
void ResetQueueThenClearFlags_021dadf0(void);
extern "C" void func_020ca390(int val, void* dst, unsigned int size);
extern "C" int func_ov027_021dc96c(void);
extern "C" void func_ov027_021d8c94(void);
extern "C" void func_ov027_021db524(void);
extern "C" void VectorizedMemset(void* dst, int val, int size);

// USA: func_ov027_021dca40  (semantic: InitCombatState_021dca40)
extern "C" ARM int func_ov027_021dca40(int channel) {
	int i, ret;
	void* cb_tmp;
	int enabled;

	enabled = DisableIRQInterrupts();
	data_ov027_021e33e0.param->channel = (unsigned short)channel;
	data_ov027_021e33e0.wmBuf =
		(unsigned char*)(((unsigned int)data_ov027_021e33e0.pwork + sizeof(PWork021dca40) + 31) & ~31);
	cb_tmp = data_ov027_021e33e0.pwork->parent_callback;

	func_020ca390(0, (void*)((unsigned int)data_ov027_021e33e0.pwork + 0x1340), sizeof(PWork021dca40) - 0x1340);
	SetCallback_021d8a40(cb_tmp);

	data_ov027_021e33e0.pwork->block_size_max = data_ov027_021e33e0.param->p_sendlen - 6;

	SetDivRatio_021dd5a4(data_ov027_021e33e0.param->p_recvlen);
	StoreAndClear_021dd5d4(data_ov027_021e33e0.pwork->req_data_buf);

	for (i = 0; i < 15; i++) {
		data_ov027_021e33e0.pwork->p_comm_state[i] = 0;
		data_ov027_021e33e0.pwork->fileid_of_child[i] = -1;
	}

	data_ov027_021e33e0.pwork->file_num = 0;

	func_020ca390(0, data_ov027_021e33e0.pwork->fileinfo, sizeof(data_ov027_021e33e0.pwork->fileinfo));
	VectorizedMemset(data_ov027_021e33e0.pwork->req2child, 0, sizeof(data_ov027_021e33e0.pwork->req2child));

	data_ov027_021e33e0.param->mode = 1;
	data_ov027_021e33e0.param->callback = func_ov027_021d8c94;
	data_ov027_021e33e0.param->callback_ptr = func_ov027_021db524;

	data_ov027_021e33e0.param->parentMaxSize = data_ov027_021e33e0.param->p_sendlen;
	data_ov027_021e33e0.param->sendBufSize =
		(unsigned short)((data_ov027_021e33e0.param->parentMaxSize + 0x23) & ~0x1f);

	data_ov027_021e33e0.param->childMaxSize = data_ov027_021e33e0.param->p_recvlen;
	data_ov027_021e33e0.param->recvBufSize =
		(unsigned short)((((data_ov027_021e33e0.param->childMaxSize + 0xe) * 15 + 0x29) & ~0x1f) << 1);

	ResetQueueThenClearFlags_021dadf0();
	ret = func_ov027_021dc96c();

	SetIRQInterruptState(enabled);
	data_ov027_021e33e0.pwork->useWvrFlag = IsIPCCommandHandlerRegistered(0xf, IPCSide_Arm7);

	return ret;
}
