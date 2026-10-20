#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"

struct SoundArchive020bd88c {
	char _pad[0x7c];
	NitroFileAccessor fileId;
};

extern struct SoundArchive020bd88c* data_02110370;

// USA: func_020bd88c
ARM NitroFileAccessor GetHolderPair020bd88c(void) {
	SoundArchive020bd88c* arc = data_02110370;

	return arc->fileId;
}
