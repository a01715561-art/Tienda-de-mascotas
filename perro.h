#ifndef PERRO_H
#define PERRO_H

#include <iostream>
#include "IMascota.h"
using namespace std;

class Perro : public IMascota {
private:
    string nombre;
    int edad;
    string raza;

public:
    Perro(const string& _nombre, int _edad, const string& _raza)
        : nombre(_nombre), edad(_edad), raza(_raza) {}

    string getNombre() const override { return nombre; }
    int getEdad() const override { return edad; }

    void setNombre(const string& n) override { nombre = n; }
    void setEdad(int e) override { edad = e; }

    void mostrarInfo() const override {
        cout << "Perro -> Nombre: " << nombre
             << ", Edad: " << edad
             << ", Raza: " << raza << endl;
    }

    void ladrar() const {
        cout << nombre << " dice: ¡Guau guau!" << endl;
    }
};

#endif
