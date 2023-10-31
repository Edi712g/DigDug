#include <iostream>
#include <Alimento.hpp>
#include <Bomba.hpp>
#include <DigDug.hpp>
#include <Fruta.hpp>
#include <Fygars.hpp>
#include <Interfa.hpp>
#include <Jugador.hpp>
#include <Nivel.hpp>
#include <Pala.hpp>
#include <Pantalla.hpp>
#include <Personaje.hpp>
#include <Pookas.hpp>
#include <Roca.hpp>
#include <Scord.hpp>
#include <Tierra.hpp>
#include <Traje.hpp>
#include <Tunel.hpp>
#include <Verdura.hpp>

#include <curses.h>
#include <string.h>
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <filesystem>

#include <Ventana.hpp>
#include <list>
#include <DigDug.hpp>
#include <Proyectil.hpp>
#include <Exit.hpp>
#include <Fondo.hpp>

using namespace std;
class Demo
{
private:
    int x, y;
};

int main(int argc, char const *argv[])
{
    // std::cout << "DigDug-Bienvenido " << std::endl;
    Alimento a;
    Bomba b;
    Fruta f;
    Fygars fy;
    Interfa i;
    Jugador j;
    Nivel n;
    Pala p;
    Pantalla pa;
    Personaje pe;
    Pookas po;
    Roca r;
    Scord s;
    Tierra t;
    Tunel tu;
    Verdura v;

    Fondo *ro = new Fondo();
    
    DigDug *dig = new DigDug();

    Ventana *ventana = new Ventana();

    list<Dibujo *> dibujos;
    dibujos.push_back(ro);
    dibujos.push_back(dig);

    list<Actualizable *> actualizables;
    actualizables.push_back(dig);

    while (!ventana->DeboCerrar())
    {
        int key = getch();
        if (key == 'a' || key == KEY_LEFT)
        {
            dig->Avanzar();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            dig->CambiarDireccion();
        }
        if (key == 'e' || key == KEY_DOWN)
        {
            Exit *e =
                new Exit(dig->LeerPosicion());
            dibujos.push_back(e);
            actualizables.push_back(e);
        }
        if (key == ' ')
        {
            Proyectil *p =
                new Proyectil(dig->LeerPosicion());
            dibujos.push_back(p);
            actualizables.push_back(p);
        }
        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    }

    return 0;
}