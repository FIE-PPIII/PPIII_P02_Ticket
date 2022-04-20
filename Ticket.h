#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include <string>


using namespace std;

class Ticket{
private:
    string datos;
    string nro;

public:
    Ticket();
    Ticket(string datos);
    ~Ticket();

    void asignarDatos(string datos);
    string obtenerDatos();
    string obtenerNumero();
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


#endif // TICKET_H_INCLUDED
