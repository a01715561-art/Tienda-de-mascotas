#ifndef MASCOTAS_H
#define MASCOTAS_H

#include <string>
#include <iostream>
using namespace std;

class Mascota {
protected:
    string nombre;
    int    edad;

public:
    Mascota(const string& _nombre, int _edad)
        : nombre(_nombre), edad(_edad) {}

    string getNombre() const { return nombre; }
    int    getEdad()   const { return edad;  }

    void setNombre(const string& n) { nombre = n; }
    void setEdad(int e)             { edad   = e; }

    virtual void mostrarInfo() const {
        cout << "Mascota -> Nombre: " << nombre
             << ", Edad: " << edad << endl;
    }

    virtual ~Mascota() {}
};

#endif
