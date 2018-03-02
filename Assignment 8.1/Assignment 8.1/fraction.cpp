/*
  Runxian Xiao
  CS 2A
  Professor Harden
  03/15/2017
  a9_1.cpp
  fraction.cpp

  Private Data Members:

  numer : an int member variable that represents the numerator
  denom : an int member variable that represents the denominator
  simplify() : a member function that simplifies a fraction to its lowest terms,
  called everytime a fraction is initialized.
 
  Fraction objects will always be stored in lowest terms.  A new fraction object
  will be initialized everytime two fractions are added, subtracted, multiplied,
  or divided, to find a resulting fraction.
 
 */

#include <iostream>
#include "fraction.h"
using namespace std;


Fraction::Fraction()
{
    numer = 0;
    denom = 1;
}

Fraction::Fraction(int inNumer, int inDenom)
{
    numer = inNumer;
    denom = inDenom;
    simplify();
}
/* ___________________________________________________________________________________________
 
 Called everytime a new fraction is initialized.  First it determines the greatest common
 denominator (gcd) of the numerator and denominator of the function, then divides each the numer 
 and denom by the gcd, storing fraction in its lowest terms.
 __________________________________________________________________________________________*/

void Fraction::simplify()
{
    int remainder;
    int firstNumber;
    int secNumber;
    int gcd;
    
    if ((numer > denom) || (numer == 0)) {
        firstNumber = numer;
        secNumber = denom;
    } else {
        firstNumber = denom;
        secNumber = numer;	}
    
    remainder = firstNumber % secNumber;
    while (remainder > 0) {
        firstNumber = secNumber;
        secNumber = remainder;
        remainder = firstNumber % secNumber;
    }
    gcd = secNumber;
    numer = numer / gcd;
    denom = denom / gcd;
}







/* Find the new fraction by adding */
Fraction Fraction::addedTo(const Fraction otherFraction) const
{
    int newNumer;
    int newDenom;
    
    newDenom = denom * otherFraction.denom;
    newNumer = (numer * otherFraction.denom) + (denom * otherFraction.numer);
    Fraction newFraction(newNumer, newDenom);
    
    return newFraction;
}







/* Find the new fraction by subtracting */
Fraction Fraction::subtract(const Fraction otherFraction) const
{
    int newNumer;
    int newDenom;
    
    newDenom = denom * otherFraction.denom;
    newNumer = (numer * otherFraction.denom) - (denom * otherFraction.numer);
    Fraction newFraction(newNumer, newDenom);
    
    return newFraction;
}








/* Find the new fraction by mutiplying */
Fraction Fraction::multipliedBy(const Fraction otherFraction) const
{
    int newNumer;
    int newDenom;
    
    newNumer = numer * otherFraction.numer;
    newDenom = denom * otherFraction.denom;
    Fraction newFraction(newNumer, newDenom);
    
    return newFraction;
}








/* Find the new fraction by dividing */
Fraction Fraction::dividedBy(const Fraction otherFraction) const
{
    int newNumer;
    int newDenom;
    
    newNumer = numer * otherFraction.denom;
    newDenom = denom * otherFraction.numer;
    Fraction newFraction(newNumer, newDenom);
    
    return newFraction;
}








bool Fraction::isEqualTo(const Fraction otherFraction) const
{	
    return ((numer == otherFraction.numer) && (denom == otherFraction.denom));
} 






/*
 This is the function that print out the new fraction whoch should be shown with
 a / inside.
 */
void Fraction::print() const
{
    cout << numer << "/" << denom;
}

/*
 The result starts off at 0/1
 The product of 9/8 and 2/3 is 3/4
 The quotient of 9/8 and 2/3 is 27/16
 The sum of 9/8 and 2/3 is 43/24
 The difference of 9/8 and 2/3 is 11/24
 The two Fractions are not equal.
 The product of 3/2 and 2/3 is 1/1
 */
