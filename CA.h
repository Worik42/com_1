#include "Ix.h"

class CA : public Ix
{
public:
    CA();
    virtual void fX();
    virtual HResult_ queryInterface(IID_ *iid, void **ppv);
};