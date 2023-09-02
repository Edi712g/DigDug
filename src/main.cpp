#include <iostream>
#include <iostream>
#include <Mascota.hpp>



int main(int argc, char const *argv[])
{
    std::cout<<"mensaje"<<std::endl;

        Mascota m1,m2,m3; //se crean tres instancias
        
        m1.Establecernombre("Firulais");
        m2.Establecernombre("Pedro");
        m3.Establecernombre("Juan");
    
    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();
    return 0;
    //-I inclucion en el directorio 
    //chmod u+x compilar.sh permiso para compilar cambiar el modo de usuario + ejecutable

}
