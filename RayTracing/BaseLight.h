#ifndef BASELIGHT_H
#define BASELIGHT_H

#include "Vector.h"
#include "Color.h"
class Tscene;
class TexplicitLight
{
public:
    TexplicitLight();
    ~TexplicitLight();
    virtual Tvector getDir(Tvector pos);
    virtual float getIntensity(int direction);
    virtual bool isVisible(Tvector pos,Tscene * scene);
    virtual Tcolor getIrradiance(Tvector pos,Tvector normal, Tscene *scene);
};

#endif // BASELIGHT_H

