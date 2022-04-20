#include <iostream>
#include "Fecha.h"
#include "Ticket.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    Ticket unTicket("1234567890");
    unTicket.parsearDatos();

    return 0;
}
