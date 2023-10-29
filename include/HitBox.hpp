#pragma once
class HitBox
{
protected:
    unsigned int x;
    unsigned int y;
    unsigned int dx;
    unsigned int dy;

public:
    HitBox(unsigned int x, unsigned int y, unsigned int dx, unsigned int dy)
    {
        this->x = x;
        this->y = y;
        this->dx = dx;
        this->dy = dy;
    }

    ~HitBox() {}
};