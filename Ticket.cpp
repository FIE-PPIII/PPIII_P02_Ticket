#include <iostream>
#include "Ticket.h"

using namespace std;

Ticket::Ticket(){

}

Ticket::Ticket(string datos){
    this->datos = datos;
    this->fecha.AsignarAAAA(2022);
    this->fecha.AsignarMM(4);
    this->fecha.AsignarDD(20);
}

Ticket::~Ticket(){

}


void Ticket::mostrarDatos(){
    cout<<this->datos<<endl;
}
