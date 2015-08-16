#ifndef SPHERE_H
#define SPHERE_H
#include "Vector.h"
#include "BaseGeometry.h"

class Tsphere : public TbaseGeometry
{
public:
    Tsphere(float radius, Tvector center);
    ~Tsphere();
    float radius() const;
    void setRadius(float radius);

    Tvector center() const;
    void setCenter(Tvector center);

    virtual TintersectionResult getIntersect(const Tray & ray);

    virtual float getIntensity(int direction);
    virtual bool isVisible(Tvector pos,Tscene * scene);
    virtual Tcolor getIrradiance(Tvector pos,Tvector normal, Tscene *scene);
    virtual Tvector getDir(Tvector pos);
private:
    void updateSqrRadius();
private:
    float m_radius;
    Tvector m_center;
    float m_sqrRadius;
};

#endif // SPHERE_H
