/*
 
 Nga Yi Chan
 CS 2A
 Assignment 4.1
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
    char answer;
    
    cout << "Are you going to convert pounds to ounces(Y/N)?";
    cin >> answer;
    
    while ( answer == 'Y')
    {
        cout << "enter pounds: ";
        cin >> pounds;
        ounces = pounds *16;
    
        cout << pounds << " pounds is "
        << ounces << " ounces." << endl;
        
        cout << "Are you going to convert pounds to ounces(Y/N)?";
        cin >> answer;
    }
}

//Are you going to convert pounds to ounces(Y/N)?Y
//enter pounds: 6
//6 pounds is 96 ounces.
//Are you going to convert pounds to ounces(Y/N)?Y
//enter pounds: 44
//44 pounds is 704 ounces.
//Are you going to convert pounds to ounces(Y/N)?N
