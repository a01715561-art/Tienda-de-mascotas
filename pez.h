#ifndef PEZ_H
#define PEZ_H

#include <iostream>
#include "mascotas.h"
using namespace std;

class Pez : public IMascota {
private:
    string nombre;
    int edad;
    float tamano;

public:
    Pez(const string& _nombre, int _edad, float _tamano)
        : nombre(_nombre), edad(_edad), tamano(_tamano) {}

    string getNombre() const override { return nombre; }
    int getEdad() const override { return edad; }

    void setNombre(const string& n) override { nombre = n; }
    void setEdad(int e) override { edad = e; }

    void mostrarInfo() const override {
        cout << "Pez -> Nombre: " << nombre
             << ", Edad: " << edad
             << ", Tamaño: " << tamano << " cm" << endl;
    }

    void nadar() const {
        cout << nombre << " está nadando." << endl;
    }
};

#endif
