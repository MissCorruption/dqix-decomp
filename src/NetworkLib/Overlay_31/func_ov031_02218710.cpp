#include <globaldefs.h>
#include "std_library_functions.h"

struct StreamState02218710 {
	char* begin;
	char* current;
	char* end;
	int capacity;
};

extern "C" int func_020c7170(char* destination, unsigned long capacity, const char* format, ...);
extern "C" int func_ov031_0221883c(void* obj, StreamState02218710* b, int len);
extern const char data_ov031_02249ee8[];

// USA: func_ov031_02218710
extern "C" ARM int func_ov031_02218710(void* obj, const char* str) {
	int len;
	StreamState02218710* b = (StreamState02218710*)((char*)obj + 0x19f8);
	len = strlen(str);
	int avail = b->end - b->current;
	if (len > avail) {
		if (func_ov031_0221883c(obj, b, len - avail + 1) == 0) {
			return 1;
		}
		avail = b->end - b->current;
	}

	int written = func_020c7170(b->current, avail, data_ov031_02249ee8, str);
	if (written != len) {
		return 1;
	}

	b->current = b->current + written;
	return 0;
}
