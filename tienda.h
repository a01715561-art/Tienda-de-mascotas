#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <iostream>
#include "mascotas.h"
using namespace std;

class TiendaMascotas {
private:
    vector<IMascota*> inventario;

public:
    void agregarMascota(IMascota* m) {
        inventario.push_back(m);
    }

    void mostrarInventario() const {
        cout << "\n=== Inventario de la tienda ===" << endl;
        for (IMascota* m : inventario) {
            m->mostrarInfo();
        }
        cout << endl;
    }
};

#endif
