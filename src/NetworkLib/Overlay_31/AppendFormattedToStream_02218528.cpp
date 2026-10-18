#include <globaldefs.h>
#include "std_library_functions.h"

struct StreamState0221883c { char* begin; char* current; char* end; int capacity; };
extern "C" int func_ov031_0221883c(void* obj, StreamState0221883c* b, int len);
int VariadicForward020c7170(char* destination, unsigned long capacity, const char* format, ...);

extern char data_ov031_02249ed0[];
extern char data_ov031_02249df8[];

// USA: func_ov031_02218528
extern "C" ARM int func_ov031_02218528(void* obj, const char* str, const char* val) {
	char* mid = (char*)obj + 0x1f8;
	StreamState0221883c* b = (StreamState0221883c*)(mid + 0x1800);
	int len = strlen(val);
	len += (strlen(data_ov031_02249ed0) - 4) + strlen(str);

	int room = b->end - b->current;
	if (len + 1 > room) {
		int need = len - room + 1;
		if (func_ov031_0221883c(obj, b, need) == 0) {
			return 1;
		}
	}

	char* raw = strstr(b->begin, data_ov031_02249df8);
	char saved = raw[2];
	char* p = raw + 2;
	int n = strlen(p) + 1;
	memmove(p + len, p, n);
	int written = VariadicForward020c7170(p, len + 1, data_ov031_02249ed0, str, val);
	p[written] = saved;
	b->current = b->current + len;
	return 0;
}
