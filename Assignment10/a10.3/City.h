// CH-230-A
// a10_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <string> // defines standard C++ string class

class City {
    private:
        std::string name;
        int population;
        std::string mayor;
        double area;

    public:
    //Setter methods
        void setName(std::string newName);
        void setPopulation(int newPopulation);
        void setMayor(std::string newMayor);
        void setArea(double newArea);

    //Getter methods
        std::string getName();
        int getPopulation();
        std::string getMayor();
        double getArea();

    //Service method
        void print();
};
