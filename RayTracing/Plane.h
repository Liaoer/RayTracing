#ifndef PLANE_H
#define PLANE_H

#include "IntersectionResult.h"
#include "BaseGeometry.h"
#include "Vector.h"
class Tplane : public TbaseGeometry
{
public:
    Tplane(Tvector normal,float dist);
    ~Tplane();
    virtual TintersectionResult getIntersect(const Tray & ray);
private:
    Tvector m_normal;
    Tvector m_pos;
    float m_dist;
};

#endif // PLANE_H
