#include <globaldefs.h>
#include <Memory/SafeAllocator.h>
#include <std_library_functions.h>

struct Element020e0310
{
    short key_;
    unsigned short field_0x2;
    int stringOffset_;
};
struct Container020e0310
{
    unsigned int count_ : 12;
    unsigned int rest_ : 20;
    Element020e0310* entries_;
    char* strings_;
};
struct StringEntry020e0028
{
    short key_;
    char* text_;
};
struct StringTable020e0028
{
    unsigned int count_ : 12;
    unsigned int rest_ : 20;
    StringEntry020e0028* entries_;
    void* field_0x8;
};
typedef int (*ElementKey020e0028)(Element020e0310*);
extern "C" short _Z21GetShortAt0x0020dfbd4Ps(short*);
extern "C" Element020e0310* _Z20BinarySearch020e0310P17Container020e0310iPFiP15Element020e0310E(Container020e0310*, int, ElementKey020e0028);
extern "C" int func_020e0280(Container020e0310*, void*, unsigned char*, void*);
extern "C" char* func_020dfbfc(Container020e0310*, int, int);
extern "C" char* _Z26AllocateStringCopy020da150P13SafeAllocatorPKc(SafeAllocator*, const char*);

static inline short ReadKey020e0028(const StringEntry020e0028* entry)
{
    SDK_NULL_ASSERT(entry);
    return entry->key_;
}

template<class Entry>
static inline void SwapEntries020e0028(Entry& first, Entry& second)
{
    Entry temporary = first;
    first = second;
    second = temporary;
}

// USA: func_020e0028
extern "C" ARM int func_020e0028(StringTable020e0028* self, SafeAllocator* allocator,
    void* source, unsigned int size, short* keys, unsigned short count)
{
    if (!allocator || !source || !size || !keys || !count)
        return 0;
    memset(self, 0, sizeof(*self));
    Container020e0310 container;
    memset(&container, 0, sizeof(container));
    unsigned char converted;
    func_020e0280(&container, source, &converted, 0);
    short* firstKey;
    int matched;
    Container020e0310* search;
    StringEntry020e0028* output;
    int i;
    int inputCount;
    matched = 0;
    search = &container;
    i = 0;
    firstKey = keys;
    inputCount = count;
    for (; i < inputCount; i++, firstKey++)
    {
        short* key = firstKey;
        if (_Z20BinarySearch020e0310P17Container020e0310iPFiP15Element020e0310E(search, *key, (ElementKey020e0028)_Z21GetShortAt0x0020dfbd4Ps))
            matched++;
    }
    self->entries_ = (StringEntry020e0028*)allocator->Allocate(matched * sizeof(StringEntry020e0028));
    if (self->entries_)
    {
        self->count_ = matched;
        firstKey = keys;
        output = self->entries_;
        for (i = 0; i < inputCount; i++, firstKey++)
        {
            Element020e0310* entry = _Z20BinarySearch020e0310P17Container020e0310iPFiP15Element020e0310E(&container, *firstKey,
                (ElementKey020e0028)_Z21GetShortAt0x0020dfbd4Ps);
            if (entry)
            {
                const char* text = func_020dfbfc(&container, entry->stringOffset_, 0);
                output->key_ = entry->key_;
                output->text_ = _Z26AllocateStringCopy020da150P13SafeAllocatorPKc(allocator, text);
                output++;
            }
        }
    }
    if (matched >= 2)
    {
        if (!self)
            goto finished;
        int length = self->count_;
        if (!self->entries_ || !length)
            goto finished;
        int last;
        int right = length - 1;
        int left = 0;
        for (;;)
        {
            output = self->entries_ + left;
            last = -1;
            for (int i = left; i < right; output++, i++)
            {
                StringEntry020e0028* nextEntry = output + 1;
                short current = ReadKey020e0028(output);
                short next = ReadKey020e0028(nextEntry);
                if (current > next)
                {
                    SwapEntries020e0028(*output, *nextEntry);
                    last = i;
                }
            }
            StringEntry020e0028* reverse;
            int first = -1;
            if (last == first)
                break;
            right = last;
            reverse = self->entries_ + right;
            for (; last > left; last--)
            {
                output = reverse - 1;
                if (output->key_ > reverse->key_)
                {
                    StringEntry020e0028 temporary = *reverse;
                    reverse->key_ = output->key_;
                    reverse->text_ = output->text_;
                    output->key_ = temporary.key_;
                    output->text_ = temporary.text_;
                    first = last;
                }
                reverse = output;
            }
            if (first == -1)
                break;
            left = first;
        }
    }
finished:
    return 1;
}
