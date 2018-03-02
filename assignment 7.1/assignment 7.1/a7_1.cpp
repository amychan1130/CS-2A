/*
 Nga Yi Chan
 CS 2A
 5/24/15
 Dave Harden
 Assignment 7.1
 
 This program outputs 3 different sets of problems - addition, subtraction, and multiplication for
 a user to answer. The user chooses how many problems are in each set and the maximun number to be
 calculated in a set.  The program will then output the appropriate problems for each set and have 
 the user anser the problems.  The program will keep track of how many problems the user answers 
 correctly in each set.  Then, once the user has finished answering all of the problems, the 
 program will output a report of how the user did.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

void getProbsPerSet (double &probsPerSet);
void doOneSet (char operand, double probsPerSet, double &numberOfCorrect);
void printHeader (char operand);
void getMaxNum (int &maxnumber);
void doOneProblem (char operand, int maxnumber, double &numberOfCorrect);
void generateOperand (char operand,int maxnumber, int &firstNum, int &secondNum, int &answer);
void calculateCorrectAnswer (char operand, int firstNum, int secondNum, int &correctanswer);
void checkAnswer (int answer, int correctanswer, double&numberOfCorrect);
void printReport (double numberOfCorrect1,double numberOfCorrect2, double numberOfCorrect3, double &probsPerSet );


//Here's the main function of the program. Firstly, the getProbsPerSet can get the problems of each set from the user.Then, there are 3 doOneSet function, which has three different operand. Lastly, it has the printreport function to show how the user did.

int main()
{
    double probsPerSet;
    double numberOfCorrect1 = 0;
    double numberOfCorrect2 = 0;
    double numberOfCorrect3 = 0;
    
    srand(time(0));
    getProbsPerSet(probsPerSet);
    doOneSet('+',probsPerSet, numberOfCorrect1);
    doOneSet('-',probsPerSet, numberOfCorrect2);
    doOneSet('*',probsPerSet, numberOfCorrect3);
    printReport(numberOfCorrect1, numberOfCorrect2, numberOfCorrect3, probsPerSet);
    
}

//This function let the user to enter the number of problems per set and passes the information to other functions in the main function that require it.

void getProbsPerSet (double &probsPerSet)
{
    cout << "Enter problems per set: ";
    cin >> probsPerSet;
}


void doOneSet (char operand, double probsPerSet, double &numberOfCorrect)
{
    int maxnumber;
    int count;
    
    printHeader(operand);
    getMaxNum(maxnumber);
    
    for (count = 0; count < probsPerSet ;count++){
        doOneProblem (operand,maxnumber, numberOfCorrect);
    }
}

// This function prints the header of a specific set depending on the operator to be used in the problems of that set.

void printHeader (char operand)
{
    switch (operand){
            
        case '+':
            cout << "Set #1" << endl;
            break;
        case '-':
            cout << "Set #2" << endl;
            break;
        case '*':
            cout << "Set #3" << endl;
    }
    
    cout<<"----------"<<endl;
}


//This functiopn let the user to enter the number of problems per set and passes on this information to the other functions in the doOneSet function that require it.

void getMaxNum (int &maxnumber)
{
    cout << "What is the maximum number for this set? ";
    cin >> maxnumber;
}


//Given an operator and the max number of a set, this function does one problem in a set. First it calls the generateOperands function to generate the first and second numbers of the problem, outpur the problem to the user, and the the user's answer. Then in calls the calculateCorrecAnswer function to calculate the correct answer to the generated problem. Lastly, it calls the checkAnswer function to check the user's answer with the correct answer.

void doOneProblem (char operand, int maxnumber, double &numberOfCorrect)
{
    int firstNum;
    int secondNum;
    int answer ;
    int correctanswer;
    
    generateOperand (operand,maxnumber, firstNum, secondNum, answer);
    calculateCorrectAnswer (operand, firstNum, secondNum, correctanswer);
    checkAnswer (answer, correctanswer, numberOfCorrect);

}

// This function randomly generates the first and second number of a problem, outputs the problem for the user to answer, then passes this information on to the other functions in the doOneProblem function that require it.

void generateOperand (char operand,int maxnumber, int &firstNum, int &secondNum, int &answer){
    
    firstNum  = rand() % (maxnumber + 1);
    secondNum = rand() % (maxnumber + 1);
    
    cout << firstNum << operand << secondNum << " = ";
    cin >> answer;
}

// Given the first and second number and the operator of a problem, this function calculates the correct answer of the problem and passes this information to the other functions in the doOneProblem function that require it.

void calculateCorrectAnswer (char operand, int firstNum, int secondNum, int &correctanswer){
    
    switch (operand){
            
        case '+' :
            correctanswer = firstNum + secondNum;
            break;
        case '-' :
            correctanswer = firstNum - secondNum;
            break;
        case '*' :
            correctanswer = firstNum * secondNum;
            break;
    }
}

// Given the user's answer and the correct answer, this function will check of the user's answer is correct.

void checkAnswer(int answer, int correctanswer, double &numberOfCorrect){
    
    if ( answer == correctanswer ){
        cout << "correct" << endl;
        numberOfCorrect++;
        
    }else{
        cout << "incorrect" << endl;
    }
}

// Takes the number of correct answers from each set and the number of problems per set and calculates the user's grade for each set along with an overall grade.  It then outputs the grade report for the user to see.

void printReport(double numberOfCorrect1,double numberOfCorrect2, double numberOfCorrect3, double &probsPerSet ){
    
    double percent1;
    double percent2;
    double percent3;
    double totalCorrectanswer;
    double totalPercent;
    
    percent1 = ( numberOfCorrect1 / probsPerSet ) * 100;
    percent2 = ( numberOfCorrect2 / probsPerSet ) * 100;
    percent3 = ( numberOfCorrect3 / probsPerSet ) * 100;
    
    totalCorrectanswer = numberOfCorrect1 + numberOfCorrect2 + numberOfCorrect3;
    totalPercent = ( totalCorrectanswer / ( probsPerSet * 3 ) ) * 100;
    
    cout << setprecision(0) << fixed << "Set#1: You got " << numberOfCorrect1 << " correct out of " << probsPerSet << " for " << percent1 << "%" << endl;
    
    cout << setprecision(0) << fixed << "Set#2: You got " << numberOfCorrect2 << " correct out of " << probsPerSet << " for " << percent2 << "%" << endl;
    
    cout << setprecision(0) << fixed << "Set#3: You got " << numberOfCorrect3 << " correct out of " << probsPerSet << " for " << percent3 << "%" << endl;
    
    cout << setprecision(0) << fixed << "Overall You got " << totalCorrectanswer << " correct out of " << probsPerSet * 3 << " for " << totalPercent << "%" << endl;
    
}

//Enter problems per set: 3
//Set #1
//----------
//What is the maximum number for this set? 100
//97+94 = 191
//correct
//77+51 = 128
//correct
//30+90 = 90
//incorrect
//Set #2
//----------
//What is the maximum number for this set? 20
//18-2 = 16
//correct
//18-18 = 9
//incorrect
//2-0 = 2
//correct
//Set #3
//----------
//What is the maximum number for this set? 10
//9*7 = 63
//correct
//7*5 = 0
//incorrect
//2*4 = 9
//incorrect
//Set#1: You got 2 correct out of 3 for 67%
//Set#2: You got 2 correct out of 3 for 67%
//Set#3: You got 1 correct out of 3 for 33%
//Overall You got 5 correct out of 9 for 56%

