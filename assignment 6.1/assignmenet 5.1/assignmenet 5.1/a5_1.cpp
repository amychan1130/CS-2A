/*
 Nga Yi Chan
 11/05/2015
 CS 2A
 Dave Harden
 Assignment 5.1
 
 This program asks the user how many numbers will be entered and then has the user enter those numbers. When this is done, report to the user the position of the first 7 entered and the last 7 entered. By position we mean, for example, that if the first 7 is the 2nd number entered then its position would be 2.
 

 */
#include <iostream>
using namespace std;

int main() {
    int count;
    int numberEnter;
    int number;
    int first7=0;
    int last7=0;
    
    cout << "How many numbers will be entered? ";
    cin >> numberEnter;
    
    for (count=1; count < numberEnter+1; count++){
        cout << "Enter number: ";
        cin >> number;
        if (number ==7){
            if (first7 ==0){
                first7=count;
}
            last7= count;
}
}
    if (first7 ==0){
        cout << "Sorry, no seven were entered."<<endl;
}
    else{
        cout << "The first 7 was in position "<<first7<< "."<<endl;
        cout << "The last 7 was in position "<<last7<<" ."<<endl;
}
}
//sample 1
//How many numbers will be entered? 8
//Enter number: 5
//Enter number: 7
//Enter number: 6
//Enter number: 7
//Enter number: 7
//Enter number: 3
//Enter number: 8
//Enter number: 6
//The first 7 was in position 2.
//The last 7 was in position 5 .

//sample 2
//How many numbers will be entered?8
//Enter number: 5
//Enter number: 2
//Enter number: 6
//Enter number: 7
//Enter number: 1
//Enter number: 3
//Enter number: 8
//Enter number: 6
//The first 7 was in position 4.
//The last 7 was in position 4 .

//sample 3
//How many numbers will be entered? 8
//Enter number: 5
//Enter number: 1
//Enter number: 6
//Enter number: 5
//Enter number: 9
//Enter number: 3
//Enter number: 8
//Enter number: 6
//Sorry, no seven were entered.



