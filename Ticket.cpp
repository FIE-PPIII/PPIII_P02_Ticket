#include <iostream>
#include "Ticket.h"
#include <string>

using namespace std;

Ticket::Ticket(){

}

Ticket::Ticket(string datos){
    this->datos = datos;
    this->fecha.AsignarAAAA(stoi(datos.substr(0,2)));
    this->fecha.AsignarMM(stoi(datos.substr(4,2)));
    this->fecha.AsignarDD(stoi(datos.substr(6,2)));
    this->hora.asignarHH(stoi(datos.substr(8,2)));
    this->hora.asignarMI(stoi(datos.substr(10,2)));
    this->hora.asignarSS(stoi(datos.substr(12,2)));
}

Ticket::~Ticket(){

}


void Ticket::mostrarDatos(){
    this->parsearDatos();
}

void Ticket::parsearDatos(){
    Fecha f = this->fecha;
    Hora h = this->hora;
    cout<<"(" + to_string(f.ObtenerDD()) + "/" + to_string(f.ObtenerMM()) + "/" + to_string(f.ObtenerAAAA()) + " " + h.formatearHora() +") " + this->datos<<endl;
}
