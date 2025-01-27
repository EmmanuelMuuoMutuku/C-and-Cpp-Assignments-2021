// CH-230-A
// a12_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;
    // Implement GCD of two numbers;
    int low = (a < b ? a : b);
    for (int i = 0; i < low; i++) {
        if (a % i == 0 && b % i == 0) {
            tmp_gcd = i;
        }
    }
    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);
}

ostream& operator<<(ostream &out, const Fraction &a) {
    out << a.num << "/" << a.den;
    return out;
}
istream& operator>>(istream &in, Fraction &a) {
    char symbol = '\0';
    while (symbol != '/')
    {
        in >> a.num >>symbol >> a.den;
    }
    return in;
}
Fraction operator*(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result = Fraction(frac1.num * frac2.num, frac1.den * frac2.den);
    return result;
}
Fraction operator/(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result = Fraction(frac1.num * frac2.den, frac1.num * frac2.den);
    return result;
}