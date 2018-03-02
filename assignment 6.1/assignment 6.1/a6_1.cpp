
/*  Nga Yi Chan
 18/05/15
 CS 2A
 Dave Harden
 Assignment 6.1
 This program draws a rocket given the user inputted dimensions. The user will be prompted to enter the height and width of each 'stage' of the rocket, and how many stages the rocket should have. The program will pass on this information to helper functions that will draw the rocket. The program will first use the width given to draw an appropriate top cone for the top of the rocket. This requires the calling of several other functions in order for the cone to be perfectly aligned with the rest of the rocket. After the cone, the program will then use width, height, and the number of stages given to draw the middle part of the rocket. This process also requires a few helper functions in order draw each edge of the stage for the given number of stages.  After the stages, the program will then draw the bottom cone of the rocket.
 */

#include <iostream>
using namespace std;
void drawRocket(int width,int height,int stage);
void drawCone(int width);
void drawOddcone(int width);
void drawOddconefirst(int width);
void drawOddconemiddle(int width);
void drawconebottom(int width);
void drawEvencone(int width);
void drawEvenconefirst(int width);
void drawEvenconemiddle(int width);
void drawHorizontalLine(int numXs);
void draw2VerticalLines(int numSpaces, int numRows);
void drawOneRow(int numSpaces);
void drawBox(int width, int height);
void drawStage(int width, int height,int stage);
void getDimensions(int &width, int &height,int &stage);

//Main function.Use getDimensions function to get the
//dimensions. Use the drawRocket function to draw the
//rocket with the given input.

int main() {
    int width;
    int height;
    int stage;
    
    getDimensions(width,height,stage);
    drawRocket(width,height,stage);
}

//getDimensions function get the values of width, height and stages.
void getDimensions(int &width, int &height,int &stage)
{
    cout << "Enter width: ";
    cin >> width;
    
    cout << "Enter height: ";
    cin >> height;
    
    cout << "Enter stage: ";
    cin >> stage;
}

//drawRocket function draws the rocket with the given
//dimensions.It seperate into drawCone and drawStage these
//two sections.
void drawRocket(int width,int height,int stage)
{
    drawCone(width);
    drawStage(width,height,stage);
    drawCone(width);
}

//drawCone function draws the cone of the top and bottom of
//the rocket.This function can identity whether the width is
//odd or even and then call the appropriate function.
void drawCone(int width)
{
    if ( width % 2 == 0) {
        drawEvencone (width);
    }else
        drawOddcone (width);
}

//This function draws the cone with odd width.
//It speartes into the first part, middle part and bottom
//part.
void drawOddcone(int width)
{
    drawOddconefirst(width);
    drawOddconemiddle(width);
    drawconebottom(width);
}

//This function draws the cone with even width.
//It speartes into the first part, middle part and bottom
//part.
void drawEvencone(int width)
{
    drawEvenconefirst(width);
    drawEvenconemiddle(width);
    drawconebottom(width);
}


//These function draw the cone.They calculate the number of
//spaces needed and * needed to form the correct size of
//cone.
void drawOddconefirst(int width)
{
    int spaceCount;
    int numSpaces;
    numSpaces = (width-1)/2;
    
    for(spaceCount = 0; spaceCount < numSpaces; spaceCount++){
        cout<<" ";
    }
    cout << "*" << endl;
}

void drawEvenconefirst(int width)
{
    int spaceCount;
    int numSpaces;
    numSpaces=width/2-1;
    
    for(spaceCount = 0; spaceCount < numSpaces; spaceCount++){
        cout<<" ";
    }
    cout << "**" << endl;
}

void drawOddconemiddle(int width)
{
    int count;
    int numRows;
    int numSpacesleft;
    int numSpcaesmiddle;
    int spaceCount;
    
    numRows = ((width+1)/2)-2;
    
    for (count = 0;count < numRows; count++){
        numSpacesleft = numRows - count;
        numSpcaesmiddle = (count*2)+1;
        
        for(spaceCount = 0; spaceCount < numSpacesleft; spaceCount++){
            cout << " " ;
        }
        cout << "*" ;
        for (spaceCount = 0; spaceCount < numSpcaesmiddle; spaceCount++){
            cout << " " ;
        }
        cout << "*" << endl;
    }
}

void drawEvenconemiddle(int width)
{
    int count;
    int numRows;
    int numSpacesleft;
    int numSpcaesmiddle;
    int spaceCount;
    
    numRows = width/2-2;
    
    for (count =0;count < numRows;count++){
        numSpacesleft = numRows-count;
        numSpcaesmiddle = (count+1)*2;
        
        for(spaceCount = 0; spaceCount < numSpacesleft; spaceCount++){
            cout << " ";
        }
        cout << "*" ;
        for (spaceCount =0; spaceCount < numSpcaesmiddle; spaceCount++){
            cout <<" ";
        }
        cout << "*" << endl;
    }
}

void drawconebottom(int width)
{
    int numSpaces;
    int spaceCount;
    numSpaces=width-2;
    cout << "*" ;
    for (spaceCount = 0; spaceCount < numSpaces; spaceCount++){
        cout << " ";
    }
    cout << "*" << endl;
}

//This is the function to draw the stage. It draws the
//number of boxes that entered.
void drawStage(int width,int height,int stage)
{
    int count;
    for(count = 0; count < stage; count++){
        drawBox(width,height);
    }
}

//This is the function to draw the box. It draws with the
//inputted width and height.
void drawBox(int width, int height)
{
    drawHorizontalLine(width);
    draw2VerticalLines(width-2, height-2);
    drawHorizontalLine(width);
}

//These are functions that draw the box.
void drawHorizontalLine(int numXs)
{
    int count;
    
    for (count = 0; count < numXs; count++){
        cout << "*";
    }
    cout << endl;
}

void draw2VerticalLines(int numSpaces,int numRows)
{
    int rowCount;
    
    for (rowCount = 0; rowCount < numRows; rowCount++){
        drawOneRow(numSpaces);
    }
}

void drawOneRow(int numSpaces)
{
    int spaceCount;
    
    cout << "*";
    for (spaceCount = 0; spaceCount < numSpaces; spaceCount++){
        cout << " ";
    }
    cout << "*" << endl;
}

//output with odd width
//Enter width: 5
//Enter height: 6
//Enter stage: 2
//  *
// * *
//*   *
//*****
//*   *
//*   *
//*   *
//*   *
//*****
//*****
//*   *
//*   *
//*   *
//*   *
//*****
//  *
// * *
//*   *

//output with even width
//Enter width: 8
//Enter height: 3
//Enter stage: 1
//   **
//  *  *
// *    *
//*      *
//********
//*      *
//********
//   **
//  *  *
// *    *
//*      *

