// CH-230-A
// a10_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter {
    private:  // data members are private
        std::string name;
	    int hunger;
	    int boredom;
	    double height;
        

    public: // business logic methods are public

    //Adding three constructors to class Critter

    //Instance where there are no parameters supplied
    //name is set to "default_critter", height = 5 and the rest 0
    Critter();

    //Instance where name is supplied as the only paramater
    //height will be set to 5 and the rest to 0
    Critter(std::string Name);

    //Instance where name, hunger, boredom and height are supplied
    //If height is not supplied, default height is 10.0
    Critter(std::string Name, int Hunger, int Bored, double Height = 10.0);


    // setter methods
    void setName(std::string& newName);
    void setHunger(int newHunger);
    void setBoredom(int newBoredom);
    void setHeight(double newHeight);

    // getter method
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();

    // service method
	void print();
};