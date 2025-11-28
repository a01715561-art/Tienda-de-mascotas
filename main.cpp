#include <iostream>
#include "Perro.h"
#include "Gato.h"
#include "Pez.h"
using namespace std;

int main() {
    // Crear un objeto de cada clase
    Perro perro1("Firulais", 3, "Labrador");
    Gato gato1("Michi", "Negro", true);
    Pez pez1("Betta", 5.0);

    // Mostrar información inicial
    cout << "=== Informacion de las mascotas ===" << endl;
    perro1.mostrarInfo();
    gato1.mostrarInfo();
    pez1.mostrarInfo();

    cout << "\n=== Probando métodos específicos ===" << endl;
    perro1.ladrar();
    gato1.maullar();
    pez1.nadar();

    // Probar getters/setters para demostrar encapsulamiento
    cout << "\n=== Actualizando algunos datos ===" << endl;
    perro1.setEdad(4);
    gato1.setColor("Blanco");
    pez1.setTamano(5.5);

    cout << "Nueva edad de " << perro1.getNombre() << ": "
         << perro1.getEdad() << endl;

    cout << "Nuevo color de " << gato1.getNombre() << ": "
         << gato1.getColor() << endl;

    cout << "Nuevo tamaño del pez " << pez1.getEspecie() << ": "
         << pez1.getTamano() << " cm" << endl;

    return 0;
}
