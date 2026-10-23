#include <globaldefs.h>

struct Struct_ov023_021d8cb4 { unsigned int unknown_0_[20]; };
struct Struct_ov023_021d8cb4_2 { unsigned int unknown_0_[16]; };

// USA: func_ov023_021d8cb4
extern "C" ARM void func_ov023_021d8cb4(void* arg0, void* arg1) {
	if (!arg1) return;
	char* var0 = (char*)arg1 + 0x188;
	*(Struct_ov023_021d8cb4*)((char*)arg0 + 0x24) = *(Struct_ov023_021d8cb4*)(var0 + 4);
	*(Struct_ov023_021d8cb4_2*)((char*)arg0 + 0x74) = *(Struct_ov023_021d8cb4_2*)(var0 + 0x54);
	*((unsigned char*)arg0 + 0xb4) = *(unsigned char*)(var0 + 0x94);
	*((unsigned char*)arg0 + 0xb5) = *(unsigned char*)(var0 + 0x95);
	*((unsigned char*)arg0 + 0xb6) = *(unsigned char*)(var0 + 0x96);
	*((unsigned char*)arg0 + 0xb7) = *(unsigned char*)(var0 + 0x97);
	*(unsigned int*)((char*)arg0 + 0xb8) = *(unsigned int*)(var0 + 0x98);
	*(unsigned int*)((char*)arg0 + 0xbc) = *(unsigned int*)(var0 + 0x9c);
	*(short*)((char*)arg0 + 0xc0) = *(short*)(var0 + 0xa0);
	*(short*)((char*)arg0 + 0xc2) = *(short*)(var0 + 0xa2);
	*(short*)((char*)arg0 + 0xc4) = *(short*)(var0 + 0xa4);
	*(short*)((char*)arg0 + 0xc6) = *(short*)(var0 + 0xa6);
	*(short*)((char*)arg0 + 0xc8) = *(short*)(var0 + 0xa8);
	*(short*)((char*)arg0 + 0xca) = *(short*)(var0 + 0xaa);
	*(short*)((char*)arg0 + 0xcc) = *(short*)(var0 + 0xac);
	*(short*)((char*)arg0 + 0xce) = *(short*)(var0 + 0xae);
	*((unsigned char*)arg0 + 0xd0) = *(unsigned char*)(var0 + 0xb0);
	*((unsigned char*)arg0 + 0xd1) = *(unsigned char*)(var0 + 0xb1);
	*((unsigned char*)arg0 + 0xd2) = *(unsigned char*)(var0 + 0xb2);
	*((unsigned char*)arg0 + 0xd3) = *(unsigned char*)(var0 + 0xb3);
	*((unsigned char*)arg0 + 0xd4) = *(unsigned char*)(var0 + 0xb4);
	*((unsigned char*)arg0 + 0xd5) = *(unsigned char*)(var0 + 0xb5);
	*((unsigned char*)arg0 + 0xd6) = *(unsigned char*)(var0 + 0xb6);
	*((unsigned char*)arg0 + 0xd7) = *(unsigned char*)(var0 + 0xb7);
	*((unsigned char*)arg0 + 0xd8) = *(unsigned char*)(var0 + 0xb8);
	*((unsigned char*)arg0 + 0xd9) = *(unsigned char*)(var0 + 0xb9);
	*((unsigned char*)arg0 + 0xda) = *(unsigned char*)(var0 + 0xba);
	*((unsigned char*)arg0 + 0xdb) = *(unsigned char*)(var0 + 0xbb);
	*(void**)arg0 = (char*)arg1 + 0xb8;
}
