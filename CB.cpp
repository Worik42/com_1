#include "CB.h"
#include "Ix.h"
#include "Iy.h"

CB::CB(int i)
{
    a = i;
};

HResult_ CB::queryInterface(IID_ *iid, void **ppv)
{
    if (*iid == 1)
    {
        *ppv = (void *)(Ix *)this;
        return 0;
    }
    else if (*iid == 2)
    {
        *ppv = (void *)(Iy *)this;
        return 0;
    }
}