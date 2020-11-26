#include <iostream>
using namespace std;
#include "functions.h"


    int main(){
    cout<< "Lab information"<<endl;
    labinfo(); //Exercise 1 function.

    cout<< "Exercise 2: Take in two numbers and return the largest number."<<endl;
    Largest_Val(); //Exercise 2 function.

    cout<< "Exercise 3: Check that the user has input a number between 1 and 100."<<endl;
    Check_Num(); //Exercise 3 funtion.

    cout<< "Exercise 4: Switch statement."<<endl;
    int day;
    cout<< "What day is it today? "<<endl;//Prints Question.
    cout<< "Please press 1 for Monaday and hit return.\nPlease press 2 for Tuesday and hit return.\nPlease press 3 for Wednesday and hit return.\nPlease press 4 for Thursday and hit return.\nPlease press 5 for Friday and hit return.\nPlease press 6 for Saturday and hit return.\nPlease press 7 for Sunday and hit return."<<endl;//Prints command.
    cin>> day;//User inputs number to represent which day it is.
    switch (day){
    case 1:
    cout<< "Today is Monaday.\n\n";//Prints out this option.
    break;
    case 2:
    cout<< "Today is Tuesday.\n\n";//Prints out this option.
    break;
    case 3:
    cout<< "Today is Wednesday.\n\n";//Prints out this option.
    break;
    case 4:
    cout<< "Today is Thursday.\n\n";//Prints out this option.
    break;
    case 5:
    cout<< "Today is Friday.\n\n";//Prints out this option.
    break;
    case 6:
    cout<< "Today is Saturday.\n\n";//Prints out this option.
    break;
    case 7:
    cout<< "Today is Sunday.\n\n";//Prints out this option.
    break;
    }

    cout<< "Exercise 5: Calculate the area of a circle."<<endl;
    Area_Of_A_Circle();//Exercise 5 function.

    cout<< "Exercise 6: Calculate the area of a rectangle."<<endl;
    Area_Of_A_Rectangle();//Exercise 6 funtion.

    cout<< "Exercise 7: Temperature/Humidity alarm." <<endl;
    Temp_Hum_Alarm();//Exercise 7 funtion.

    cout<< "Exercise 8: Run a loop test of the area of a circle." <<endl;
    Loop_Area_Circle();//Exercise 8 function.

    cout<< "Exercise 9: Write a temperature conversion function." <<endl;
    Temp_Conv();//Exercise 9 function.

    return 0;

}
