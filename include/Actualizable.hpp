#pragma once

class Actualizable
{
private:
public:
    Actualizable(/* args */) {}
    virtual void Actualizar() = 0;
    ~Actualizable() {}
};