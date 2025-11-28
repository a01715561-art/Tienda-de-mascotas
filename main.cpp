#include <iostream>
#include "Perro.h"
#include "Gato.h"
#include "Pez.h"
#include "TiendaMascotas.h"
using namespace std;

int main() {

    // Crear mascotas
    Perro perro1("Firulais", 3, "Labrador");
    Gato  gato1("Michi", 2, "Blanco");
    Pez   pez1("Nemo", 1, 4.5f);

    // Crear tienda (agregación)
    TiendaMascotas tienda;

    // Agregar mascotas existentes
    tienda.agregarMascota(&perro1);
    tienda.agregarMascota(&gato1);
    tienda.agregarMascota(&pez1);

    // Mostrar inventario completo
    tienda.mostrarInventario();

    // Acciones específicas
    cout << "=== Acciones específicas ===" << endl;
    perro1.ladrar();
    gato1.maullar();
    pez1.nadar();

    return 0;
}
