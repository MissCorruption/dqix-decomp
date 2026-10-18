#include <globaldefs.h>

struct KeyEntry {
	const char* name;
	int modulusLength;
	unsigned char* modulus;
	int exponentLength;
	unsigned char* exponent;
};

struct SignatureState {
	unsigned char field_0x0[0x468];
	unsigned char digest[0x14];
	int digestLength;
	unsigned char field_0x480[0x124];
	unsigned char* signature;
	int signatureLength;
};

void BytesToShortArrayBE_0220c8d0(unsigned short*, unsigned char*, int, int);
void ShortArrayToBytesBE_0220c92c(unsigned char*, unsigned short*, int, int);
unsigned int SwapActiveContextPriority_02207cf0();
void SetActiveContextPriorityIfValid_02207d3c(unsigned int);
extern "C" void func_ov031_0220c2bc(unsigned short*, unsigned short*, unsigned short*, int, unsigned short*);
extern "C" int func_02001aec(void*, void*, int);
extern void* (*data_ov031_0224c994)(unsigned int);
extern int (*data_ov031_0224c9c0)(void*);

// USA: func_ov031_02208400
extern "C" ARM int func_ov031_02208400(SignatureState* state, KeyEntry* key) {
	unsigned short* workspace;
	unsigned short* message;
	unsigned short* exponent;
	unsigned short* modulus;
	int words;
	int result;
	int i;
	int length;
	unsigned char* decoded;
	if (state->signature == 0 || state->signatureLength == 0 || key->exponent == 0 || key->exponentLength == 0 ||
	    key->modulus == 0 || key->modulusLength == 0)
		return 2;
	words = (key->modulusLength * 2) / 2;
	workspace = (unsigned short*)data_ov031_0224c994(words * 8);
	if (workspace == 0)
		return 2;
	message = workspace + words;
	exponent = message + words;
	modulus = exponent + words;
	BytesToShortArrayBE_0220c8d0(message, state->signature, state->signatureLength, words);
	BytesToShortArrayBE_0220c8d0(exponent, key->exponent, key->exponentLength, words);
	BytesToShortArrayBE_0220c8d0(modulus, key->modulus, key->modulusLength, words);
	unsigned int priority = SwapActiveContextPriority_02207cf0();
	func_ov031_0220c2bc(workspace, message, exponent, words, modulus);
	SetActiveContextPriorityIfValid_02207d3c(priority);
	decoded = (unsigned char*)message;
	ShortArrayToBytesBE_0220c92c(decoded, workspace, key->modulusLength, words);
	result = 0;
	if (decoded[0] != 0 || decoded[1] != 1) {
		result = 2;
	} else {
		length = key->modulusLength;
		i = 2;
		if (i < length) {
			do {
				if (decoded[i] != 0xff)
					break;
				i++;
			} while (i < length);
		}
		if (i + 1 >= length || decoded[i] != 0 || decoded[i + 1] != 0x30 ||
		    func_02001aec(state->digest, decoded + length - state->digestLength, state->digestLength) != 0)
			result = 2;
	}
	data_ov031_0224c9c0(workspace);
	return result;
}
