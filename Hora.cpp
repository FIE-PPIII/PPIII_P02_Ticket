//
// Created by Usuario on 4/26/2022.
//

#include <string>
#include "Hora.h"
#include <iostream>

using namespace std;

Hora::Hora() {
    this->hh = 0;
    this->mi = 0;
    this->ss = 0;
}

Hora::Hora(int hh, int mi, int ss) {
    this->hh = hh;
    this->mi = mi;
    this->ss = ss;
}

Hora::~Hora() {

}

string Hora::formatearHora() {
    string hora = "";
    if (this->hh < 10)
        hora = hora + "0";
    hora = hora + to_string(this->hh) + ":";
    if (this->mi < 10)
        hora = hora + "0";
    hora = hora + to_string(this->mi) + ":";
    if (this->ss < 10)
        hora = hora + "0";
    hora = hora + to_string(this->ss);
    return hora;
}

int Hora::procesarCompararHora(int h, int m, int s) {
    if (this->hh > h)
        return 1;
    else if (this->hh < h)
        return -1;
    else if (this->mi > m)
        return 1;
    else if (this->mi < m)
        return -1;
    else if (this->ss > s)
        return 1;
    else if (this->ss < s)
        return -1;
    return 0;
}

int Hora::compararHora(int h, int m, int s) {
    return this->procesarCompararHora(h, m, s);
}

int Hora::compararHora(Hora hora) {
    return this->procesarCompararHora(hora.hh, hora.mi, hora.ss);
}

int Hora::validarHora() {
    return (this->hh >= 0 && this->hh < 24 && this->mi >=0 && this->mi < 60 && this->ss >= 0 && this->ss < 60);
}

void Hora::mostrarHora() {
    cout<<this->hh<<":"<<this->mi<<":"<<this->ss<<endl;
}