#ifndef PERRO_H
#define PERRO_H

#include "mascotas.h"

class Perro : public Mascota {
private:
    string raza;

public:
    Perro(const string& _nombre, int _edad, const string& _raza)
        : Mascota(_nombre, _edad), raza(_raza) {}

    void setRaza(const string& r) { raza = r; }
    string getRaza() const { return raza; }

    void ladrar() const {
        cout << nombre << " dice: ¡Guau guau!" << endl;
    }

    void mostrarInfo() const override {
        cout << "Perro -> Nombre: " << nombre
             << ", Edad: "   << edad
             << ", Raza: "   << raza << endl;
    }
};

#endif

