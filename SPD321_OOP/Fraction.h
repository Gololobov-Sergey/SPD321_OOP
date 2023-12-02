#include <iostream>
#include <Windows.h>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        if (denominator == 0) {
            cerr << "Помилка. Знаменник не може бути 0 тому був записан як 1." << endl;
            denominator = 1;
        }
    }



    void input() {
        cout << "Чисельник: ";
        cin >> numerator;

        cout << "Знаменник: ";
        cin >> denominator;

        if (denominator == 0) {
            cerr << "Помилка. Знаменник не може бути 0 тому був записан як 1." << endl;
            denominator = 1;
        }
    }

    void display() const {
        cout << numerator << "/" << denominator << endl;
    }


    /*void add(Fraction f1, Fraction f2)
    {
        numerator = (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator);
        denominator = f1.denominator * f2.denominator;
    }

    Fraction add(Fraction other) const {
        int resultNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction subtract(Fraction other) const {
        int resultNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }*/

    Fraction multiply(Fraction other) const {
        int resultNumerator = numerator * other.numerator;
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction divide(Fraction other) const {
        if (other.numerator == 0) {
            cerr << "Error: Cannot divide by zero." << endl;
            return Fraction();
        }

        int resultNumerator = numerator * other.denominator;
        int resultDenominator = denominator * other.numerator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction operator+(Fraction other)
    {
        int resultNumerator = (numerator * other.denominator) + (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    Fraction operator-()
    {
        return Fraction(-numerator, denominator);
    }

    Fraction operator++()  //prefix
    {
        numerator += denominator;
        return *this;
    }

    Fraction operator++(int)  //postfix
    {
        Fraction temp = *this;
        numerator += denominator;
        return temp;
    }

    Fraction operator-(Fraction other)
    {
        int resultNumerator = (numerator * other.denominator) - (other.numerator * denominator);
        int resultDenominator = denominator * other.denominator;
        return Fraction(resultNumerator, resultDenominator);
    }

    void operator+=(Fraction other)
    {
        *this = *this + other;
    }

};

//Fraction operator+(Fraction f1, Fraction f2)
//{
//
//}