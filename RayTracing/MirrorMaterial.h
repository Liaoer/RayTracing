#ifndef GLASSYMATERIAL_H
#define GLASSYMATERIAL_H

#include "Material.h"

class TmirrorMaterial : public Tmaterial
{
public:
    TmirrorMaterial();
    ~TmirrorMaterial();
    virtual MaterialType getType();
    virtual float BRDF(Tvector negativeViewDirection, Tvector negativeLightDirection, Tvector normal);
};

#endif // GLASSYMATERIAL_H
