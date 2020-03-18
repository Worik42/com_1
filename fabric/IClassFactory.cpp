#include "IClassFactory.h"
#include "IUnknown_.h"
#include "CFB.h"
#include "CFA.h"
#include <iostream>

HResult_ getClassObject(CLSID_ &clsid, IID_ &iid, void **ppv)
{
    HResult_ res;
    if (clsid == 1)
    {
        CFA *cfa = new CFA();
        *ppv = (void *)(IClassFactory *)(CFA *)ppv;
    }
    else if (clsid == 2)
    {
        CFB *cfb = new CFB();
        *ppv = (void *)(IClassFactory *)(CFB *)ppv;
        return res;
    }
    else
    {
        ppv = NULL;
        return 1;
    }
}