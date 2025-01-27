// CH-230-A
// a12_p5.h
// Emmanuel Mutuku
// emutuku@jacobs-university.de

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_
using namespace std;

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	friend ostream& operator<<(ostream &out, const Fraction &a);
	friend istream& operator>>(istream &in, Fraction &a);
    friend Fraction operator*(const Fraction &frac1, const Fraction &frac2);
    friend Fraction operator/(const Fraction &frac1, const Fraction &frac2);
    Fraction operator+(Fraction);
	Fraction operator-(Fraction);
	Fraction& operator=(const Fraction&);
	bool operator>(const Fraction &);
	bool operator<(const Fraction &);
};

#endif /* FRACTION_H_ */
