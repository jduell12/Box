/******************************************************************************
 ** Date: July 19, 2019
 ** Description: Box class specification file
 *****************************************************************************/

#ifndef BOX_HPP
#define BOX_HPP

class Box{
private:
    double height;
    double length;
    double width;
public:
    Box(double h, double l, double w);
    Box();
    bool setHeight(double h);
    bool setLength(double l);
    bool setWidth(double w);
    double calcVolume();
    double calcSurfaceArea();
};




#endif /* BOX_HPP */
