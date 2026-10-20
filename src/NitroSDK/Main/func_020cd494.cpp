#include <globaldefs.h>
#include "NitroSDK/Filesystem/OverlayFSManagement.h"

struct DestructorChain
{
    DestructorChain* next;
    void (*destructor)(void* object);
    void* object;
};

int DisableIRQInterrupts();
int SetIRQInterruptState(int);

extern DestructorChain* data_020f33b0;

// USA: func_020cd494
extern "C" ARM void func_020cd494(const OverlayMetadata& overlay)
{
    for (;;)
    {
        DestructorChain* head = NULL;
        DestructorChain* tail = NULL;
        const unsigned int regionStart = overlay.loadAddress;
        const unsigned int regionEnd = regionStart + (overlay.uncompressedSize + overlay.bssSectionSize);

        {
            int priorState = DisableIRQInterrupts();
            DestructorChain* prev = NULL;
            DestructorChain* base = data_020f33b0;
            DestructorChain* entry = base;

            while (entry)
            {
                DestructorChain* next = entry->next;
                const unsigned int destructor = (unsigned int)entry->destructor;
                const unsigned int object = (unsigned int)entry->object;

                if (object == 0 && destructor >= regionStart && destructor < regionEnd ||
                    object >= regionStart && object < regionEnd)
                {
                    if (!tail)
                    {
                        head = entry;
                    }
                    else
                    {
                        tail->next = entry;
                    }
                    if (base == entry)
                    {
                        base = data_020f33b0 = next;
                    }
                    tail = entry, entry->next = NULL;
                    if (prev)
                    {
                        prev->next = next;
                    }
                }
                else
                {
                    prev = entry;
                }
                entry = next;
            }
            SetIRQInterruptState(priorState);
        }

        if (!head)
        {
            break;
        }

        do
        {
            DestructorChain* next = head->next;
            if (head->destructor)
            {
                head->destructor(head->object);
            }
            head = next;
        } while (head);
    }
}
