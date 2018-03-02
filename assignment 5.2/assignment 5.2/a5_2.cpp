/*
 Nga Yi Chan
 11/05/2015
 CS 2A
 Dave Harden
 Assignment 5.2
 
This program that inputs an integer greater than 0 and calculates the sum of the squares of the numbers from 1 to that integer. For example, if the integer equals 4, the sum of the squares is 30 (1 + 4 + 9 + 16). The program should repeat this process until the user wants to quit. An input value less than or equal to 0 signals the end of the data.
 */

#include <iostream>
using namespace std;

int main(){
    
    int number;
    int count;
    int sum;
    int squareNumber;

    cout<<"Enter number greater than 0(less than 1 to quit): ";
    cin>>number;
    while (number >0){
        sum =0;
        for (count=0;count <number;count++){
            squareNumber= (count+1)*(count+1);
            sum = sum+squareNumber;
    }
        cout<<"The sum of the square from 1 to "<<number<<" is "<<sum<<endl;
        cout<<"Enter number greater than 0(less than 1 to quit): ";
        cin>>number;
    }
}
//Enter number greater than 0(less than 1 to quit): 4
//The sum of the square from 1 to 4 is 30
//Enter number greater than 0(less than 1 to quit): 1
//The sum of the square from 1 to 1 is 1
//Enter number greater than 0(less than 1 to quit): 0
