#include <globaldefs.h>

struct WMOtherElements
{
    unsigned char count;
    unsigned char padding[3];
    struct
    {
        unsigned char id;
        unsigned char length;
        unsigned char rsv[2];
        unsigned char* body;
    } element[16];
};

struct WMBssDesc
{
    unsigned short length;
    char unk_2[0x3c - 0x2];
    unsigned short gameInfoLength;
    unsigned short otherElementCount;
    unsigned char elements[1];
};

// USA: func_020d4c7c
extern "C" ARM WMOtherElements func_020d4c7c(const WMBssDesc* bssDesc)
{
    WMOtherElements elements;
    const unsigned char* element;
    int i;
    unsigned char length;
    unsigned char maxLength;
    if (bssDesc->gameInfoLength != 0)
    {
        elements.count = 0;
        return elements;
    }
    elements.count = bssDesc->otherElementCount;
    if (elements.count == 0)
        return elements;
    if (elements.count > 16)
        elements.count = 16;
    element = bssDesc->elements;
    maxLength = bssDesc->length * 2 - 64;
    length = 0;
    for (i = 0; i < elements.count; i++)
    {
        unsigned char elementLength;
        elements.element[i].id = element[0];
        elements.element[i].length = element[1];
        elements.element[i].body = (unsigned char*)&element[2];
        elementLength = elements.element[i].length + 2;
        length += elementLength;
        if (length > maxLength)
        {
            elements.count = 0;
            return elements;
        }
        element += elementLength;
    }
    return elements;
}
