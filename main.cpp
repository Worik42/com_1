#include <stdio.h>
#include "AbstractServer/AbstractServer.h"
#include "Iy.h"
#include "Ix.h"
#include "IUnknown_.h"

int main()
{
  Iy *py;
  HResult_ res;
  int a = 2;
  int b = 2;
  res = CreateInstance(&a, &b, (void **)&py);
  Ix *px;
  b = 1;
  py->queryInterface(&b, (void **)&px);
  // py->queryInterface(b, (void **)&py);

  // IUnknown_ p;
  // CreateInstance(a, b, (void **)&p);
  // Iy *y;

  return 0;
}
