#include <stdio.h>
#include "Server.h"

Server::Server()
{
    a = 5;
    b = 4;
};

void Server::func()
{
    printf("%d", a + b);
}
