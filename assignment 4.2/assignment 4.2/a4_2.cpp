/*
 
 Nga Yi Chan
 CS 2A
 Assignment 4.2
 May, 1, 2015
 Instructor: Dave Harden
 
 This program can change the pounds to ounces and it repeats itself until the user wants to quit.
 
 */

#include <iostream>
using namespace std;

int main()
{
    int pounds;
    int ounces;
    
    cout << "enter pounds(negative number to quit): ";
    cin >> pounds;
    
    while (pounds>=0){
        ounces = pounds *16;
        
        cout << pounds << " pounds is "
        << ounces << " ounces." << endl;
        
        cout << "enter pounds(negative number to quit): ";
        cin >> pounds;
    }
}

//enter pounds(negative number to quit): 9
//9 pounds is 144 ounces.
//enter pounds(negative number to quit): 33
//33 pounds is 528 ounces.
//enter pounds(negative number to quit): -7
