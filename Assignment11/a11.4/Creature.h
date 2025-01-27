// CH-230-A
// a11_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

class Creature {
    protected:
		int distance;

    public:
        // Empty constructor
        Creature();

        // Destructor
        ~Creature();

        // Methods
        // Setter methods
        void setDist(int Distance);

        // Getter methods
        int getDist() const;

        // Service methods
        void run() const;
};

class Wizard : public Creature {
	private:
		int distFactor;

    public:
        // Empty constructor
        Wizard();

        // Destructor
        ~Wizard();

        // Methods
        // Setter methods
        void setDistFactor(int DistFactor);

        // Getter methods
        int getDistFactor() const;

        // Service methods
        void hover() const;
};

class Elephant : public Creature {
    private:
        double bodyFatLostPerKm;

    public:
        // Empty constructor
        Elephant();

        // Destructor
        ~Elephant();

        // Methods
        // Setter methods
        void setBodyFatLostPerKm(double bodyFatLostPerKm);

        // Getter methods
        double getBodyFatLostPerKm() const;

        // Service methods
        void bodyFatLost() const;
};

class Ogre : public Creature {
    private:
        double startingScaryLevel;

    public:
        // Empty constructor
        Ogre();

        // Destructor
        ~Ogre();

        // Methods
        // Setter methods
        void setStartingScaryLevel(double startingScaryLevel);

        // Getter methods
        double getStartingScaryLevel() const;

        // Service methods
        void scaryLevel() const;  
};