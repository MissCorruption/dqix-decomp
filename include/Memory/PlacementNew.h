#pragma once

inline void* operator new(unsigned long, void* arg1)
{
    return arg1;
}
