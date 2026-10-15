#include <globaldefs.h>
#include "World/LootableContainer.h"

// USA: func_020269d0
ARM LootableContainerManager* ClearRegionAndReturnSelf020269d0(LootableContainerManager* obj) {
    obj->Reset();
    return obj;
}
