#include <stdio.h>
#include "AbstractServer/AbstractServer.h"

int main()
{
  AbstractServer *s = CreateInstance();
  s->func();
  return 0;
}
