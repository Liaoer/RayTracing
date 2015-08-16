#ifndef TLIGHTMATERIAL_H
#define TLIGHTMATERIAL_H

#include "Material.h"
class TlightMaterial : public Tmaterial
{
public:
    TlightMaterial();
    ~TlightMaterial();
    virtual MaterialType getType();
    virtual float BRDF(Tvector negativeViewDirection, Tvector negativeLightDirection, Tvector normal);
};

#endif // TLIGHTMATERIAL_H
