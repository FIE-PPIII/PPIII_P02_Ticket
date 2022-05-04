//
// Created by Usuario on 4/26/2022.
//

#ifndef BASE_CPP_HORA_H
#define BASE_CPP_HORA_H


class Hora {
private:
    int hh;
    int mi;
    int ss;

    int procesarCompararHora(int hh, int mi, int ss);

public:
    Hora();
    Hora(int hh, int mi, int ss);
    ~Hora();

    void asignarHH(int hh);
    void asignarMI(int mi);
    void asignarSS(int ss);
    int obtenerHH();
    int obtenerMI();
    int obtenerSS();
    int compararHora(int h, int m, int s);
    int compararHora(Hora hora);
    int validarHora();
    void mostrarHora();
};

inline void Hora::asignarHH(int hh) {
    this->hh = hh;
}

inline void Hora::asignarMI(int mi) {
    this->mi = mi;
}

inline void Hora::asignarSS(int ss) {
    this->ss = ss;
}

inline int Hora::obtenerHH() {
    return this->hh;
}

inline int Hora::obtenerMI() {
    return this->mi;
}

inline int Hora::obtenerSS() {
    return this->ss;
}


#endif //BASE_CPP_HORA_H
