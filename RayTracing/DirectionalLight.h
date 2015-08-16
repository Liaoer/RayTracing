#ifndef DIRECTIONALLIGHT_H
#define DIRECTIONALLIGHT_H
#include <Vector.h>
#include "BaseLight.h"
#include "Color.h"
class TdirectionalLight :public TexplicitLight
{
public:
    TdirectionalLight(Tvector dir,float maxIntensity,Tcolor color);
    ~TdirectionalLight();
    virtual bool isVisible(Tvector pos,Tscene * scene);
    virtual float getIntensity(int direction);
    virtual Tcolor getIrradiance(Tvector pos,Tvector normal,Tscene * scene);
    Tcolor color() const;
    void setColor(const Tcolor &color);
    virtual Tvector getDir(Tvector pos);
private:
    Tvector m_dir;
    Tcolor m_color;
    float m_maxIntensity;
};

#endif // DIRECTIONALLIGHT_H
