#include <iostream>
#include <string>
#include "perro.h"
#include "gato.h"
#include "pez.h"
#include "tienda.h"
using namespace std;

int main() {
    TiendaMascotas tienda;
    int opcion = -1;

    while (opcion != 0) {
        cout << "\n========== TIENDA DE MASCOTAS ==========\n";
        cout << "1) Agregar perro\n";
        cout << "2) Agregar gato\n";
        cout << "3) Agregar pez\n";
        cout << "4) Ver inventario de la tienda\n";
        cout << "0) Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            string nombre, raza;
            int edad;

            cout << "\n=== Nueva mascota: PERRO ===\n";
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Edad: ";
            cin >> edad;
            cout << "Raza: ";
            cin >> raza;

            Perro* p = new Perro(nombre, edad, raza);
            if (tienda.agregarMascota(p)) {
                cout << "Perro agregado:\n";
                p->mostrarInfo();
                p->ladrar();
            } else {
                delete p; 
            }

        } else if (opcion == 2) {
            string nombre, color;
            int edad;

            cout << "\n=== Nueva mascota: GATO ===\n";
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Edad: ";
            cin >> edad;
            cout << "Color: ";
            cin >> color;

            Gato* g = new Gato(nombre, edad, color);
            if (tienda.agregarMascota(g)) {
                cout << "Gato agregado:\n";
                g->mostrarInfo();
                g->maullar();
            } else {
                delete g;
            }

        } else if (opcion == 3) {
            string nombre;
            int edad;
            float tamano;

            cout << "\n=== Nueva mascota: PEZ ===\n";
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Edad: ";
            cin >> edad;
            cout << "Tamaño (cm): ";
            cin >> tamano;

            Pez* z = new Pez(nombre, edad, tamano);
            if (tienda.agregarMascota(z)) {
                cout << "Pez agregado:\n";
                z->mostrarInfo();
                z->nadar();
            } else {
                delete z;
            }

        } else if (opcion == 4) {
            tienda.mostrarInventario();

        } else if (opcion == 0) {
            cout << "\nSaliendo de la tienda...\n";
        } else {
            cout << "Opcion no valida.\n";
        }
    }

    return 0;
}
