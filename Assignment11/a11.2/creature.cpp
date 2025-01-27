// CH-230-A
// a11_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de


#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
        ~Creature();
        void run() const;

    protected:
		int distance;
};

Creature::Creature(): distance(10)
{}    

Creature::~Creature() {
    cout << "Destroying Creature!\n";
}

void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  

class Wizard : public Creature {
	public:
		Wizard();
        ~Wizard();
        void hover() const;

    private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3)
{}

Wizard::~Wizard() {
    cout << "Destroying Wizard!\n";
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


// Elephant class as child of class Creature
class Elephant: public Creature {
    public:
        Elephant();
        ~Elephant();
        void bodyFatLost() const;
    private:
        double bodyFatLostPerKm;
};

Elephant::Elephant() : bodyFatLostPerKm(11.4) {
    cout << "Constructed Elephant using empty constructor!\n";
}

Elephant::~Elephant() {
    cout << "Destroying Elephant!\n";
}

void Elephant::bodyFatLost () const {
    cout << "Bodyfat lost: " << bodyFatLostPerKm * distance << "!\n";
}

// Ogre class as child of class Creature
class Ogre : public Creature {
    public:
        Ogre();
        ~Ogre();
        void scaryLevel() const;
    private:
        double startingScaryLevel;
};

Ogre::Ogre() : startingScaryLevel(100.0) {
    cout << "Constructed Ogre using empty constructor!\n";
}

Ogre::~Ogre() {
    cout << "Destroying Ogre!\n";
}

void Ogre::scaryLevel() const {
    cout << "Scary Level: " << (startingScaryLevel - ((startingScaryLevel / 100) * distance))
        << " freightened!\n";
}
int main()
{
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Elephant.\n";
    Elephant h;
    h.run();
    h.bodyFatLost();

    cout << "\nCreating an Ogre.\n";
    Ogre o;
    o.run();
    o.scaryLevel();

    return 0;
}