//
//  main.cpp
//  assignment 3.2
//
//  Created by amychan on 26/4/15.
//  Copyright (c) 2015 amychan. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int schoolYear;
    
    cout << "If years of school is: ";
    cin >> schoolYear;
    
    if (schoolYear <= 0) {
        cout << "None" << endl;
    } else if ((schoolYear >=1)&&(schoolYear<=6)) {
        cout << "elementary school" << endl;
    } else if ((schoolYear >= 7)&&(schoolYear<=8)) {
        cout << "middle school" << endl;
    } else if ((schoolYear >= 9)&&(schoolYear<=12)){
        cout << "high school" << endl;
    } else {
        cout << "college" << endl;
    }
    
}
//If years of school is: 7
//middle school