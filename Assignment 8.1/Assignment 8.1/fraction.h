/*
 Runxian Xiao
 CS 2A
 Professor Harden
 03/15/2017
 a9_2.cpp
 fraction.h
 
 This is the header file for a FRACTION CLASS that can create fractions given a user inputted numerator and 
 denominator.  It can add, subtract, multiply, divide, and compare fractions them to other fractions.
 The PUBLIC member functions of the FRACTION CLASS:
 
 fraction() : Pre-condition: none
            : Post-condition: a fraction object of numerator 0 and denominator 1 will be initialized
 
 
 * fraction(int inNumer, int inDenom) : Pre-condition: inNumer and inDenom must be positive numbers and inDenom must not be 0
 		                              : Post-condition: a fraction object of numerator inNumer and denominator inDenom will be initialized and then stored in reduced form
 
 

 * addedTo(const fraction otherFraction) const : Pre-condition: none
 											   : Post-condition: adds the calling fraction by the parameter fraction to initialize a new fraction
 
 
 * subtract(const fraction otherFraction) const : Pre-condition: none
 												: Post-condition: subtracts the calling fraction by the parameter fraction to initialize a new fraction
 
 
 * multipliedBy(const fraction otherFraction) const : Pre-condition: none
                                                    : Post-condition: multiplies the calling fraction by the parameter fraction to initialize a new fraction
 
 
 
 * dividedBy(const fraction otherFraction) const : Pre-condition: none
 												: Post-condition: divides the calling fraction by the parameter fraction to create a new fraction
 
 
 * isEqualTo(const fraction otherFraction) const : Pre-condition: none
 												 : Post-condition: returns a 'true' or 'false' after comparing two fractions to see if they are equal
 
 
 * print() const : Pre-condition: none
 				 : Post-condition: the calling fraction will be printed in the form of 'numerator/denominator'.  Improper fractions are not converted to mixed numbers
 */

#ifndef FRACTION_H
#define FRACTION_H
    
    class Fraction {
        
    public:
        
        Fraction();
        Fraction(int inNumer, int inDenom);
        Fraction multipliedBy(const Fraction otherFraction) const;
        Fraction addedTo(const Fraction otherFraction) const;
        Fraction subtract(const Fraction otherFraction) const;
        Fraction dividedBy(const Fraction otherFraction) const;
        bool isEqualTo(const Fraction otherFraction) const;
        void print() const;
        
    private:
        
        void simplify();
        int numer;
        int denom;
    };
    
#endif

//The result starts off at 0/1
//The product of 9/8 and 2/3 is 3/4
//The quotient of 9/8 and 2/3 is 27/16
//The sum of 9/8 and 2/3 is 43/24
//The difference of 9/8 and 2/3 is 11/24
//The two fractions are not equal.
//The product of 3/2 and 2/3 is 1/1

    
