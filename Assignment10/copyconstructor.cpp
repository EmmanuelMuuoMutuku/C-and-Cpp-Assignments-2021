// CH-230-A
// a10_p7.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
	private:
		char *str;
	public:
		// Constructors
		NaiveString(const char*);
		NaiveString(const NaiveString&);

		// Destructor
		~NaiveString();

		// Methods
		void update(char, char);
		void print();
};

NaiveString::NaiveString(const char* t) {
	cout << "Constructor with one parameter\n";
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
	cout << "Copy Constructor called!\n";
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

NaiveString::~NaiveString() {
	cout << "Destructor called!\n";
	delete [] str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

// funcByRef changes the value as it is accessing it directly and
// these changes can be seen outside of scope
void funcByRef(NaiveString& s) {
	cout << "funchbyref() being called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	// First instance called with constructor that takes 1 parameter
	NaiveString a("aBcBdB");
	a.print();
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	// Second instance called with copy constructor
	NaiveString b(a);
	b.print();
	cout << "About to call funcbyref()" << endl;
	funcByRef(b);
	b.print();
}
