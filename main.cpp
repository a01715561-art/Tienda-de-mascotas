#ifndef PERRO_H
#define PERRO_H

#include <iostream>
using namespace std;

class Perro {
private:
    string nombre;
    int edad;
    string raza;

public:
    Perro(string _nombre, int _edad, string _raza)
        : nombre(_nombre), edad(_edad), raza(_raza) {}

    void mostrarInfo() {
        cout << "Perro: " << nombre << ", Edad: " << edad 
             << ", Raza: " << raza << endl;
    }

    void ladrar() {
        cout << nombre << " dice: Guau guau!" << endl;
    }
};

#endif
