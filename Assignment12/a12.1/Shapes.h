// CH-230-A
// a12_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
#include <cmath>

class Shape {	
    		// base class
    //Changed to protected to avoid creating getters
    //class and changing parametric constructor        
	protected:   				
    // private access modifier: could also be protected
		std::string name;   
        // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	protected: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
	protected: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};


class Hexagon : public RegularPolygon {
	private:
		int side;
		std::string color;
	public:
		// Parametric constructor with all parameters
		Hexagon(const std::string& name, double posX, double posY, int edgesNum,
				int Side, const std::string& Color);

		// Default constructor
		Hexagon();

		// Copy constructor
		Hexagon(const Hexagon& obj);

		// Destructor
		~Hexagon();

		// Setter methods
		void setSide(int Side);
		void setColor(std::string Color);

		// Getter methods
		int getSide() const;
		std::string getColor() const;

		// Method to calculate perimeter and return an integer
		int perimeter() const;
		// Method to calculate area and return a double
		double area() const;
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};
    
#endif