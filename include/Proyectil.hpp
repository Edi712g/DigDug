#pragma once

#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Proyectil : public Dibujo, public Actualizable
{
private:
    int tiempoVida;

public:
    Proyectil(Vector posicion) : Dibujo(posicion.LeerX()+10,
     posicion.LeerY()+3, "bullet")
    {
        this->tiempoVida = 100;
    }
    void Actualizar()
    {
        this->posicion.DezplazarX(1);
    }
    ~Proyectil() {}
};