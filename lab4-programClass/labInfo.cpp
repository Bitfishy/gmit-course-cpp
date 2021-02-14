#include <iostream>
#include "labInfo.h"
#include <string>

using namespace std;

// Lab Task 6 Part 2/2: Create a new file called labInfo.cpp.
// Lab Task 7 Part 2/2: Move your class and its functions to the .h file and .cpp file.

int main(){
// Lab Task 3: In main create an object of your new class and set its attributes in main function.
    labInfo Info1; // Object declaration of labInfo class.
    Info1.name = "Stephen McDonagh"; // Attribute for class labInfo. (Task 3)
    Info1.labId = "Lab #4"; // Attribute for class labInfo. (Task 3)
//  Info1.day = 12; // Attribute for class labInfo. (Task 3) Not in use, made private for task 5.
//  Info1.month = 02; // Attribute for class labInfo. (Task 3) Not in use, made private for task 5.
//  Info1.year = 2021; // Attribute for class labInfo. (Task 3) Not in use, made private for task 5.

// Lab Task 5 Part 2/2 continued...
    Info1.setDate(12,2,2021); // Calls public function to set date (with three given arguments.)

// Lab Task 4 continued...
    Info1.printInfo(Info1); // Calls printInfo(labInfo Info1) function from public class.


};

