#ifndef PEZ_H
#define PEZ_H

#include <iostream>
using namespace std;

class Pez {
private:
    string especie;
    float tamaño; // en cm

public:
    Pez(string _especie, float _tamaño)
        : especie(_especie), tamaño(_tamaño) {}

    void mostrarInfo() {
        cout << "Pez: " << especie << ", Tamaño: " << tamaño << " cm" << endl;
    }

    void nadar() {
        cout << "El pez " << especie << " está nadando." << endl;
    }
};

#endif
