#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include <string>
#include "Fecha.h"
#include "Hora.h"

using namespace std;

class Ticket{
private:
    string datos;
    string nro;
    Fecha fecha;
    Hora hora;

    void parsearDatos();
public:
    Ticket();
    Ticket(string datos);
    ~Ticket();

    void asignarDatos(string datos);
    string obtenerDatos();
    string obtenerNumero();
    Fecha obtenerFecha();
    void asignarFecha(Fecha f);
    Hora obtenerHora();
    void asignarHora(Hora h);
    void mostrarDatos();

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

inline void Ticket::asignarFecha(Fecha f) {
    this->fecha = f;
}

inline Hora Ticket::obtenerHora() {
    return this->hora;
}

inline void Ticket::asignarHora(Hora h) {
    this->hora = h;
}

#endif // TICKET_H_INCLUDED
