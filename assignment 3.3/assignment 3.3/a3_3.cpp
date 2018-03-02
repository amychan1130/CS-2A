//
//  main.cpp
//  assignment 3.3
//
//  Created by amychan on 26/4/15.
//  Copyright (c) 2015 amychan. All rights reserved.
//

#include <iostream>

using namespace std;
int main ( )
{

    int firstNo;
    int secondNo;
    int answer;
    char tools;
    cout << "Enter the first number: ";
    cin >> firstNo;
    cout << "Enter the calculating method(+,-,x,/): ";
    cin >> tools;

    
    switch (tools)
    {
    case '+':
            cout << "Enter the second number: ";
            cin >> secondNo;
            answer = firstNo+secondNo;
            cout <<"Answer: "<<answer <<endl;
            break;
    case '-':
            cout <<"Enter the secong number: ";
            cin >> secondNo;
            answer = firstNo-secondNo;
            cout <<"Answer: "<<answer <<endl;
            break;
    case 'x':
            cout <<"Enter the secong number: ";
            cin >> secondNo;
            answer = firstNo*secondNo;
            cout <<"Answer: "<<answer <<endl;
            break;
    case '/':
            cout <<"Enter the secong number: ";
            cin >> secondNo;
            answer = firstNo/secondNo;
            cout <<"Answer: "<<answer <<endl;
            break;
    }
}
//Enter the first number: 6
//Enter the calculating method(+,-,x,/): /
//Enter the secong number: 3
//Answer: 2

