/******************************************************************************
 ** Date: July 19, 2019
 ** Description: Box class that has 3 double parameters for height, length and
 ** and width. Box class has two constructors (default and one that takes 3
 ** arguments). Has a function to calculate the volume and surface area based
 ** on the arguments provided or the default arguments.
 *****************************************************************************/

#include "Box.hpp"

/******************************************************************************
 **                         Box::Box(double, double, double)
 ** Constructor that takes 3 double arguments and initializes the variables
 ** height, length and width based on the arguments provided.
 *****************************************************************************/
Box::Box(double h, double l, double w){
    height = h;
    length = l;
    width = w;
}

/******************************************************************************
 **                         Box:Box()
 ** Default constructor that sets all the variables to 1
 *****************************************************************************/
Box::Box(){
    height = 1;
    length = 1;
    width = 1;
}

/******************************************************************************
 **                         Box::setHeight
 ** If the argument passed to the setHeight function is zero or greater then
 ** it is copied into the variable. Otherwise it sets it to 1.
 *****************************************************************************/
bool Box::setHeight(double h){
    bool validHeight = true;

    if (h >= 0){
        height = h;
    } else {
        height = 1;
        validHeight = false;
    }

    return validHeight;
}

/******************************************************************************
 **                         Box::setLength
 ** If the argument passed to the setLength function is zero or greater then
 ** it is copied into the variable. Otherwise it sets it to 1.
 *****************************************************************************/
bool Box::setLength(double l){
    bool validLength = true;

    if (l >= 0){
        length = l;
    } else {
        length = 1;
        validLength = false;
    }

    return validLength;

}

/******************************************************************************
 **                         Box::setWidth
 ** If the argument passed to the setWidth function is zero or greater then
 ** it is copied into the variable. Otherwise it sets width to 1.
 *****************************************************************************/
bool Box::setWidth(double w){
    bool validWidth = true;

    if (w >= 0){
        width = w;
    } else {
        width = 1;
        validWidth = false;
    }

    return validWidth;
}

/******************************************************************************
 **                         Box::calcVolume
 ** Function that calculates and returns the volume of the box
 *****************************************************************************/
double Box::calcVolume(){
    double volume = 0;

    volume = height * length * width;

    return volume;
}

/******************************************************************************
 **                         Box::calcSurfaceArea
 ** Function that calculates and returns the surface area of the box
 *****************************************************************************/
double Box::calcSurfaceArea(){
    double surfaceArea = 0;

    surfaceArea = (2*(height*width)) + (2*(height*length)+(2*(width*length)));

    return surfaceArea;
}
