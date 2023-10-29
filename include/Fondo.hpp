#pragma once

#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Fondo : public Dibujo
{
private:
public:
    Fondo() : Dibujo("Rocs")
    {
        this->posicion = Vector();
    }

    Fondo(int x, int y) : Dibujo("trai")
    {
        this->posicion.DezplazarX(x);
        this->posicion.DezplazarY(y);
    }

    ~Fondo() {}
};