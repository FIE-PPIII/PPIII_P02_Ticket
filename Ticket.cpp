#include <iostream>
#include "Ticket.h"

using namespace std;

Ticket::Ticket(){

}

Ticket::Ticket(string datos){
    this->datos = datos;
    this->nro = datos;
}

Ticket::~Ticket(){

}


void Ticket::mostrarDatos(){
    cout<<this->datos<<endl;
    cout<<this->nro<<endl;
}
