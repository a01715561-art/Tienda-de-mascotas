#ifndef IMASCOTA_H
#define IMASCOTA_H

#include <string>
using namespace std;

class IMascota {
public:
    virtual string getNombre() const = 0;
    virtual int getEdad() const = 0;

    virtual void setNombre(const string& n) = 0;
    virtual void setEdad(int e) = 0;

    virtual void mostrarInfo() const = 0;

    virtual ~IMascota() = default;
};

#endif
