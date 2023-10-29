#pragma once
class Vector
{
private:
    int x, y;
    int direccion_x;
    int direccion_y;

public:
    Vector()
    {
        this->x = 0;
        this->y = 0;
        direccion_x = 1;
        direccion_y = 1;
    }
    Vector(int x, int y)
    {
        this->x = x;
        this->y = y;
        direccion_x = 1;
        direccion_y = 1;
    }

    void CambiarDireccionX()
    {
        this->direccion_x *= -1;
    }
    void CambiarDireccionY()
    {
        this->direccion_y *= -1;
    }
    void DezplazarX(unsigned int x)
    {
        this->x += x * this->direccion_x;
    }
    void DezplazarY(unsigned int y)
    {
        this->y += y;
    }
    int LeerX()
    {
        return this->x;
    }
    int LeerY()
    {
        return this->y;
    }
    ~Vector(){}
};