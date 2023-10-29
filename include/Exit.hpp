#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Exit: public Dibujo, public Actualizable
{
private:
    int tiempoVida;
public:
    Exit(Vector posicion): Dibujo(posicion.LeerX()+13,
     posicion.LeerY(), "Exit")
    {
        this->tiempoVida=100;
    }
    void Actualizar()
    {
        this->posicion.DezplazarX(1);
    }
    ~Exit() {}
};