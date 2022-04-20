#include <iostream>
#include "Ticket.h"

using namespace std;

Ticket::Ticket(){

}

Ticket::Ticket(string datos){
    this->datos = datos;
}


void Ticket::mostrarDatos(){
    cout<<this->datos<<endl;
}

void Ticket::parsearDatos(){
    cout<<"Datos parseados: "<<this->datos<<endl;
}
