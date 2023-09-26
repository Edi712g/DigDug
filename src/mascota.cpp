#include <iostream>
#include <Mascota.hpp>

int main()
{
    std::cout << "Juego de mascotas" << std::endl;

    Mascota m1, m2, m3;

    m1.EstablecerNombre("eso");
    m2.EstablecerNombre("y");
    m3.EstablecerNombre("mas");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();

    return 0;
}