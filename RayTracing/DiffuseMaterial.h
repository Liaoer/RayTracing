#ifndef TDIFFUSEMATERIAL_H
#define TDIFFUSEMATERIAL_H

#include "Material.h"

class TdiffuseMaterial:public Tmaterial
{
public:
    TdiffuseMaterial();
    ~TdiffuseMaterial();
    virtual MaterialType getType();
    virtual float BRDF(Tvector negativeViewDirection, Tvector negativeLightDirection, Tvector normal);
};

#endif // TDIFFUSEMATERIAL_H
