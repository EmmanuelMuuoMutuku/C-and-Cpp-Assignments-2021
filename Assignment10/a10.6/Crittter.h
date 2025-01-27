// CH-230-A
// a10_p6.cpp
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

        //a new property is added
        double thirst;

        //Method to convert int to double and back to int
        //Use of separate methods
        //First method: convert int input to double by
        //use of casting as double and divide by 10
        double convertCastDivide(int Hunger);

        //Second method: convert data member double to int by
        //use of casting as int and multiplying by 10
        int convertCastMultiply();

        

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

    //Add a new constructor with five parameters
    Critter(std::string Name, int Hunger, int Bored, double Height, double Thirst);

    // setter methods
    void setName(std::string& newName);
    void setHunger(int newHunger);
    void setBoredom(int newBoredom);
    void setHeight(double newHeight);

    //added setter method
    void setThirst(double newThirst);

    // getter methods
    std::string getName();
    int getHunger();
    int getBoredom();
    double getHeight();

    //added getter method
    double getThirst();

    // service method
	void print();
};