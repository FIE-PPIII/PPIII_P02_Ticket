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

void Ticket::parsearDatos(){
    Fecha f = this->fecha;
    cout<<"(" + to_string(f.ObtenerDD()) + "/" + to_string(f.ObtenerMM()) + "/" + to_string(f.ObtenerAAAA()) + ") " + this->datos<<endl;
}
