#ifndef DIFFUSEMATERIAL_H
#define DIFFUSEMATERIAL_H

#include "Material.h"

class TdiffuseMaterial:public Tmaterial
{
public:
    TdiffuseMaterial();
    ~TdiffuseMaterial();
    virtual MaterialType getType();
    virtual float BRDF(Tvector negativeViewDirection, Tvector negativeLightDirection, Tvector normal);
};

#endif // DIFFUSEMATERIAL_H
