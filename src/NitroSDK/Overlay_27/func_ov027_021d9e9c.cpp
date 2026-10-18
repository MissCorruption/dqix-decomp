#include <globaldefs.h>
#include "Filesystem/FileAccessor.h"
#include "Filesystem/LowNitroHandle.h"
#include "Filesystem/NitroVM.h"
#include "System/Cache.h"
#include "System/Memory.h"

struct MBiCacheInfo
{
    unsigned long src;
    unsigned long len;
    unsigned char* ptr;
    unsigned long state;
};

struct MBiCacheList
{
    unsigned long lifetime;
    char unk_4[0xc];
    char arc_name[4];
    unsigned long arc_name_len;
    void* arc_pointer;
    char unk_1c[0x14];
    MBiCacheInfo list[4];
};

struct MBRomHeader
{
    char unk_0[0x20];
    unsigned long main_rom_offset;
    unsigned long main_entry_address;
    unsigned long main_ram_address;
    unsigned long main_size;
    unsigned long sub_rom_offset;
    unsigned long sub_entry_address;
    unsigned long sub_ram_address;
    unsigned long sub_size;
    char unk_40[0x20];
    unsigned long rom_ctrl;
    char unk_64[0x1c];
    unsigned long rom_size;
    char unk_84[0x160 - 0x84];
};

static inline const MBRomHeader* GetOwnRomHeader()
{
    return (const MBRomHeader*)0x027ffe00;
}

struct MbRomOffsets
{
    unsigned long unk_0;
    unsigned long main_offset;
    unsigned long sub_offset;
    unsigned long unk_c;
};

struct MbSegmentHeaderArea
{
    unsigned long top;
    unsigned char* source;
    unsigned char* destination;
    unsigned long len;
};

#define SEGMENT_BUFFER_MIN 0x164
#define SECURE_AREA_START 0x4000
#define SECURE_AREA_END 0x8000

extern "C" const unsigned long (*data_ov027_021dd8e4)[2];
extern "C" char data_ov027_021dd8e8[];

extern "C"
{
    void AutoloadCallback();
    void func_ov027_021dd104(MBiCacheList* pl);
    void func_ov027_021dd118(MBiCacheList* pl, unsigned long src, unsigned long len, void* ptr, unsigned long state);
    void func_ov027_021da314(const MbSegmentHeaderArea* area, unsigned long top, unsigned long bottom, int clear);
}

// USA: func_ov027_021d9e9c
extern "C" ARM int func_ov027_021d9e9c(NitroVM* file, void* buffer, unsigned long len)
{
    int ret = false;
    if (len >= SEGMENT_BUFFER_MIN)
    {
        int isOwnFile = false;
        unsigned long rest = len;
        unsigned char* p = (unsigned char*)buffer;
        MBiCacheList* cache = NULL;
        MbRomOffsets* seg = NULL;
        MBRomHeader* header = (MBRomHeader*)buffer;
        int top;
        unsigned long authOffset;
        NitroVM ownFile;

        p += sizeof(MBRomHeader);
        rest -= sizeof(MBRomHeader);

        if (file != NULL)
        {
            top = file->fileInfo.cursorPos - file->fileInfo.startOffset;
            if (NitroVM_ReadSync(file, header, sizeof(MBRomHeader)) < (int)sizeof(MBRomHeader))
                rest = 0;
            authOffset = header->rom_size;
            if (authOffset == 0)
                authOffset = 0x01000000;
        }
        else
        {
            authOffset = GetOwnRomHeader()->rom_size;
            if (authOffset == 0)
                authOffset = 0x01000000;
            isOwnFile = true;
            NitroVM_Initialize(&ownFile);
            NitroVM_PrepareRead(&ownFile, NitroHandle_FindBySignature(data_ov027_021dd8e8, 3), 0, authOffset + 0x88,
                                (unsigned int)-1);
            file = &ownFile;
            top = file->fileInfo.cursorPos - file->fileInfo.startOffset;
            VectorizedInvertedMemcpy(GetOwnRomHeader(), header, sizeof(MBRomHeader));
            header->rom_ctrl |= 0x406000;
        }

        if (rest >= 0x88)
        {
            NitroVM_Seek(file, top + authOffset, 0);
            NitroVM_ReadSync(file, p, 0x88);
            p += 0x88;
            rest -= 0x88;
        }
        else
        {
            rest = 0;
        }

        if (rest >= sizeof(MBiCacheList))
        {
            cache = (MBiCacheList*)p;
            func_ov027_021dd104(cache);
            p += sizeof(MBiCacheList);
            rest -= sizeof(MBiCacheList);
            func_ov027_021dd118(cache, 0, sizeof(MBRomHeader), header, 3);
            {
                int length;
                const char* name = (const char*)file->linkedHandle;
                for (length = 0; length < 3 && name[length] != '\0'; ++length)
                {
                }
                VectorizedInvertedMemcpy(name, cache->arc_name, length);
                cache->arc_name_len = length;
                cache->arc_pointer = (void*)name;
            }
        }
        else
        {
            rest = 0;
        }

        if (rest >= 0x10)
        {
            seg = (MbRomOffsets*)p;
            seg->unk_0 = 0;
            seg->main_offset = header->main_rom_offset + (top + file->fileInfo.startOffset);
            seg->sub_offset = header->sub_rom_offset + (top + file->fileInfo.startOffset);
            p += 0x10;
            rest -= 0x10;
        }
        else
        {
            rest = 0;
        }

        if (rest >= header->main_size + header->sub_size)
        {
            const int base = file->fileInfo.startOffset;
            NitroVM_Seek(file, seg->main_offset - base, 0);
            NitroVM_ReadSync(file, p, header->main_size);
            func_ov027_021dd118(cache, seg->main_offset, header->main_size, p, 3);
            const unsigned long mainSize = header->main_size;
            NitroVM_Seek(file, seg->sub_offset - base, 0);
            NitroVM_ReadSync(file, p + mainSize, header->sub_size);
            func_ov027_021dd118(cache, seg->sub_offset, header->sub_size, p + mainSize, 3);
            ret = true;
        }
        else if (rest >= 0xcc00)
        {
            unsigned long offset;
            const unsigned long base = file->fileInfo.startOffset;
            offset = seg->main_offset;
            NitroVM_Seek(file, offset - base, 0);
            NitroVM_ReadSync(file, p, 0x4400);
            func_ov027_021dd118(cache, offset, 0x4400, p, 3);
            p += 0x4400;
            offset += 0x4400;
            NitroVM_Seek(file, offset - base, 0);
            NitroVM_ReadSync(file, p, 0x4400);
            func_ov027_021dd118(cache, offset, 0x4400, p, 2);
            p += 0x4400;
            offset += 0x4400;
            NitroVM_Seek(file, offset - base, 0);
            NitroVM_ReadSync(file, p, 0x4400);
            func_ov027_021dd118(cache, offset, 0x4400, p, 2);
            ret = true;
        }

        NitroVM_Seek(file, top, 0);

        if (isOwnFile)
        {
            NitroVM_FinishRead(&ownFile);
            if (ret)
            {
                MbSegmentHeaderArea area;
                const unsigned long(*range)[2] = data_ov027_021dd8e4;
                area.top = header->main_rom_offset;
                area.source = (unsigned char*)(header->main_ram_address - header->main_rom_offset);
                area.destination = cache->list[1].ptr - header->main_rom_offset;
                area.len = len;
                func_ov027_021da314(&area, SECURE_AREA_START, SECURE_AREA_END, true);
                if ((*range)[1] != 0)
                {
                    do
                    {
                        func_ov027_021da314(&area, (*range)[0], (*range)[0] + (*range)[1], false);
                    } while ((*++range)[1] != 0);
                }
                unsigned char* dst = cache->list[1].ptr;
                dst += (unsigned long)AutoloadCallback - header->main_ram_address;
                *(unsigned long*)dst = 0xe12fff1e;
            }
        }
        if (ret)
            CleanInvalidateCacheRange(buffer, len);
    }
    return ret;
}
