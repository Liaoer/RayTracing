#ifndef RAY_H
#define RAY_H
#include "Vector.h"

class Tray
{
public:
    Tray(const Tvector &orgin, const Tvector & direction);
    ~Tray();
    Tvector origin() const;
    void setOrigin(const Tvector &origin);

    Tvector direction() const;
    void setDirection(const Tvector &direction);

    Tvector getPoint(float t) const;
private:
    Tvector m_origin;
    Tvector m_direction;
};

#endif // RAY_H
