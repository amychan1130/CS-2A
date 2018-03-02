//
//  a3_1
//  assignment 3.1
//
//  Created by amychan on 26/4/15.
//  Copyright (c) 2015 amychan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int base;
    int height;
    int area;
    int side;
    char s;
    char t;
    char types;
    s='s';
    t='t';
    
    cout << "Enter the type of figure (s or t): ";
    cin >> types;
    if(types==t)
    {
    cout << "Enter the Base: ";
    cin >> base;
    cout << "Enter the height: ";
    cin >> height;
    area= base*height/2.0;
    }
    else if(types ==s)
    {
    cout <<"Enter the sides: ";
    cin >> side;
    area = side*side;
    }
    cout <<"The area is " << area <<"."<< endl;
}
//Enter the type of figure (s or t): t
//Enter the Base: 3
//Enter the height: 4
//The area is 6.


//Enter the type of figure (s or t): s
//Enter the sides: 9
//The area is 81.

