#ifndef TIENDAMASCOTAS_H
#define TIENDAMASCOTAS_H

#include <vector>
#include <iostream>
#include "IMascota.h"
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
