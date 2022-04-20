#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include <string>
#include "Fecha.h"

using namespace std;

class Ticket{
private:
    string datos;
    string nro;
    Fecha fecha;
public:
    Ticket();
    Ticket(string datos);
    ~Ticket();

    void asignarDatos(string datos);
    string obtenerDatos();
    string obtenerNumero();
    Fecha obtenerFecha();
    void mostrarDatos();
    void parsearDatos();

};

inline void Ticket::asignarDatos(string datos){
    this->datos = datos;
}

inline string Ticket::obtenerDatos(){
    return this->datos;
}

inline string Ticket::obtenerNumero(){
    return this->nro;
}

inline Fecha Ticket::obtenerFecha(){
    return this->fecha;
}

#endif // TICKET_H_INCLUDED
