#include <iostream>
using namespace std;
#include "functionslab3.h"

int main(){

    cout<<"Task 1:"<<endl;//Prints out task number.
    LabInfo();//Calls LabInfo function.


    cout<<"\nTask 2:"<<endl;//Prints out task number.
    cout<<"Please input 6 numbers that are greater than 0 but less than 100."<<endl;//Prints command.
    int arrayS = 6;//Interger array size declaration. Array is 6 elements.
    int myArray[arrayS];//Array declaration.
    int i = 0;//Start of while loop, index starts at 0.
    while (i < arrayS){//While loop condition, while index is less than array size continue loop.
    int nums;//Int declaration.
    cin>>nums;//User input.
    if((nums>0)&&(nums<100)){//If condition.
    myArray[i]=nums;
    i++;//Increments i.
    }
    else{//Else condition.

    //Prints out statement and command.
    cout<<"User has entered the wrong value.\nThe number "<<nums<<" is either <=0 or >=100.\nPlease enter a number >0 or <100."<<endl;
    }
    }


    cout<<"\nTask 3:"<<endl;//Prints out task number number.

    //Calls the function that prints the array of numbers, the memory locations and passes the array by value.
    printArrMem(myArray,arrayS);


    cout<<"\nTask 4:"<<endl;//Prints out task number.
    int scalar;//Int declaration.
    cout<<"Please input 1 scalar number and then hit return."<<endl;//Prints out command.
    cin>>scalar;//User input.
    cout<<"The scalar number you input was "<<scalar<<"."<<endl;//Prints out result.


    cout<<"\nTask 5:"<<endl;//Prints out task number.

    //Calls a function that will pass the array by reference and also the scalar value and multiply each number in the array by the scalar.
    mScalar(scalar,&myArray[0],arrayS);
    cout << "Inputs are multiplied by the Scalar number." <<endl;//Prints out result.


    cout<<"\nTask 6:"<<endl;//Prints out task number.

    //Calls the function that prints the array of numbers, the memory locations and passes the array by value.
    printArrMem(myArray,arrayS);


    cout<<"\nTask 7:"<<endl;//Prinst out task.

    //Calls function of the 2d array of my xmas tree and prints my xmas tree out.
    xmasTree();

    return 0;
}
