#ifndef GATO_H
#define GATO_H

#include <iostream>
#include "mascotas.h"
using namespace std;

class Gato : public IMascota {
private:
    string nombre;
    int edad;
    string color;

public:
    Gato(const string& _nombre, int _edad, const string& _color)
        : nombre(_nombre), edad(_edad), color(_color) {}

    string getNombre() const override { return nombre; }
    int getEdad() const override { return edad; }

    void setNombre(const string& n) override { nombre = n; }
    void setEdad(int e) override { edad = e; }

    void mostrarInfo() const override {
        cout << "Gato -> Nombre: " << nombre
             << ", Edad: " << edad
             << ", Color: " << color << endl;
    }

    void maullar() const {
        cout << nombre << " dice: ¡Miau!" << endl;
    }
};

#endif
