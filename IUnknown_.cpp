#include "IUnknown_.h"
#include "Ix.h"
#include "Iy.h"
#include "CA.h"
#include "CB.h"
#include <iostream>

HResult_ CreateInstance(CLSID_ *clsid, IID_ *iid, void **ppv)
{
    HResult_ res;
    if (*iid == 0)
    {
        CA *a = new CA();
        *ppv = (void *)(IUnknown_ *)(Ix *)a;
        return 0;
    }
    if (*clsid == 1)
    {
        CA *a = new CA();
        res = a->queryInterface(iid, ppv);
        return res;
    }
    else if (*clsid == 2)
    {
        CB *b = new CB(255);
        res = b->queryInterface(iid, ppv);
        return res;
    }
    else
    {
        *ppv = NULL;
        return 1;
    }
}
// class IUnknown_
// {
// private:
//     int count = 0;

// public:
//     ULONG_ IUnknown_::addRef()
//     {
//         count++;
//         return count;
//     }
//     ULONG_ IUnknown_::Release()
//     {
//         count--;
//         if (count == 0)
//         {
//             delete this;
//         }
//         return count;
//     }
// };
