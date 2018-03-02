/*
 Nga Yi Chan
 CS 2A
 Assignment 4.3
 May 4, 2015
 Instructor: Dave Harden
 
 This program calculate the population of different age groups and different gender.
 */

#include <iostream>
using namespace std;

int main()
{
    double age=0.0;
    int group1=0; //age 0 to 18
    int group2=0; //age 19 to 30
    int group3=0; //age 31 to 40
    int group4=0; //age 41 to 60
    int group5=0; //over 61
    double count=0.0;
    double sum=0.0;
    int youngest;
    int oldest;
    char gender;
    int males;
    int females;
    
    
    cout << "Enter age of attendee (negative number to quit): ";
    cin >> age;
    youngest=age;
    oldest=age;
    
    
    while (age>=0){
        cout <<"Enter gender(M or F): ";
        cin >> gender;
        if (gender == 'M'){
            males++;
        }
        if (gender == 'F'){
            females++;
        }
        
        sum=sum+age;
        
        if (age <= 18){
            group1++;
        }
        else if (age<=30){
            group2++;
        }
        else if (age <=40){
            group3++;
        }
        else if (age <= 60){
            group4++;
        }
        else if (age>60){
            group5++;
        }
        if (age<youngest){
            youngest=age;
        }
        if (age>oldest){
            oldest=age;
        }

   
        cout << "Enter age of attendee (negative number to quit): ";
        cin >> age;
        count++;
    }
    if (count ==0){
        cout << "There are no attendees."<<endl;
    }
    else{
    cout <<" "<<endl;
    cout <<"age 0 to 18: " <<group1 <<endl;
    cout <<"age 19 to 30: " <<group2 <<endl;
    cout <<"age 31 to 40: " <<group3 <<endl;
    cout <<"age 41 to 60: " <<group4 <<endl;
    cout <<"over 60: " <<group5 <<endl;
    cout <<" "<<endl;
    cout <<"males: " <<males<<endl;
    cout <<"females: "<<females<<endl;
    cout <<"The average age was "<< sum/count<<"."<<endl;
    cout <<"The youngest person in attendance was "<<youngest<<"."<<endl;
        cout <<"The oldest person in attendance was "<<oldest<<"."<<endl;}
}

//Enter age of attendee (negative number to quit): 34
//Enter gender(M or F): M
//Enter age of attendee (negative number to quit): 16
//Enter gender(M or F): M
//Enter age of attendee (negative number to quit): 68
//Enter gender(M or F): F
//Enter age of attendee (negative number to quit): 53
//Enter gender(M or F): F
//Enter age of attendee (negative number to quit): 39
//Enter gender(M or F): F
//Enter age of attendee (negative number to quit): 23
//Enter gender(M or F): F
//Enter age of attendee (negative number to quit): 21
//Enter gender(M or F): F
//Enter age of attendee (negative number to quit): -1
//
//age 0 to 18: 1
//age 19 to 30: 2
//age 31 to 40: 2
//age 41 to 60: 1
//over 60: 1
//
//males: 2
//females: 5
//The average age was 36.
//The youngest person in attendance was 16.
//The oldest person in attendance was 68.


//Enter age of attendee (negative number to quit): -9
//There are no attendees.

