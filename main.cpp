#include <iostream>
#include "Fecha.h"
#include "Ticket.h"
#include "Hora.h"

using namespace std;

int main()
{
    cout<<"Hello, world!"<<endl;
    Ticket unTicket("202205041114001234567890");
    unTicket.mostrarDatos();
    Hora h(19, 22, 2);
    unTicket.asignarHora(h);
    Hora hora(8,26,9);
    cout<<hora.compararHora(unTicket.obtenerHora())<<endl;

    return 0;
}
