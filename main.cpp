#include <iostream>
#include "perro.h"
#include "gato.h"
#include "pez.h"
#include "tienda.h"
using namespace std;

int main() {

    Perro perro1("Firulais", 3, "Labrador");
    Gato  gato1("Michi", 2, "Blanco");
    Pez   pez1("Nemo", 1, 4.5f);

    TiendaMascotas tienda;

    tienda.agregarMascota(&perro1);
    tienda.agregarMascota(&gato1);
    tienda.agregarMascota(&pez1);

    tienda.mostrarInventario();

    cout << "=== Acciones específicas ===" << endl;
    perro1.ladrar();
    gato1.maullar();
    pez1.nadar();

    return 0;
}
