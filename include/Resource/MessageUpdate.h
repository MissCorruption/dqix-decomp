#pragma once

struct MessageSystem;

extern "C" void func_02065990(MessageSystem* window, int ticks);
void InitCombatSlots02043040(MessageSystem* window);
void ResetControllerState020430b0(MessageSystem* window);

#if defined(jpn)
extern "C" int func_02069430(void* unused, unsigned short token);
extern "C" int func_02069444(void* unused, unsigned short token);
#else
bool IsHighByteFF02044494(void* unused, void* token);
int Dispatch02044420(void* unused, void* token);
#endif
