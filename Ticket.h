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

};

#endif // TICKET_H_INCLUDED
