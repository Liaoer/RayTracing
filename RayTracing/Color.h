#ifndef COLOR_H
#define COLOR_H


class Tcolor
{
public:
    Tcolor();
    Tcolor(float red, float green, float blue);
    ~Tcolor();
    Tcolor operator + (const Tcolor & color) const;
    Tcolor operator * (const Tcolor & color) const;
    Tcolor operator * (const float factor) const;
    Tcolor operator +=(const Tcolor & color);
    Tcolor operator / (float f) const;
    Tcolor modulate(float f)const;
    int redInt();
    int blueInt();
    int greenInt();
    float luminance();
    float r,g,b;
};

#endif // COLOR_H
