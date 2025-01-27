// CH-230-A
// a10_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
    
    //Two additional properties to expand Critter.h
    double length;
    std::string country;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);

    //Corresponding setter methods
    void setLength(double newlength);
    void setCountry(std::string &newcountry);

    void setHunger(int newhunger);

    void setBoredom(int newboredom);
	// getter method
	int getHunger();

    //Corresponding getter methods
    double getLength();
    std::string getCountry();
    
    // service method
    void print();
};