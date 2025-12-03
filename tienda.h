#ifndef TIENDA_H
#define TIENDA_H

#include "mascotas.h"

const int MAX_MASCOTAS = 100;

class TiendaMascotas {
private:
    Mascota* inventario[MAX_MASCOTAS];
    int total;

public:
    TiendaMascotas() : total(0) {}

    bool agregarMascota(Mascota* m) {
        if (total >= MAX_MASCOTAS) {
            cout << "La tienda está llena, no se pueden agregar más mascotas.\n";
            return false;
        }
        inventario[total] = m;
        total++;
        return true;
    }

    void mostrarInventario() const {
        if (total == 0) {
            cout << "\nLa tienda todavía no tiene mascotas registradas.\n";
            return;
        }

        cout << "\n=== Inventario de la tienda ===\n";
        for (int i = 0; i < total; i++) {
            inventario[i]->mostrarInfo(); 
        }
        cout << endl;
    }

    ~TiendaMascotas() {
        for (int i = 0; i < total; i++) {
            delete inventario[i];
        }
    }
};

#endif
