#ifndef PEZ_H
#define PEZ_H

#include "mascotas.h"

class Pez : public Mascota {
private:
    float tamano;  

public:
    Pez(const string& _nombre, int _edad, float _tamano)
        : Mascota(_nombre, _edad), tamano(_tamano) {}

    void setTamano(float t) { tamano = t; }
    float getTamano() const { return tamano; }

    void nadar() const {
        cout << nombre << " está nadando." << endl;
    }

    void mostrarInfo() const override {
        cout << "Pez   -> Nombre: " << nombre
             << ", Edad: "   << edad
             << ", Tamaño: " << tamano << " cm" << endl;
    }
};

#endif
