#ifndef GATO_H
#define GATO_H

#include <iostream>
using namespace std;

class Gato {
private:
    string nombre;
    string color;
    bool domestico;

public:
    Gato(string _nombre, string _color, bool _domestico)
        : nombre(_nombre), color(_color), domestico(_domestico) {}

    void mostrarInfo() {
        cout << "Gato: " << nombre << ", Color: " << color 
             << ", Domestico: " << (domestico ? "Si" : "No") << endl;
    }

    void maullar() {
        cout << nombre << " dice: Miau!" << endl;
    }
};

#endif
