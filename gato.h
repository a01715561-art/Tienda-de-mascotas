#ifndef GATO_H
#define GATO_H

#include "mascotas.h"

class Gato : public Mascota {
private:
    string color;

public:
    Gato(const string& _nombre, int _edad, const string& _color)
        : Mascota(_nombre, _edad), color(_color) {}

    void setColor(const string& c) { color = c; }
    string getColor() const { return color; }

    void maullar() const {
        cout << nombre << " dice: ¡Miau!" << endl;
    }

    void mostrarInfo() const override {
        cout << "Gato  -> Nombre: " << nombre
             << ", Edad: "   << edad
             << ", Color: "  << color << endl;
    }
};

#endif
