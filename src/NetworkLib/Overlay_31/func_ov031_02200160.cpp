#include <globaldefs.h>
#include "NitroSDK/ProcessorContext.h"
#include "NitroSDK/Timing.h"
#include "NitroSDK/Interrupts.h"
#include "NitroSDK/Memory.h"

typedef unsigned long Type_ov031_02201ef4;

struct Struct_ov031_0224c9e8 {
    unsigned long long unknown_0_;
    unsigned long long unknown_8_;
    unsigned long long unknown_10_;
};

struct Struct_ov031_0224ca00 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
};

struct Struct_ov031_0224ca60 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x18 - 0xc];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[2];
    unsigned int unknown_1c_;
    unsigned char unknown_20_[4];
    unsigned int unknown_24_;
    unsigned int unknown_28_;
    unsigned char unknown_2c_[0x3c - 0x2c];
    int unknown_3c_;
    void* unknown_40_;
    unsigned char unknown_44_[4];
    int unknown_48_;
    void* unknown_4c_;
    unsigned char unknown_50_[0x64 - 0x50];
};

struct Struct_ov031_0224cca8 {
    unsigned long unknown_0_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_[8];
    unsigned short unknown_1c_[8];
    unsigned long unknown_2c_;
    unsigned char* unknown_30_;
    unsigned char* unknown_34_;
};

extern unsigned char data_ov031_0224968c[8];
extern unsigned char data_ov031_0224ce68[6];
extern unsigned char data_ov031_0224ced6[0x12c] __attribute__((aligned(2)));

unsigned char data_ov031_0224c980;
static unsigned char data_ov031_0224c981;
static unsigned short data_ov031_0224c986;
static inline unsigned short inline_ov031_02201364(void) {
    static unsigned short pingseq = 0;
    return pingseq++;
}
static unsigned short ephemeral_port;
static unsigned short data_ov031_0224c982;
static unsigned short unk_0a;
static volatile unsigned int lan_buflen;
static unsigned int dhcp_server;
static ProcessorContext* volatile recv_waiter;
unsigned int data_ov031_0224c9d0;
static void (*dhcp_callback)(void);
static unsigned int cps_mode;
static int calm_down;
void (*data_ov031_0224c9c0)(void*);
static void (*scavenger)(void);
unsigned int data_ov031_0224c9ac;
static unsigned int requested_ip;
static unsigned int dhcp_retry;
static unsigned int lease_time;
static unsigned char* lan_buf;
static unsigned int yield_wait;
static int cps_state;
unsigned int data_ov031_0224c99c;
void* (*data_ov031_0224c994)(unsigned long);
static volatile unsigned int recv_head;
static volatile unsigned int recv_tail;
static int (*link_is_on)(void);
unsigned int data_ov031_0224c9e0[2];
Struct_ov031_0224c9e8 data_ov031_0224c9e8;
Struct_ov031_0224ca00 data_ov031_0224ca00[8];
Struct_ov031_0224ca60 data_ov031_0224ca60;
Struct_ov031_0224ca60 data_ov031_0224cac4;
ProcessorContext data_ov031_0224cb28;
ProcessorContext data_ov031_0224cbe8;
Struct_ov031_0224cca8 data_ov031_0224cca8[8];

struct Struct_ov031_02200160 {
    void* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
};

extern "C" void func_ov031_0220ab78();

// USA: func_ov031_02200160
extern "C" ARM void func_ov031_02200160(int arg0) {
    int var0 = data_ov031_0224c9d0 != 0;

    cps_state = arg0;
    data_ov031_0224c9d0 = 0;
    data_ov031_0224c99c = 0;
    data_ov031_0224c9ac = 0;
    data_ov031_0224c9e0[0] = 0;
    data_ov031_0224c9e0[1] = 0;
    dhcp_server = 0;
    if (!var0) {
        return;
    }

    VectorizedMemset(data_ov031_0224ca00, 0, 0x60);

    ProcessorContext* var1 = data_02111304.firstContext;
    if (var1 != NULL) {
        do {
            Struct_ov031_02200160* var2 = (Struct_ov031_02200160*)var1->unknown_A4;
            if (var2 != NULL && var2->unknown_0_ != NULL) {
                if (var2->unknown_8_ != 0xa && var2->unknown_8_ != 0xb) {
                    var2->unknown_8_ = 0;
                }
                if (var2->unknown_4_ != 0) {
                    var2->unknown_4_ = 0;
                    MarkContextReadyAndSwitch((ProcessorContext*)var2->unknown_0_);
                }
            }
            var1 = var1->pNext;
        } while (var1 != NULL);
    }

    int var3 = 0;
    Struct_ov031_0224cca8* var4 = data_ov031_0224cca8;
    do {
        if (var4->unknown_4_ != 0) {
            data_ov031_0224c9c0(var4->unknown_34_);
            var4->unknown_4_ = 0;
        }
        var3++;
        var4++;
    } while (var3 < 8);

    func_ov031_0220ab78();
}

void CycleCurrentPriorityContexts();
void SleepCurrentContext(unsigned int);

// USA: func_ov031_02200264
extern "C" ARM void func_ov031_02200264(void) {
    unsigned int var0 = yield_wait;
    if (var0 == 0) {
        CycleCurrentPriorityContexts();
    } else {
        SleepCurrentContext(var0);
    }
}

// USA: func_ov031_0220028c
extern "C" ARM void func_ov031_0220028c(void) {
}

// USA: func_ov031_02200290
extern "C" ARM int func_ov031_02200290() {
    return 1;
}

typedef unsigned char Type_020b1300;
typedef unsigned short Type_020b0a1c;
typedef unsigned long Type_020b11c8;
typedef unsigned long long Type_020b11c8_2;
typedef int Type_020b0a1c_2;

typedef struct {
    Type_020b11c8 unknown_0_;
    void* (*unknown_4_)(Type_020b11c8);
    void (*unknown_8_)(void*);
    void (*unknown_c_)(void);
    Type_020b0a1c_2 (*unknown_10_)(void);
    unsigned long long unknown_18_;
    Type_020b1300* unknown_20_;
    Type_020b11c8 unknown_24_;
    Type_020b11c8 unknown_28_;
    Type_020b11c8 unknown_2c_;
    Type_020b11c8 unknown_30_;
} Struct_ov031_02200298;

extern unsigned int data_ov031_02249680;
extern unsigned char data_ov031_0224e1c0[];
extern unsigned char data_ov031_0224d9c0[];
#define CPS_MIDDLEWARE ((const void*)0x02000c04)
extern "C" void func_02000b9c(const void*);

extern "C" void func_ov031_02203008(void);
extern "C" void func_ov031_02203c6c(void);
extern "C" void func_020c99ac(void*);

static inline void inline_ov031_02200298(Struct_ov031_0224c9e8* arg0, Type_020b11c8_2 arg1) {
    arg0->unknown_0_ = arg1;
    arg0->unknown_8_ = (1566083941LL << 32) + 1812433253LL;
    arg0->unknown_10_ = 2531011;
}

static inline Type_020b11c8 inline_ov031_02200298_2(Struct_ov031_0224c9e8* arg0, Type_020b11c8 arg1) {
    arg0->unknown_0_ = arg0->unknown_8_ * arg0->unknown_0_ + arg0->unknown_10_;
    if (arg1 == 0) {
        return (Type_020b11c8)(arg0->unknown_0_ >> 32);
    } else {
        return (Type_020b11c8)(((arg0->unknown_0_ >> 32) * arg1) >> 32);
    }
}

// USA: func_ov031_02200298
extern "C" ARM void func_ov031_02200298(Struct_ov031_02200298* arg0) {
    func_02000b9c(CPS_MIDDLEWARE);
    Type_020b11c8_2 var0 = arg0->unknown_18_;
    if (var0) {
        inline_ov031_02200298(&data_ov031_0224c9e8, var0);
    } else {
        inline_ov031_02200298(&data_ov031_0224c9e8, GetCurrentTimestamp());
    }
    if (arg0->unknown_4_ && arg0->unknown_8_) {
        data_ov031_0224c994 = arg0->unknown_4_;
        data_ov031_0224c9c0 = arg0->unknown_8_;
    } else {
        data_ov031_0224c994 = (void* (*)(Type_020b11c8))func_ov031_0220028c;
        data_ov031_0224c9c0 = (void (*)(void*))func_ov031_0220028c;
    }
    cps_mode = arg0->unknown_0_;
    if (arg0->unknown_28_) data_ov031_0224c982 = arg0->unknown_28_;
    else data_ov031_0224c982 = 0x5b4;
    requested_ip = arg0->unknown_2c_;
    yield_wait = arg0->unknown_30_;
    if (arg0->unknown_c_) dhcp_callback = arg0->unknown_c_;
    else dhcp_callback = func_ov031_0220028c;
    if (arg0->unknown_10_) link_is_on = arg0->unknown_10_;
    else link_is_on = func_ov031_02200290;
    lan_buf = arg0->unknown_20_;
    lan_buflen = arg0->unknown_24_;
    recv_tail = 0;
    recv_head = 0;
    ephemeral_port = 0x400 + inline_ov031_02200298_2(&data_ov031_0224c9e8, 0xf88);
    func_020c99ac(data_ov031_0224ce68);
    data_ov031_0224c981 = 0;
    PopulateContext(&data_ov031_0224cbe8, (unsigned int)func_ov031_02203008, 0, (unsigned int)data_ov031_0224e1c0, 0x800, data_ov031_02249680);
    PopulateContext(&data_ov031_0224cb28, (unsigned int)func_ov031_02203c6c, 0, (unsigned int)data_ov031_0224d9c0, 0x800, data_ov031_02249680);
    MarkContextReadyAndSwitch(&data_ov031_0224cbe8);
    MarkContextReadyAndSwitch(&data_ov031_0224cb28);
}

bool IsContextInactive(ProcessorContext* context);

// USA: func_ov031_022004d4
extern "C" ARM int func_ov031_022004d4(void) {
	int var0 = DisableIRQInterrupts();
	int var1 = IsContextInactive(&data_ov031_0224cb28);
	if (var1 == 0) {
		if (calm_down == 0) {
			calm_down = 1;
			MarkContextReadyAndSwitch(&data_ov031_0224cb28);
		}
	}
	SetIRQInterruptState(var0);
	return var1;
}

// USA: func_ov031_02200524
extern "C" ARM void func_ov031_02200524(int arg0) {
	scavenger = (void (*)(void))arg0;
}

// USA: func_ov031_02200534
extern "C" ARM void func_ov031_02200534(void) {
    func_ov031_022004d4();
    AwaitContextCompletion(&data_ov031_0224cb28);
    ShutdownContext(&data_ov031_0224cbe8);
    recv_waiter = 0;
    func_ov031_02200160(0);
    lan_buf = 0;
    lan_buflen = 0;
}

extern unsigned int data_ov031_02249680;

// USA: func_ov031_0220057c
extern "C" ARM void func_ov031_0220057c(unsigned int arg0) {
	data_ov031_02249680 = arg0;
	ChangeContextPriority(&data_ov031_0224cbe8, arg0);
	ChangeContextPriority(&data_ov031_0224cb28, arg0);
}

// USA: func_ov031_022005b4
extern "C" ARM unsigned int func_ov031_022005b4(unsigned char* arg0, unsigned int arg1, unsigned int arg2) {
	if ((unsigned int)arg0 & 1) {
		if (arg1 > 1) {
			do {
				unsigned short var0 = ((unsigned int)arg0[0] << 8) | arg0[1];
				arg2 += var0;
				arg0 += 2;
				arg1 -= 2;
			} while (arg1 > 1);
		}
	} else {
		unsigned short var1 = (unsigned short)arg2;
		arg2 = (unsigned short)((var1 >> 8) | (var1 << 8));
		if (arg1 > 1) {
			do {
				arg2 += *(unsigned short*)arg0;
				arg0 += 2;
				arg1 -= 2;
			} while (arg1 > 1);
		}
		unsigned int var2 = (arg2 >> 8) & 0xff00ff;
		unsigned int var3 = (arg2 << 8) & 0xff00ff00;
		arg2 = var2 | var3;
		arg2 = (arg2 >> 16) | (arg2 << 16);
	}
	if (arg1 != 0) {
		arg2 += (unsigned int)arg0[0] << 8;
	}
	arg2 = (arg2 & 0xffff) + (arg2 >> 16);
	arg2 += arg2 >> 16;
	return (unsigned short)arg2;
}

// USA: func_ov031_02200668
extern "C" ARM unsigned int func_ov031_02200668(unsigned int arg0) {
	unsigned short var0 = (unsigned short)(arg0 ^ 0xffff);
	if (var0 == 0) {
		return 0xffff;
	}
	return var0;
}

// USA: func_ov031_02200684
extern "C" ARM unsigned int func_ov031_02200684(void* arg0, unsigned int arg1) {
	unsigned int var0 = func_ov031_022005b4((unsigned char*)arg0, arg1, 0);
	return func_ov031_02200668((unsigned short)var0);
}

// USA: func_ov031_022006a0
extern "C" ARM int func_ov031_022006a0(void* arg0, unsigned int arg1, void* arg2, unsigned int arg3) {
	unsigned int var0 = func_ov031_022005b4((unsigned char*)arg0, arg1, arg3);
	var0 = func_ov031_022005b4((unsigned char*)((char*)arg2 + 0xc), 8, var0);
	unsigned int var1 = var0 + arg1;
	if (var1 & 0x10000) {
		var1 = (unsigned short)(var1 + 1);
	}
	return var1 != 0xffff;
}

// USA: func_ov031_022006f0
extern "C" ARM int func_ov031_022006f0(int arg0) {
	int var0 = 1;
	if (arg0 != -1 && arg0 != 0x7F000001) {
		unsigned int var1 = data_ov031_0224c99c;
		if ((arg0 & var1) != (data_ov031_0224c9d0 & var1)) var0 = 0;
	}
	return var0;
}

// USA: func_ov031_02200730
extern "C" ARM int func_ov031_02200730(int arg0) {
	int var0 = arg0;
	if (func_ov031_022006f0(arg0) == 0) {
		var0 = data_ov031_0224c9ac;
	}
	return var0;
}

// USA: func_ov031_02200754
extern "C" ARM int func_ov031_02200754(unsigned int arg0) {
	int var0 = 0;
	if (func_ov031_022006f0(arg0) != 0) {
		unsigned int var1 = ~data_ov031_0224c99c;
		if (var1 == (var1 & arg0)) {
			var0 = 1;
		}
	}
	return var0;
}

// USA: func_ov031_02200790
extern "C" ARM int func_ov031_02200790(unsigned int arg0) {
	return (arg0 & 0xf0000000) == 0xe0000000;
}

// USA: func_ov031_022007a4
extern "C" ARM int func_ov031_022007a4(int arg0) {
	int var0 = data_ov031_0224c9d0;
	int var1 = 1;
	int var2 = 1;
	int var3 = 1;
	int var4 = 1;
	if (var0 != 0 && arg0 != var0) var4 = 0;
	if (!var4) {
		if (arg0 != 0x7f000001) var3 = 0;
	}
	if (!var3) {
		if (func_ov031_02200754(arg0) == 0) var2 = 0;
	}
	if (!var2) {
		if (func_ov031_02200790(arg0) == 0) var1 = 0;
	}
	return var1;
}

// USA: func_ov031_02200824
extern "C" ARM int func_ov031_02200824(unsigned short* arg0, unsigned short* arg1) {
	int var0 = 0;
	do {
		if (*arg0++ != *arg1++) return 1;
		var0++;
	} while (var0 < 3);
	return 0;
}

extern "C" int func_ov031_0220f104(void* arg0, void* arg1, unsigned int arg2, void* arg3, unsigned int arg4);

// USA: func_ov031_02200850
extern "C" ARM void func_ov031_02200850(void* arg0, unsigned int arg1, void* arg2, unsigned int arg3) {
	VectorizedInvertedMemcpy(data_ov031_0224968c, (char*)arg0 + 6, 6);
	int var0 = func_ov031_0220f104(arg0, (char*)arg0 + 6, arg1 - 6, arg2, arg3);
	data_ov031_0224c980 = var0 < 0;
}

// USA: func_ov031_022008ac
extern "C" ARM void func_ov031_022008ac(void* arg0, void* arg1, unsigned char* arg2, unsigned int arg3, void* arg4, unsigned int arg5) {
	if (lan_buf == NULL || lan_buflen == 0) {
		return;
	}
	unsigned int var0 = arg3 + arg5;
	if (var0 < 8 || var0 > 0x5e4) {
		return;
	}
	if (arg2[0] != data_ov031_0224968c[0] || arg2[1] != data_ov031_0224968c[1] ||
	    arg2[2] != data_ov031_0224968c[2] || arg2[6] != 8) {
		return;
	}
	if (arg2[7] != 0 && arg2[7] != 6) {
		return;
	}
	unsigned short var1 = (var0 + 9) & ~1;
	unsigned int var2 = recv_head + var1;
	if (recv_head < recv_tail && recv_tail <= var2) {
		return;
	}
	if (var2 == lan_buflen) {
		var2 = 0;
		if (recv_tail == 0) {
			return;
		}
	} else if (var2 > lan_buflen) {
		var2 = var1;
		if (recv_tail <= var1) {
			return;
		}
	}
	if (recv_head + var1 > lan_buflen) {
		if (lan_buflen - recv_head >= 2) {
			*(unsigned short*)(lan_buf + recv_head) = 0;
		}
		recv_head = 0;
	}
	*(unsigned short*)(lan_buf + recv_head) = var1;
	VectorizedInvertedMemcpy(arg1, lan_buf + recv_head + 2, 6);
	VectorizedInvertedMemcpy(arg0, lan_buf + recv_head + 8, 6);
	VectorizedInvertedMemcpy(arg2 + 6, lan_buf + recv_head + 0xe, arg3 - 6);
	if (arg4 != NULL && arg5 != 0) {
		VectorizedInvertedMemcpy(arg4, lan_buf + recv_head + 8 + arg3, arg5);
	}
	recv_head = var2;
}

bool IsContextInactive(ProcessorContext* context);
void MarkContextReadyAndSwitch(ProcessorContext* context);

// USA: func_ov031_02200aa0
extern "C" ARM void func_ov031_02200aa0(void* arg0, int arg1, void* arg2, void* arg3) {
	func_ov031_022008ac(arg0, (void*)arg1, (unsigned char*)arg2, (unsigned int)arg3, (void*)0, 0);
	if (recv_waiter == NULL) return;
	if (IsContextInactive(recv_waiter)) return;
	MarkContextReadyAndSwitch(recv_waiter);
}

// USA: func_ov031_02200af8
extern "C" ARM void* func_ov031_02200af8(unsigned int* arg0) {
	int var0 = DisableIRQInterrupts();
	if (recv_tail == recv_head) {
		do {
			recv_waiter = data_02111304.activeContext;
			BlockCurrentContext(NULL);
			recv_waiter = 0;
		} while (recv_tail == recv_head);
	}
	SetIRQInterruptState(var0);

	unsigned char* var1 = lan_buf;
	unsigned int var2;
	do {
		if (lan_buflen - recv_tail < 2) {
			recv_tail = 0;
		}
		var2 = *(unsigned short*)(var1 + recv_tail);
		if (var2 == 0) {
			recv_tail = 0;
		}
	} while (var2 == 0);

	*arg0 = var2 - 2;
	return lan_buf + recv_tail + 2;
}

// USA: func_ov031_02200bb8
extern "C" ARM void func_ov031_02200bb8(void) {
	int var0 = DisableIRQInterrupts();
	recv_tail = recv_tail +
		*(unsigned short*)(lan_buf + recv_tail);
	if (recv_tail >= lan_buflen) {
		recv_tail = 0;
	}
	SetIRQInterruptState(var0);
}

struct Struct_ov031_02200bfc { unsigned int unknown_0_; unsigned char unknown_4_[6]; unsigned short unknown_a_; };
extern unsigned char data_ov031_02249684[6];

// USA: func_ov031_02200bfc
extern "C" ARM unsigned char* func_ov031_02200bfc(unsigned int arg0) {
    unsigned int var0;
    int var1 = DisableIRQInterrupts();
    unsigned char* var2 = NULL;
    if (arg0 == 0x7f000001 || arg0 == data_ov031_0224c9d0) var2 = data_ov031_0224ce68;
    else if (func_ov031_02200754(arg0) || func_ov031_02200790(arg0)) var2 = data_ov031_02249684;
    else {
        Struct_ov031_02200bfc* var3 = (Struct_ov031_02200bfc*)data_ov031_0224ca00;
        var0 = 0;
        do {
            if (arg0 == var3->unknown_0_) {
                unsigned int var4 = GetCurrentTimestamp() >> 16;
                data_ov031_0224ca00[var0].unknown_a_ = var4;
                var2 = data_ov031_0224ca00[var0].unknown_4_;
                break;
            }
            var0++;
            var3++;
        } while (var0 < 8);
    }
    SetIRQInterruptState(var1);
    return var2;
}

struct Struct_ov031_02200ccc {
    unsigned char unknown_0_[6];
    unsigned char unknown_6_[6];
    unsigned short unknown_c_;
    unsigned char unknown_e_;
    unsigned char unknown_f_;
    unsigned char unknown_10_;
    unsigned char unknown_11_;
    unsigned short unknown_12_;
    unsigned char unknown_14_;
    unsigned char unknown_15_;
    unsigned char unknown_16_[6];
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned char unknown_20_[6];
    unsigned short unknown_26_;
    unsigned short unknown_28_;
};

#define Swap16_02200ccc(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_02200ccc
extern "C" ARM void func_ov031_02200ccc(unsigned int arg0) {
    Struct_ov031_02200ccc var0;
    VectorizedMemset(&var0, 0, 42);
    VectorizedMemset(var0.unknown_0_, 255, 6);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var0.unknown_6_, 6);
    var0.unknown_c_ = 0x0608;
    var0.unknown_f_ = 1;
    var0.unknown_10_ = 8;
    var0.unknown_12_ = 0x0406;
    var0.unknown_15_ = 1;
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var0.unknown_16_, 6);
    unsigned short var1;
    unsigned short var2;
    unsigned int var3 = data_ov031_0224c9d0;
    unsigned short var4 = var3 >> 16;
    unsigned short var5 = var3;
    var1 = arg0 >> 16;
    var2 = arg0;
    var0.unknown_1c_ = Swap16_02200ccc(var4);
    var0.unknown_1e_ = Swap16_02200ccc(var5);
    var0.unknown_26_ = Swap16_02200ccc(var1);
    var0.unknown_28_ = Swap16_02200ccc(var2);
    func_ov031_02200850(&var0, 42, NULL, 0);
}

// USA: func_ov031_02200dc8
extern "C" ARM int func_ov031_02200dc8(int arg0) {
	unsigned int var0 = 0;
	do {
		func_ov031_02200ccc(arg0);
		unsigned int var1 = 0;
		do {
			if (data_ov031_0224c9d0 == 0) {
				return 0;
			}
			SleepCurrentContext(100);
			int var2 = (int)func_ov031_02200bfc(arg0);
			if (var2 != 0) {
				return var2;
			}
			var1++;
		} while (var1 < 20);
		var0++;
	} while (var0 < 8);
	return 0;
}

struct Struct_ov031_02200e38 {
    unsigned int unknown_0_;
    unsigned char unknown_4_[6];
    unsigned short unknown_a_;
};
extern "C" ARM void func_ov031_02200e38(const void* arg0, unsigned int arg1, int arg2) {
    if (arg1 == 0x7f000001 || arg1 == data_ov031_0224c9d0) return;
    if (!func_ov031_022006f0(arg1)) return;
    if (func_ov031_02200790(arg1)) return;
    unsigned short var0 = GetCurrentTimestamp() >> 16;
    {
    unsigned int var1 = 0;
    Struct_ov031_02200e38* var2 = (Struct_ov031_02200e38*)data_ov031_0224ca00;
    do {
        if (arg1 == var2->unknown_0_) {
            data_ov031_0224ca00[var1].unknown_a_ = var0;
            VectorizedInvertedMemcpy(arg0, data_ov031_0224ca00[var1].unknown_4_, 6);
            return;
        }
        ++var1;
        ++var2;
    } while (var1 < 8);
    }
    if (!arg2) return;
    unsigned int var3;
    unsigned short var4 = 0;
    var3 = var4;
    Struct_ov031_02200e38* var5 = (Struct_ov031_02200e38*)data_ov031_0224ca00;
    unsigned int var6 = 0;
    do {
        if (!var5->unknown_0_) {
            var3 = var6;
            break;
        }
        unsigned int var7 = var0 - var5->unknown_a_;
        if (var4 < (short)var7) {
            var3 = var6;
            var4 = var7;
        }
        ++var6;
        ++var5;
    } while (var6 < 8);
    data_ov031_0224ca00[var3].unknown_0_ = arg1;
    VectorizedInvertedMemcpy(arg0, data_ov031_0224ca00[var3].unknown_4_, 6);
    data_ov031_0224ca00[var3].unknown_a_ = var0;
}

// USA: func_ov031_02200f74
extern "C" ARM void func_ov031_02200f74(unsigned char* arg0, unsigned int arg1, int arg2, int arg3, unsigned int arg4, unsigned short arg5) {
	unsigned short var0 = (unsigned short)((arg5 >> 8) | (arg5 << 8));
	*(unsigned short*)(arg0 - 2) = var0;

	if (func_ov031_02200790(arg4) == 0) {
		int var1 = func_ov031_02200730((int)arg4);
		if (var1 == 0) return;
		int var2 = (int)func_ov031_02200bfc(var1);
		if (var2 == 0) {
			var2 = func_ov031_02200dc8(var1);
		}
		if (var2 == 0) return;
		VectorizedInvertedMemcpy((const void*)var2, arg0 - 0xe, 6);
	} else {
		arg0[-0xe] = 1;
		arg0[-0xd] = 0;
		arg0[-0xc] = 0x5e;
		arg0[-0xb] = (arg4 >> 16) & 0x7f;
		arg0[-0xa] = (unsigned char)(arg4 >> 8);
		arg0[-9] = (unsigned char)arg4;
	}

	VectorizedInvertedMemcpy(data_ov031_0224ce68, arg0 - 8, 6);
	func_ov031_02200850(arg0 - 0xe, arg1 + 0xe, (void*)arg2, arg3);
}

struct Struct_ov031_02201044 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned int unknown_c_;
    unsigned int unknown_10_;
};
struct Struct_ov017_021d1118 {
    unsigned char unknown_0_[8];
    Struct_ov031_02201044 unknown_8_;
};

static inline int inline_ov031_02201044(int arg0) { return (arg0 >> 8) | (arg0 << 8); }

// USA: func_ov031_02201044
extern "C" ARM void func_ov031_02201044(unsigned char* arg0, int arg1, void* arg2, int arg3, unsigned int arg4, int arg5) {
    unsigned short var0 = arg1 + 0x14 + arg3;
    ((Struct_ov031_02201044*)arg0)[-1].unknown_2_ = inline_ov031_02201044(var0);
    ((Struct_ov031_02201044*)arg0)[-1].unknown_6_ = inline_ov031_02201044((unsigned short)arg5);
    ((Struct_ov031_02201044*)arg0)[-1].unknown_a_ = 0;
    int var1 = func_ov031_02200684((Struct_ov031_02201044*)arg0 - 1, 0x14);
    ((Struct_ov031_02201044*)arg0)[-1].unknown_a_ = inline_ov031_02201044(var1);
    if (arg4 != 0x7f000001 && arg4 != data_ov031_0224c9d0) {
        func_ov031_02200f74((unsigned char*)((Struct_ov031_02201044*)arg0 - 1), arg1 + 0x14, (int)arg2, arg3, arg4, 0x800);
    }
    if (arg4 != 0x7f000001 && arg4 != data_ov031_0224c9d0) {
        if (!func_ov031_02200790(arg4)) return;
    }
    VectorizedInvertedMemcpy(data_ov031_0224968c, ((Struct_ov017_021d1118*)arg0)[-1].unknown_0_, 8);
    int var2 = DisableIRQInterrupts();
    func_ov031_022008ac(data_ov031_0224ce68, data_ov031_0224ce68, (unsigned char*)((Struct_ov017_021d1118*)arg0 - 1), arg1 + 0x1c, arg2, arg3);
    SetIRQInterruptState(var2);
}

struct Struct_ov031_0220116c {
    unsigned char unknown_0_, unknown_1_;
    unsigned short unknown_2_, unknown_4_, unknown_6_;
    unsigned char unknown_8_, unknown_9_;
    unsigned short unknown_a_, unknown_c_, unknown_e_, unknown_10_, unknown_12_;
};

static inline unsigned short inline_ov031_0220116c(unsigned short arg0) {
    return (arg0 >> 8) | (arg0 << 8);
}
// USA: func_ov031_0220116c
extern "C" ARM void func_ov031_0220116c(unsigned char* arg0, unsigned int arg1,
    const unsigned char* arg2, unsigned int arg3, unsigned int arg4,
    unsigned char arg5) {
    Struct_ov031_0220116c* var0 = (Struct_ov031_0220116c*)arg0;
    var0[-1].unknown_0_ = 0x45;
    var0[-1].unknown_1_ = 0;
    data_ov031_0224c986++;
    var0[-1].unknown_4_ = inline_ov031_0220116c(data_ov031_0224c986);
    var0[-1].unknown_8_ = 0x80;
    var0[-1].unknown_9_ = arg5;
    unsigned short var1 = data_ov031_0224c9d0 >> 16;
    var0[-1].unknown_c_ = inline_ov031_0220116c(var1);
    unsigned short var2 = data_ov031_0224c9d0;
    var0[-1].unknown_e_ = inline_ov031_0220116c(var2);
    unsigned short var3 = arg4 >> 16;
    var0[-1].unknown_10_ = inline_ov031_0220116c(var3);
    unsigned short var4 = arg4;
    var0[-1].unknown_12_ = inline_ov031_0220116c(var4);
    unsigned short var5 = 0;
    if (arg1 > 0x5c8) {
        const unsigned char* var6 = arg0;
        if (arg1 > 0x5c8) do {
            func_ov031_02201044(arg0, 0, (void*)var6, 0x5c8, arg4, var5 | 0x2000);
            var6 += 0x5c8;
            arg1 -= 0x5c8;
            var5 += 0xb9;
        } while (arg1 > 0x5c8);
        if (arg1 != 0) {
            if (arg3 != 0)
                func_ov031_02201044(arg0, 0, (void*)var6, arg1, arg4, var5 | 0x2000);
            else
                func_ov031_02201044(arg0, 0, (void*)var6, arg1, arg4, var5);
            var5 += arg1 >> 3;
            arg1 = 0;
        }
    }
    if (arg1 + arg3 > 0x5c8) do {
        unsigned int var7 = 0x5c8 - arg1;
        func_ov031_02201044(arg0, arg1, (void*)arg2, var7, arg4, var5 | 0x2000);
        arg3 -= var7;
        arg1 = 0;
        arg2 += var7;
        var5 += 0xb9;
    } while (arg3 > 0x5c8);
    if (arg1 + arg3 == 0) return;
    func_ov031_02201044(arg0, arg1, (void*)arg2, arg3, arg4, var5);
}

struct Struct_ov031_02201364 {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
};
struct Struct_ov031_02201364_2 {
    unsigned char unknown_0_[0x22];
    Struct_ov031_02201364 unknown_22_;
};
struct Struct_ov031_02201364_3 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0x1c - 0xc];
    unsigned int unknown_1c_;
    unsigned char unknown_20_[0x4c - 0x20];
    Struct_ov031_02201364_2* unknown_4c_;
};

// USA: func_ov031_02201364
extern "C" ARM void func_ov031_02201364(unsigned char* arg0, unsigned int arg1, Struct_ov031_02201364_3* arg2) {
    Struct_ov031_02201364_2* var0 = arg2->unknown_4c_;
    var0->unknown_22_.unknown_0_ = 8;
    var0->unknown_22_.unknown_4_ = (unsigned int)data_02111304.activeContext;
    var0->unknown_22_.unknown_2_ = 0;
    unsigned short var1 = inline_ov031_02201364();
    arg2->unknown_a_ = var1;
    var0->unknown_22_.unknown_6_ = var1;
    unsigned char* var2 = (unsigned char*)&var0->unknown_22_;
    unsigned int var3 = func_ov031_022005b4(var2, 8, 0);
    var3 = func_ov031_022005b4(arg0, arg1, var3);
    int var4 = func_ov031_02200668((unsigned short)var3);
    int var5 = var4 << 8;
    var0->unknown_22_.unknown_2_ = (var4 >> 8) | var5;
    func_ov031_0220116c(var2, 8, arg0, arg1, arg2->unknown_1c_, 1);
}

struct Struct_ov031_02201414 {
    unsigned char unknown_0_[0xa];
    unsigned short unknown_a_;
    unsigned char unknown_c_[0xc];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[2];
    unsigned int unknown_1c_;
    unsigned char unknown_20_[0x2c];
    unsigned char* unknown_4c_;
};

#define SwapBytes16_02201414(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201414
extern "C" ARM void func_ov031_02201414(void* arg0, unsigned int arg1, Struct_ov031_02201414* arg2) {
    unsigned char* var0 = arg2->unknown_4c_ + 0x22;
    int var1 = (unsigned short)(data_ov031_0224c9d0 >> 16);
    *(unsigned short*)(var0 - 0xc) = SwapBytes16_02201414(var1);
    int var2 = (unsigned short)data_ov031_0224c9d0;
    *(unsigned short*)(var0 - 0xa) = SwapBytes16_02201414(var2);
    var1 = (unsigned short)(arg2->unknown_1c_ >> 16);
    *(unsigned short*)(var0 - 0x8) = SwapBytes16_02201414(var1);
    var2 = (unsigned short)arg2->unknown_1c_;
    *(unsigned short*)(var0 - 0x6) = SwapBytes16_02201414(var2);
    *(unsigned short*)(var0 - 0x4) = 0x1100;
    unsigned short var3 = (unsigned short)(arg1 + 8);
    *(unsigned short*)(var0 + 0x4) = SwapBytes16_02201414(var3);
    *(unsigned short*)(var0 - 0x2) = *(unsigned short*)(var0 + 0x4);
    *(unsigned short*)(var0 + 0x2) = SwapBytes16_02201414(arg2->unknown_18_);
    *(unsigned short*)(var0 + 0x0) = SwapBytes16_02201414(arg2->unknown_a_);
    *(unsigned short*)(var0 + 0x6) = 0;
    unsigned int var4 = func_ov031_022005b4(var0 - 0xc, 0x14, 0);
    var4 = func_ov031_022005b4((unsigned char*)arg0, arg1, var4);
    int var5 = func_ov031_02200668((unsigned short)var4);
    *(unsigned short*)(var0 + 0x6) = SwapBytes16_02201414(var5);
    func_ov031_0220116c(var0, 8, (unsigned char*)arg0, arg1, arg2->unknown_1c_, 0x11);
}

extern unsigned char data_ov031_0224ce92[];

struct Struct_ov031_02201550 {
    unsigned char unknown_0_[0x8];
    unsigned char unknown_8_;
    unsigned char unknown_9_;
    unsigned short unknown_a_;
    unsigned char unknown_c_[0xc];
    unsigned short unknown_18_;
    unsigned char unknown_1a_[2];
    unsigned int unknown_1c_;
    unsigned char unknown_20_[4];
    unsigned int unknown_24_;
    unsigned int unknown_28_;
    unsigned char unknown_2c_[0x10];
    unsigned int unknown_3c_;
    unsigned char unknown_40_[4];
    unsigned int unknown_44_;
    unsigned char unknown_48_[4];
    unsigned char* unknown_4c_;
};

#define SwapBytes16_02201550(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201550
extern "C" ARM void func_ov031_02201550(unsigned char* arg0, unsigned int arg1, Struct_ov031_02201550* arg2, int arg3, int arg4) {
    unsigned char* var0;
    unsigned int var1;
    if (arg2->unknown_8_ == 0) return;
    if (data_02111304.activeContext == &data_ov031_0224cbe8) {
        var0 = data_ov031_0224ce92;
    } else {
        var0 = arg2->unknown_4c_ + 0x22;
    }
    if (arg3 & 2) {
        var1 = 0x18;
    } else {
        var1 = 0x14;
    }
    unsigned short var2 = (unsigned short)(var1 + arg1);
    int var3 = (unsigned short)(data_ov031_0224c9d0 >> 16);
    *(unsigned short*)(var0 - 0xc) = SwapBytes16_02201550(var3);
    int var4 = (unsigned short)data_ov031_0224c9d0;
    *(unsigned short*)(var0 - 0xa) = SwapBytes16_02201550(var4);
    var3 = (unsigned short)(arg2->unknown_1c_ >> 16);
    *(unsigned short*)(var0 - 0x8) = SwapBytes16_02201550(var3);
    var4 = (unsigned short)arg2->unknown_1c_;
    *(unsigned short*)(var0 - 0x6) = SwapBytes16_02201550(var4);
    *(unsigned short*)(var0 - 0x4) = 0x600;
    *(unsigned short*)(var0 - 0x2) = SwapBytes16_02201550(var2);
    *(unsigned short*)(var0 + 0x0) = SwapBytes16_02201550(arg2->unknown_a_);
    *(unsigned short*)(var0 + 0x2) = SwapBytes16_02201550(arg2->unknown_18_);
    var3 = (unsigned short)(arg2->unknown_28_ >> 16);
    *(unsigned short*)(var0 + 0x4) = SwapBytes16_02201550(var3);
    var4 = (unsigned short)arg2->unknown_28_;
    *(unsigned short*)(var0 + 0x6) = SwapBytes16_02201550(var4);
    var3 = (unsigned short)(arg2->unknown_24_ >> 16);
    *(unsigned short*)(var0 + 0x8) = SwapBytes16_02201550(var3);
    var4 = (unsigned short)arg2->unknown_24_;
    *(unsigned short*)(var0 + 0xa) = SwapBytes16_02201550(var4);
    var0[0xc] = (var1 >> 2) << 4;
    var0[0xd] = arg3;
    unsigned short var5 = (unsigned short)(arg2->unknown_3c_ - arg2->unknown_44_);
    *(unsigned short*)(var0 + 0xe) = SwapBytes16_02201550(var5);
    *(unsigned short*)(var0 + 0x10) = 0;
    *(unsigned short*)(var0 + 0x12) = 0;
    if (arg3 & 2) {
        var3 = (unsigned short)((0x02040000u + data_ov031_0224c982) >> 16);
        *(unsigned short*)(var0 + 0x14) = SwapBytes16_02201550(var3);
        var4 = (unsigned short)(0x02040000u + data_ov031_0224c982);
        *(unsigned short*)(var0 + 0x16) = SwapBytes16_02201550(var4);
    }
    unsigned int var6 = func_ov031_022005b4(var0 - 0xc, var1 + 0xc, 0);
    var6 = func_ov031_022005b4(arg0, arg1, var6);
    int var7 = func_ov031_02200668((unsigned short)var6);
    *(unsigned short*)(var0 + 0x10) = SwapBytes16_02201550(var7);
    func_ov031_0220116c(var0, var1, arg0, arg1, arg2->unknown_1c_, 6);
    arg2->unknown_28_ += arg1;
    if (arg3 & 3) {
        arg2->unknown_28_++;
    }
}

// USA: func_ov031_022017c4
extern "C" ARM void func_ov031_022017c4(void* arg0) {
    char* var0 = (char*)arg0;
    *(unsigned short*)(var0 + 0x6) = 0x200;
    VectorizedInvertedMemcpy(var0 + 0x8, var0 + 0x12, 0xa);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var0 + 0x8, 6);

    unsigned int var1 = data_ov031_0224c9d0;
    unsigned short var2 = (unsigned short)(var1 >> 16);
    var2 = (unsigned short)((var2 >> 8) | (var2 << 8));
    *(unsigned short*)(var0 + 0xe) = var2;

    unsigned int var3 = data_ov031_0224c9d0;
    unsigned short var4 = (unsigned short)var3;
    var4 = (unsigned short)((var4 >> 8) | (var4 << 8));
    *(unsigned short*)(var0 + 0x10) = var4;

    VectorizedInvertedMemcpy(var0 + 0x12, var0 - 0xe, 6);
    VectorizedInvertedMemcpy(data_ov031_0224ce68, var0 - 0x8, 6);
    func_ov031_02200850(var0 - 0xe, 0x2a, NULL, 0);
}

struct Struct_ov031_0220186c {
    unsigned short unknown_0_;
    unsigned short unknown_2_;
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned char unknown_8_[6];
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned char unknown_12_[6];
    unsigned short unknown_18_;
    unsigned short unknown_1a_;
};

#define SwapBytes16_0220186c(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_0220186c
extern "C" ARM void func_ov031_0220186c(Struct_ov031_0220186c* arg0, unsigned int arg1) {
    if (arg1 < 0x1c) return;
    if (func_ov031_02200824((unsigned short*)arg0->unknown_8_, (unsigned short*)data_ov031_0224ce68) == 0 ||
        data_ov031_0224c9d0 == 0) return;

    if (arg0->unknown_0_ != 0x100 || arg0->unknown_2_ != 8 || arg0->unknown_4_ != 0x406) return;

    unsigned short var0 = SwapBytes16_0220186c(arg0->unknown_6_);
    if (var0 != 1 && var0 != 2) return;

    unsigned int var1 = ((unsigned int)SwapBytes16_0220186c(arg0->unknown_e_) << 16) | SwapBytes16_0220186c(arg0->unknown_10_);
    unsigned int var2 = ((unsigned int)SwapBytes16_0220186c(arg0->unknown_18_) << 16) | SwapBytes16_0220186c(arg0->unknown_1a_);
    const unsigned int* var3 = &data_ov031_0224c9d0;
    int var4 = var1 == *var3;
    int var5 = *var3 == var2;

    if (!var4) func_ov031_02200e38(arg0->unknown_8_, var1, var5);

    if (var0 == 1 && var5) {
        func_ov031_022017c4(arg0);
        return;
    }
    if (var0 != 2) return;
    if (var5 && var4) data_ov031_0224c981 = 1;
}

struct Struct_ov031_022019b0 { unsigned char unknown_0_[0xc]; unsigned short unknown_c_; unsigned short unknown_e_; };

#define SwapBytes16_022019b0(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_022019b0

extern "C" ARM void func_ov031_022019b0(Struct_ov031_022019b0* arg0, void* arg1, int arg2) {
	unsigned int var0 = ((unsigned int)SwapBytes16_022019b0(arg0->unknown_c_) << 16) | SwapBytes16_022019b0(arg0->unknown_e_);

	int var1 = func_ov031_02200730(var0);
	if (var1 == 0) return;

	if (func_ov031_02200bfc(var1) == 0) {
		func_ov031_02200ccc(var1);
		return;
	}

	*(unsigned char*)arg1 = 0;
	*(unsigned short*)((char*)arg1 + 2) = 0;
	int var2 = (int)func_ov031_02200684(arg1, arg2);
	*(unsigned short*)((char*)arg1 + 2) = (unsigned short)((var2 >> 8) | (var2 << 8));

	unsigned int var3 = ((unsigned int)SwapBytes16_022019b0(arg0->unknown_c_) << 16) | SwapBytes16_022019b0(arg0->unknown_e_);

	func_ov031_0220116c((unsigned char*)arg1, arg2, (unsigned char*)0, 0, var3, 1);
}

struct Struct_ov031_02201a94 {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
    unsigned short unknown_e_;
};

#define SwapBytes16_02201a94(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201a94
extern "C" ARM void func_ov031_02201a94(Struct_ov031_02201a94* arg0, void* arg1, void* arg2) {
    unsigned char* var0;
    int var1 = DisableIRQInterrupts();
    ProcessorContext* var2 = data_02111304.firstContext;
    if (var2 != NULL) {
        do {
            var0 = (unsigned char*)var2->unknown_A4;
            if (var0 != NULL && *(unsigned int*)var0 != 0 && var0[8] == 0xb &&
                *(unsigned short*)((unsigned char*)arg1 + 4) == (unsigned short)*(unsigned int*)var0 &&
                *(unsigned short*)(var0 + 0xa) == *(unsigned short*)((unsigned char*)arg1 + 6) &&
                *(unsigned int*)(var0 + 0x44) == 0) {
                unsigned int var3 = ((unsigned int)SwapBytes16_02201a94(arg0->unknown_c_) << 16) | SwapBytes16_02201a94(arg0->unknown_e_);
                if (*(unsigned int*)(var0 + 0x1c) == var3) {
                    unsigned int var4 = *(unsigned int*)(var0 + 0x3c);
                    if ((unsigned int)arg2 - 8 > var4) {
                        *(unsigned int*)(var0 + 0x44) = var4;
                    } else {
                        *(unsigned int*)(var0 + 0x44) = (unsigned int)arg2 - 8;
                    }
                    VectorizedInvertedMemcpy((unsigned char*)arg1 + 8, *(void**)(var0 + 0x40), *(unsigned int*)(var0 + 0x44));
                    if (*(unsigned int*)(var0 + 4) == 3) {
                        *(unsigned int*)(var0 + 4) = 0;
                        MarkContextReadyAndSwitch(*(ProcessorContext**)var0);
                    }
                    break;
                }
            }
            var2 = var2->pNext;
        } while (var2 != NULL);
    }
    SetIRQInterruptState(var1);
}

// USA: func_ov031_02201b94
extern "C" ARM int func_ov031_02201b94(int arg0, int arg1) {
	return arg0 != 0 && arg0 != -1 && arg1 != 0 && arg1 != -1;
}

struct Struct_ov031_02201bb4 {
	char unknown_0_[0xc];
	unsigned short unknown_c_;
	unsigned short unknown_e_;
	unsigned short unknown_10_;
	unsigned short unknown_12_;
};

#define SwapBytes16_02201bb4(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201bb4
extern "C" ARM void func_ov031_02201bb4(Struct_ov031_02201bb4* arg0, void* arg1, void* arg2) {
	unsigned int var0 = func_ov031_02200684(arg1, (unsigned int)arg2);
	if (var0 != 0xffff) {
		return;
	}
	unsigned short var1 = arg0->unknown_12_;
	unsigned short var2 = arg0->unknown_10_;
	unsigned short var3 = arg0->unknown_e_;
	unsigned short var4 = arg0->unknown_c_;
	unsigned int var5 = ((unsigned int)SwapBytes16_02201bb4(var4) << 16) | SwapBytes16_02201bb4(var3);
	unsigned int var6 = ((unsigned int)SwapBytes16_02201bb4(var2) << 16) | SwapBytes16_02201bb4(var1);
	if (!func_ov031_02201b94((int)var5, (int)var6)) {
		return;
	}
	unsigned char var7 = *(unsigned char*)arg1;
	switch (var7) {
	case 0:
		func_ov031_02201a94((Struct_ov031_02201a94*)arg0, arg1, arg2);
		return;
	case 8:
		func_ov031_022019b0((Struct_ov031_022019b0*)arg0, arg1, (int)arg2);
		return;
	}
}

struct Struct_ov031_02201c84 {
	int unknown_0_;
	unsigned char unknown_4_[0x8 - 4];
	unsigned char unknown_8_;
	unsigned char unknown_9_;
	unsigned short unknown_a_;
	unsigned char unknown_c_[0x18 - 0xc];
	unsigned short unknown_18_;
	unsigned char unknown_1a_[0x1c - 0x1a];
	int unknown_1c_;
};

struct Struct_ov031_02201c84_2 {
	unsigned char unknown_0_[0x68];
	Struct_ov031_02201c84_2* unknown_68_;
	unsigned char unknown_6c_[0xa4 - 0x68 - 4];
	Struct_ov031_02201c84* unknown_a4_;
};

struct Struct_01ff8300 { unsigned char unknown_0_[0x8]; void* unknown_8_; };

struct Struct_ov031_02201c84_3 { unsigned char unknown_0_[0xc]; unsigned short unknown_c_; unsigned short unknown_e_; };
struct Struct_ov031_02201c84_4 { unsigned short unknown_0_; unsigned short unknown_2_; };

// USA: func_ov031_02201c84
extern "C" ARM void* func_ov031_02201c84(Struct_ov031_02201c84_3* arg0, Struct_ov031_02201c84_4* arg1) {
	Struct_ov031_02201c84* var0;
	Struct_ov031_02201c84_2* var1 = (Struct_ov031_02201c84_2*)data_02111304.firstContext;
	if (var1) {
	do {
		var0 = var1->unknown_a4_;
		if (var0 && var0->unknown_0_ != 0) {
			if (var0->unknown_8_ == 1) {
				unsigned short var2 = arg1->unknown_2_;
				unsigned short var3 = (unsigned short)((var2 >> 8) | (var2 << 8));
				if (var0->unknown_a_ == var3) {
					if (var0->unknown_18_ != 0) {
						unsigned short var4 = arg1->unknown_0_;
						unsigned short var5 = (unsigned short)((var4 >> 8) | (var4 << 8));
						if (var0->unknown_18_ != var5) goto next;
					}
					if (var0->unknown_1c_ != 0) {
						unsigned short var6 = arg0->unknown_e_;
						unsigned short var7 = arg0->unknown_c_;
						unsigned short var8 = (unsigned short)((var7 >> 8) | (var7 << 8));
						unsigned short var9 = (unsigned short)((var6 >> 8) | (var6 << 8));
						unsigned int var10 = ((unsigned int)var8 << 0x10) | var9;
						if (var0->unknown_1c_ != (int)var10) goto next;
					}
					return var0;
				}
			}
		}
	next:
		var1 = var1->unknown_68_;
	} while (var1);
	}
	return NULL;
}

// USA: func_ov031_02201d58
extern "C" ARM int func_ov031_02201d58(void* arg0, unsigned short* arg1, void* arg2) {
	int var0 = 0;
	int var1 = 0;
	int var2 = 0;
	int var3 = 0;
	unsigned char var4 = *(unsigned char*)((char*)arg2 + 0x8);
	if (var4 != 0xa && var4 != 0xb) var1 = 1;
	if (var1) {
		unsigned short var5 = arg1[1];
		unsigned short var6 = *(unsigned short*)((char*)arg2 + 0xa);
		if (var6 == (unsigned short)((var5 >> 8) | (var5 << 8))) var3 = 1;
	}
	if (var3) {
		unsigned short var7 = arg1[0];
		unsigned short var8 = *(unsigned short*)((char*)arg2 + 0x18);
		if (var8 == (unsigned short)((var7 >> 8) | (var7 << 8))) var2 = 1;
	}
	if (var2) {
		unsigned short var9 = *(unsigned short*)((char*)arg0 + 0xe);
		unsigned short var10 = *(unsigned short*)((char*)arg0 + 0xc);
		unsigned int var11 = *(unsigned int*)((char*)arg2 + 0x1c);
		unsigned int var12 = ((unsigned int)(unsigned short)((var10 >> 8) | (var10 << 8)) << 16) | (unsigned short)((var9 >> 8) | (var9 << 8));
		if (var11 == var12) var0 = 1;
	}
	return var0;
}

struct Struct_01ff8300_2 { unsigned char unknown_0_[0x8]; void* unknown_8_; };
struct Struct_ov031_02201e0c { unsigned char unknown_0_[0x68]; Struct_ov031_02201e0c* unknown_68_; unsigned char unknown_6c_[0xa4-0x68-4]; void* unknown_a4_; };

// USA: func_ov031_02201e0c
extern "C" ARM void* func_ov031_02201e0c(void* arg0, void* arg1) {
    int* var0;
    Struct_ov031_02201e0c* var1 = (Struct_ov031_02201e0c*)data_02111304.firstContext;
    if (var1) {
        do {
            var0 = (int*)var1->unknown_a4_;
            if (var0 && *var0 != 0) {
                if (func_ov031_02201d58(arg0, (unsigned short*)arg1, var0) != 0) return var0;
            }
            var1 = var1->unknown_68_;
        } while (var1);
    }
    return NULL;
}

// USA: func_ov031_02201e70
extern "C" ARM void func_ov031_02201e70(void *arg0, void *arg1) {
    unsigned char *var0  = (unsigned char *)arg0;
    unsigned short *var1 = (unsigned short *)((unsigned char *)arg1 + 0x2e);
    *var1                = 0x218;
    int var2            = (var0[0xc] & 0xf0) / 4 - 0x14;
    int var3         = var2 - 1;
    unsigned char *var4 = var0 + 0x14;
    if (var2 == 0) {
        return;
    }
    do {
        int var5 = *var4++;
        switch (var5) {
            case 0: return;
            case 1: break;
            case 2:
                *var1 = (var4[1] << 8) | var4[2];
                var4 += 3;
                var3 -= 3;
                break;
            default:
                int var6 = *var4 - 1;
                var3 -= var6;
                var4 += var6;
                break;
        }
    } while (var3-- != 0);
}

// USA: func_ov031_02201ef4
extern "C" ARM int func_ov031_02201ef4(Type_ov031_02201ef4 arg0) {
    Type_ov031_02201ef4 var0 = func_ov031_02200730(arg0);
    if (var0 == 0) return 1;
    return (int)func_ov031_02200bfc(var0);
}

struct Struct_ov031_02201f10 {
    char unknown_0_[0x1c];
    Type_ov031_02201ef4 unknown_1c_;
};

// USA: func_ov031_02201f10
extern "C" ARM void func_ov031_02201f10(Struct_ov031_02201f10* arg0, int arg1, int arg2) {
    if (func_ov031_02201ef4(arg0->unknown_1c_) ||
        data_02111304.activeContext != &data_ov031_0224cbe8) {
        func_ov031_02201550((unsigned char*)0, 0, (Struct_ov031_02201550*)arg0, arg1, arg2);
    } else {
        func_ov031_02200ccc(func_ov031_02200730(arg0->unknown_1c_));
    }
}

// USA: func_ov031_02201f84
extern "C" ARM void func_ov031_02201f84(int arg0, int arg1) {
	func_ov031_02201f10((Struct_ov031_02201f10*)arg0, 0x10, arg1);
}

// USA: func_ov031_02201f98
extern "C" ARM void func_ov031_02201f98(int arg0, int arg1) {
	func_ov031_02201f10((Struct_ov031_02201f10*)arg0, 0x11, arg1);
}

struct Struct_ov031_02201fac { unsigned char unknown_0_[0xc]; unsigned short unknown_c_; unsigned short unknown_e_; };
struct Struct_ov031_02201fac_2 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned short unknown_4_; unsigned short unknown_6_; unsigned short unknown_8_; unsigned short unknown_a_; unsigned char unknown_c_; unsigned char unknown_d_; };
struct Struct_ov031_02201fac_3 { unsigned char unknown_0_[0x24]; unsigned int unknown_24_; unsigned int unknown_28_; };

#define SW16_02201fac(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_02201fac
extern "C" ARM void func_ov031_02201fac(Struct_ov031_02201fac* arg0, Struct_ov031_02201fac_2* arg1, unsigned int arg2, int arg3) {
	Struct_ov031_02201fac_3* var0 = (Struct_ov031_02201fac_3*)&data_ov031_0224cac4;
	VectorizedMemset(var0, 0, 0x64);
	data_ov031_0224cac4.unknown_a_ = SW16_02201fac(arg1->unknown_2_);
	data_ov031_0224cac4.unknown_18_ = SW16_02201fac(arg1->unknown_0_);
	data_ov031_0224cac4.unknown_1c_ = ((unsigned int)SW16_02201fac(arg0->unknown_c_) << 16) | SW16_02201fac(arg0->unknown_e_);
	if (arg1->unknown_d_ & 0x10) {
		var0->unknown_28_ = ((unsigned int)SW16_02201fac(arg1->unknown_8_) << 16) | SW16_02201fac(arg1->unknown_a_);
		return func_ov031_02201f10((Struct_ov031_02201f10*)var0, 4, arg3);
	}
	var0->unknown_28_ = 0;
	unsigned int var1 = arg2 + (((unsigned int)SW16_02201fac(arg1->unknown_4_) << 16) | SW16_02201fac(arg1->unknown_6_));
	var0->unknown_24_ = var1;
	if (arg1->unknown_d_ & 3) {
		var0->unknown_24_ = var1 + 1;
	}
	return func_ov031_02201f10((Struct_ov031_02201f10*)var0, 0x14, arg3);
}

struct Struct_ov031_022020e8 { unsigned char unknown_0_[0xc]; unsigned short unknown_c_; unsigned short unknown_e_; unsigned short unknown_10_; unsigned short unknown_12_; };
struct Struct_ov031_022020e8_2 { unsigned short unknown_0_; unsigned char unknown_2_[2]; unsigned short unknown_4_; unsigned short unknown_6_; };
struct Struct_ov031_022020e8_3 {
	unsigned char unknown_0_[8];
	unsigned char unknown_8_;
	unsigned char unknown_9_[0x10 - 0x8 - 1];
	unsigned int unknown_10_;
	unsigned int unknown_14_;
	unsigned short unknown_18_;
	unsigned char unknown_1a_[0x1c - 0x18 - 2];
	unsigned int unknown_1c_;
	unsigned char unknown_20_[0x24 - 0x1c - 4];
	unsigned int unknown_24_;
};

#define SW16_022020e8(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_022020e8
extern "C" ARM void func_ov031_022020e8(Struct_ov031_022020e8* arg0, Struct_ov031_022020e8_2* arg1, Struct_ov031_022020e8_3* arg2) {
	arg2->unknown_8_ = 3;
	arg2->unknown_10_ = (unsigned int)(GetCurrentTimestamp() >> 16);
	arg2->unknown_14_ = ((unsigned int)SW16_022020e8(arg0->unknown_10_) << 16) | SW16_022020e8(arg0->unknown_12_);
	arg2->unknown_18_ = SW16_022020e8(arg1->unknown_0_);
	arg2->unknown_1c_ = ((unsigned int)SW16_022020e8(arg0->unknown_c_) << 16) | SW16_022020e8(arg0->unknown_e_);
	arg2->unknown_24_ = (((unsigned int)SW16_022020e8(arg1->unknown_4_) << 16) | SW16_022020e8(arg1->unknown_6_)) + 1;
	func_ov031_02201e70(arg1, arg2);
	func_ov031_02201f10((Struct_ov031_02201f10*)arg2, 0x12, 0);
}

struct Struct_ov031_022021d4 {
    char unknown_0_[8];
    unsigned char unknown_8_;
    char unknown_9_[0x28 - 9];
    unsigned int unknown_28_;
};
struct Struct_ov031_022020e8;
struct Struct_ov031_022020e8_2;
struct Struct_ov031_022020e8_3;
struct Struct_ov031_02201fac;
struct Struct_ov031_02201fac_2;

// USA: func_ov031_022021d4
extern "C" ARM int func_ov031_022021d4(void* arg0, void* arg1, int arg2) {
    Struct_ov031_022021d4* var0 = (Struct_ov031_022021d4*)func_ov031_02201e0c(arg0, arg1);
    if (var0 != NULL) {
        if (var0->unknown_8_ == 1) {
            func_ov031_022020e8((Struct_ov031_022020e8*)arg0, (Struct_ov031_022020e8_2*)arg1, (Struct_ov031_022020e8_3*)var0);
        } else if ((unsigned char)(var0->unknown_8_ + 0xfd) <= 1) {
            --var0->unknown_28_;
            func_ov031_022020e8((Struct_ov031_022020e8*)arg0, (Struct_ov031_022020e8_2*)arg1, (Struct_ov031_022020e8_3*)var0);
        } else {
            func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
        }
        return 1;
    }
    return 0;
}

void CycleCurrentPriorityContexts(void);

struct Struct_ov031_0220225c { unsigned char unknown_0_[0xc]; unsigned short unknown_c_; unsigned short unknown_e_; unsigned short unknown_10_; unsigned short unknown_12_; };

// USA: func_ov031_0220225c
extern "C" ARM void func_ov031_0220225c(Struct_ov031_0220225c* arg0, void* arg1, int arg2) {
	unsigned short var0 = arg0->unknown_12_;
	unsigned short var1 = arg0->unknown_10_;
	unsigned short var2 = arg0->unknown_e_;
	unsigned short var3 = arg0->unknown_c_;
	unsigned short var4 = (unsigned short)((var3 >> 8) | (var3 << 8));
	unsigned short var5 = (unsigned short)((var2 >> 8) | (var2 << 8));
	unsigned short var6 = (unsigned short)((var1 >> 8) | (var1 << 8));
	unsigned short var7 = (unsigned short)((var0 >> 8) | (var0 << 8));
	int var8 = ((unsigned int)var4 << 0x10) | var5;
	int var9 = ((unsigned int)var6 << 0x10) | var7;

	if (!func_ov031_02201b94(var8, var9)) {
		return;
	}
	if (func_ov031_022021d4(arg0, arg1, arg2) != 0) {
		return;
	}
	void* var10 = func_ov031_02201c84((Struct_ov031_02201c84_3*)arg0, (Struct_ov031_02201c84_4*)arg1);
	if (var10 != NULL) {
		func_ov031_022020e8((Struct_ov031_022020e8*)arg0, (Struct_ov031_022020e8_2*)arg1, (Struct_ov031_022020e8_3*)var10);
		return;
	}
	CycleCurrentPriorityContexts();
	var10 = func_ov031_02201c84((Struct_ov031_02201c84_3*)arg0, (Struct_ov031_02201c84_4*)arg1);
	if (var10 == NULL) {
		return;
	}
	func_ov031_022020e8((Struct_ov031_022020e8*)arg0, (Struct_ov031_022020e8_2*)arg1, (Struct_ov031_022020e8_3*)var10);
}

struct Struct_ov031_02202334 {
    ProcessorContext* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    char unknown_9_[0x1b];
    unsigned int unknown_24_;
    char unknown_28_[4];
    unsigned short unknown_2c_;
    char unknown_2e_[2];
    unsigned int unknown_30_;
};
struct Struct_ov031_02202334_2 { unsigned short unknown_0_[2]; unsigned short unknown_4_; unsigned short unknown_6_; unsigned short unknown_8_; unsigned short unknown_a_; unsigned short unknown_c_; unsigned short unknown_e_; };

#define Swap16_02202334(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_02202334
extern "C" ARM void func_ov031_02202334(void* arg0, Struct_ov031_02202334_2* arg1, int arg2) {
    Struct_ov031_02202334* var0 = (Struct_ov031_02202334*)func_ov031_02201e0c(arg0, arg1);
    if (!var0 || var0->unknown_8_ != 2) {
        func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
        return;
    }
    CycleCurrentPriorityContexts();
    var0->unknown_24_ = (((unsigned int)Swap16_02202334(arg1->unknown_4_) << 16) | Swap16_02202334(arg1->unknown_6_)) + 1;
    var0->unknown_30_ = ((unsigned int)Swap16_02202334(arg1->unknown_8_) << 16) | Swap16_02202334(arg1->unknown_a_);
    var0->unknown_2c_ = Swap16_02202334(arg1->unknown_e_);
    func_ov031_02201e70(arg1, var0);
    func_ov031_02201f84((int)var0, 0);
    var0->unknown_8_ = 4;
    if (var0->unknown_4_ == 1) {
        var0->unknown_4_ = 0;
        MarkContextReadyAndSwitch(var0->unknown_0_);
    }
}

struct Struct_ov031_0220242c {
    ProcessorContext* unknown_0_;
    int unknown_4_;
    unsigned char unknown_8_;
    unsigned char unknown_9_[0x1b];
    unsigned int unknown_24_;
    unsigned char unknown_28_[4];
    unsigned short unknown_2c_;
    unsigned short unknown_2e_;
    unsigned int unknown_30_;
    unsigned int unknown_34_;
    unsigned char unknown_38_[4];
    unsigned int unknown_3c_;
    unsigned char* unknown_40_;
    unsigned int unknown_44_;
};

struct Struct_ov031_0220242c_2 {
    unsigned short unknown_0_[2];
    unsigned short unknown_4_;
    unsigned short unknown_6_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned char unknown_c_;
    unsigned char unknown_d_;
    unsigned short unknown_e_;
};

#define Swap16_0220242c(value) (unsigned short)(((value) >> 8) | ((value) << 8))

// USA: func_ov031_0220242c
extern "C" ARM void func_ov031_0220242c(void* arg0, Struct_ov031_0220242c_2* arg1, unsigned int arg2) {
    Struct_ov031_0220242c* var0 = (Struct_ov031_0220242c*)func_ov031_02201e0c(arg0, arg1);
    if (!var0) {
        func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
        return;
    }
    unsigned int var1 = ((unsigned int)Swap16_0220242c(arg1->unknown_8_) << 16) | Swap16_0220242c(arg1->unknown_a_);
    unsigned char var2 = arg1->unknown_d_;
    if ((int)(var1 - var0->unknown_30_) > 0)
        var0->unknown_30_ = var1;
    unsigned int var3 = ((unsigned int)Swap16_0220242c(arg1->unknown_4_) << 16) | Swap16_0220242c(arg1->unknown_6_);
    if (var0->unknown_8_ == 4 && var0->unknown_24_ != var3) {
        func_ov031_02201f84((int)var0, 0);
        return;
    }
    var0->unknown_2c_ = Swap16_0220242c(arg1->unknown_e_);
    switch (var0->unknown_8_) {
    case 0:
    case 2:
        func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
        break;
    case 3:
        var0->unknown_8_ = 4;
        if (var0->unknown_4_ == 1) {
            var0->unknown_4_ = 0;
            MarkContextReadyAndSwitch(var0->unknown_0_);
        }
        if (!arg2)
            break;
    case 4:
        ++var0->unknown_34_;
        unsigned int var4 = var0->unknown_3c_;
        unsigned int var5 = var4 - var0->unknown_44_;
        int var6;
        if (arg2 > var5) {
            var6 = 0;
            arg2 = var5;
        } else {
            var6 = 1;
        }
        if (arg2) {
            int var7 = DisableIRQInterrupts();
            int var8 = (arg1->unknown_c_ & 0xf0) / 4;
            VectorizedInvertedMemcpy((unsigned char*)arg1 + var8, var0->unknown_40_ + var0->unknown_44_, arg2);
            var0->unknown_44_ += arg2;
            var0->unknown_24_ += arg2;
            SetIRQInterruptState(var7);
            if (var0->unknown_4_ == 2) {
                var0->unknown_4_ = 0;
                MarkContextReadyAndSwitch(var0->unknown_0_);
            }
        }
        if (var6 && (var2 & 1)) {
            var0->unknown_8_ = 6;
            ++var0->unknown_24_;
            func_ov031_02201f98((int)var0, 0);
            if (!arg2 && var0->unknown_4_ == 2) {
                var0->unknown_4_ = 0;
                MarkContextReadyAndSwitch(var0->unknown_0_);
            }
        } else if (arg2) {
            func_ov031_02201f84((int)var0, 0);
        }
        break;
    case 7:
    case 8:
        if (var2 & 1) {
            var0->unknown_24_ += arg2 + 1;
            func_ov031_02201f84((int)var0, 0);
            var0->unknown_8_ = 0;
            if (var0->unknown_4_ == 2) {
                var0->unknown_4_ = 0;
                MarkContextReadyAndSwitch(var0->unknown_0_);
            }
        } else {
            if (arg2) {
                var0->unknown_24_ += arg2;
                func_ov031_02201f84((int)var0, 0);
            }
            var0->unknown_8_ = 8;
        }
        break;
    case 6:
    case 9:
        var0->unknown_8_ = 0;
        if (var0->unknown_4_ == 2) {
            var0->unknown_4_ = 0;
            MarkContextReadyAndSwitch(var0->unknown_0_);
        }
        break;
    default:
        if (var2 & 1)
            ++var0->unknown_24_;
        func_ov031_02201f84((int)var0, 0);
        break;
    }
    CycleCurrentPriorityContexts();
}

struct Struct_ov031_02202744 {
	ProcessorContext* unknown_0_;
	int unknown_4_;
	unsigned char unknown_8_;
	unsigned char unknown_9_[0x24 - 0x9];
	int unknown_24_;
};

// USA: func_ov031_02202744
extern "C" ARM void func_ov031_02202744(int arg0, int arg1, int arg2) {
	Struct_ov031_02202744* var0 = (Struct_ov031_02202744*)func_ov031_02201e0c((void*)arg0, (void*)arg1);
	if (!var0) return;
	switch (var0->unknown_8_) {
	case 7:
		var0->unknown_24_++;
		func_ov031_02201f84((int)var0, 0);
		var0->unknown_8_ = 9;
		return;
	case 8:
		var0->unknown_24_++;
		func_ov031_02201f84((int)var0, 0);
		var0->unknown_8_ = 0;
		if (var0->unknown_4_ != 2) return;
		var0->unknown_4_ = 0;
		MarkContextReadyAndSwitch(var0->unknown_0_);
		return;
	case 4:
		var0->unknown_24_++;
		func_ov031_02201f98((int)var0, 0);
		var0->unknown_8_ = 6;
		return;
	default:
		func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
		return;
	}
}

struct Struct_ov031_02202810 {
	ProcessorContext* unknown_0_;
	int unknown_4_;
	unsigned char unknown_8_;
};

// USA: func_ov031_02202810
extern "C" ARM int func_ov031_02202810(int arg0, int arg1) {
	Struct_ov031_02202810* var0 = (Struct_ov031_02202810*)func_ov031_02201e0c((void*)arg0, (void*)arg1);
	if (var0 == NULL) {
		return (int)var0;
	}
	CycleCurrentPriorityContexts();
	var0->unknown_8_ = 0;
	if ((unsigned int)(var0->unknown_4_ - 1) > 1) {
		return var0->unknown_4_ - 1;
	}
	var0->unknown_4_ = 0;
	MarkContextReadyAndSwitch(var0->unknown_0_);
}

struct Struct_ov031_0220225c;

struct Struct_ov031_0220284c { unsigned char unknown_0_[0xc]; unsigned char unknown_c_; unsigned char unknown_d_; };

// USA: func_ov031_0220284c
extern "C" ARM void func_ov031_0220284c(void* arg0, Struct_ov031_0220284c* arg1, int arg2) {
    if (func_ov031_022006a0(arg1, arg2, arg0, 6)) return;

    int var0 = arg1->unknown_c_ & 0xf0;
    arg2 -= var0 / 4;
    switch (arg1->unknown_d_ & 0x17) {
    case 0x2:
        if (arg1->unknown_d_ & 0x28) return;
        func_ov031_0220225c((Struct_ov031_0220225c*)arg0, arg1, arg2);
        return;
    case 0x12:
        if (arg1->unknown_d_ & 0x28) return;
        func_ov031_02202334(arg0, (Struct_ov031_02202334_2*)arg1, arg2);
        return;
    case 0x10:
    case 0x11:
        func_ov031_0220242c(arg0, (Struct_ov031_0220242c_2*)arg1, arg2);
        return;
    case 0x1:
        func_ov031_02202744((int)arg0, (int)arg1, arg2);
        return;
    }
    if (arg1->unknown_d_ & 0x4) {
        func_ov031_02202810((int)arg0, (int)arg1);
    } else {
        func_ov031_02201fac((Struct_ov031_02201fac*)arg0, (Struct_ov031_02201fac_2*)arg1, arg2, 0);
    }
}

struct Struct_ov031_0220296c {
    unsigned char unknown_0_[0xc];
    unsigned short unknown_c_;
    unsigned short unknown_e_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};

typedef int (*Type_ov031_0220296c)(void*, unsigned int, void*);

#define SwapBytes16_0220296c(v) (unsigned short)(((v) >> 8) | ((v) << 8))

// USA: func_ov031_0220296c
extern "C" ARM void func_ov031_0220296c(Struct_ov031_0220296c* arg0, void* arg1, unsigned int arg2) {
    unsigned char* var0;
    if (*(unsigned short*)((unsigned char*)arg1 + 6) != 0) {
        if (func_ov031_022006a0(arg1, arg2, arg0, 0x11)) return;
    }
    int var1 = DisableIRQInterrupts();
    ProcessorContext* var2 = data_02111304.firstContext;
    if (var2 != NULL) {
        do {
            var0 = (unsigned char*)var2->unknown_A4;
            if (var0 != NULL && *(unsigned int*)var0 != 0 && var0[8] == 0xa &&
                *(unsigned short*)(var0 + 0xa) == SwapBytes16_0220296c(*(unsigned short*)((unsigned char*)arg1 + 2)) &&
                (*(unsigned short*)(var0 + 0x18) == 0 ||
                 *(unsigned short*)(var0 + 0x18) == SwapBytes16_0220296c(*(unsigned short*)arg1)) &&
                (*(unsigned int*)(var0 + 0x1c) == 0 || *(unsigned int*)(var0 + 0x1c) == 0xffffffff ||
                 *(unsigned int*)(var0 + 0x1c) == (((unsigned int)SwapBytes16_0220296c(arg0->unknown_c_) << 16) | SwapBytes16_0220296c(arg0->unknown_e_)))) {
                *(unsigned int*)(var0 + 0x14) = ((unsigned int)SwapBytes16_0220296c(arg0->unknown_10_) << 16) | SwapBytes16_0220296c(arg0->unknown_12_);
                if (*(unsigned int*)(var0 + 0x1c) == 0) {
                    *(unsigned int*)(var0 + 0x1c) = ((unsigned int)SwapBytes16_0220296c(arg0->unknown_c_) << 16) | SwapBytes16_0220296c(arg0->unknown_e_);
                    *(unsigned short*)(var0 + 0x18) = SwapBytes16_0220296c(*(unsigned short*)arg1);
                }
                if (*(unsigned int*)(var0 + 0x44) == 0) {
                    unsigned int var3 = *(unsigned int*)(var0 + 0x3c);
                    if (arg2 - 8 > var3) {
                        *(unsigned int*)(var0 + 0x44) = var3;
                    } else {
                        *(unsigned int*)(var0 + 0x44) = arg2 - 8;
                    }
                    VectorizedInvertedMemcpy((unsigned char*)arg1 + 8, *(void**)(var0 + 0x40), *(unsigned int*)(var0 + 0x44));
                    if (*(unsigned int*)(var0 + 4) == 3) {
                        *(unsigned int*)(var0 + 4) = 0;
                        MarkContextReadyAndSwitch(*(ProcessorContext**)var0);
                    } else if (*(Type_ov031_0220296c*)(var0 + 0x38) != NULL) {
                        if ((*(Type_ov031_0220296c*)(var0 + 0x38))(*(void**)(var0 + 0x40), *(unsigned int*)(var0 + 0x44), var0) != 0) {
                            *(unsigned int*)(var0 + 0x44) = 0;
                        }
                    }
                }
                break;
            }
            var2 = var2->pNext;
        } while (var2 != NULL);
    }
    SetIRQInterruptState(var1);
}
