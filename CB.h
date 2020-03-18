#include "Ix.h"
#include "Iy.h"
class CB : public Iy, public Ix
{
public:
    int a;
    CB(int);
    virtual void fX();
    virtual void fY();
    virtual HResult_ queryInterface(IID_ *iid, void **ppv);
};