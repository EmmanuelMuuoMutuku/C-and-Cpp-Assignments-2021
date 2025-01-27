// CH-230-A
// a12_p2.h
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include<cstring>

using namespace std;
class TournamentMember {
    private:
        static string location;
        char firstName[36];
        char lastName[36];
        char dateOfBirth[11];
        int age;
        double height;

    public:
        //Constructors with all parameters
        TournamentMember(char *, char *, char *, int, double);
        //Copy constructor
        TournamentMember(const TournamentMember&);
        //Empty constructor
        TournamentMember();

        //Destructors
        ~TournamentMember();

        //Setters
        void setfirstName(char * first_name){strcpy(firstName, first_name);};
        void setlastName(char * last_name){strcpy(lastName, last_name);};
        void setdateOfBirth(char * date_of_birth){strcpy(dateOfBirth, date_of_birth);};
        void setAge(int age_1){age = age_1;};
        void setHeight(double height_1){height = height_1;};
        
        static void setLocation(string l){location = l;
        };

        //Getters
        char *getfirstName() { return firstName; };
        char *getlastName() { return lastName; };
        char *getdateOfBirth() { return dateOfBirth; };
        int getAge() { return age; };
        double getHeight() { return height; };
        static string getLocation() { return location; };

        //Print
        void printInformation();
};
