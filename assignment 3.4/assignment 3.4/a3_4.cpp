//
//  main.cpp
//  assignment 3.4
//
//  Created by amychan on 26/4/15.
//  Copyright (c) 2015 amychan. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double startTime;
    double length;
    double grossCost;
    double netCost ;
    
    cout <<"Enter start time:";
    cin >> startTime;
    cout <<"Enter length of call in minutes:";
    cin >> length;
    
    grossCost= length*0.40;
    cout << setprecision(2) << fixed << "gross cost:"
    <<grossCost<<endl;

if((startTime>=1800)||(startTime<=800))
{
    grossCost= (grossCost*0.50);
}
if (length>60)
{
    grossCost=(grossCost*0.85);
}
    
    netCost=grossCost*1.04;
    cout << setprecision(2) << fixed << "net cost:"
    <<netCost<<endl;

}
//Enter start time:2322
//Enter length of call in minutes:67
//gross cost:26.80
//net cost:11.85

//Enter start time:759
//Enter length of call in minutes:10
//gross cost:4.00
//net cost:2.08

//Enter start time:1300
//Enter length of call in minutes:100
//gross cost:40.00
//net cost:35.36

//Enter start time:1300
//Enter length of call in minutes:10
//gross cost:4.00
//net cost:4.16

