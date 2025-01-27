// CH-230-A
// a11_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Box.h"

using namespace std;

//Constructor Box with no parameters
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

//Constructor Box with all parameters
Box::Box(double Height, double Width, double Depth) {
    height = Height;
    width = Width;
    depth = Depth;
}

//Copy Constructor
Box::Box(Box &box) {
    height = box.height;
    width = box.width;
    depth = box.depth;
}

//Destructor
Box::~Box() {
}

//Setter methods
void Box:: setHeight(double Height) {
    height = Height;
}

void Box:: setWidth(double Width) {
    width = Width;
}

void Box:: setDepth(double Depth) {
    depth = Depth;
}

//Getter methods
double Box:: getHeight() {
    return height;
}

double Box:: getWidth() {
    return width;
}

double Box:: getDepth() {
    return depth;
}