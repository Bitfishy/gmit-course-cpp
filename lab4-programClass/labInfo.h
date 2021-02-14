#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

// Lab Task 6 Part 1/2: Create a new file called labInfo.h.
// Lab Task 7 Part 1/2: Move your class and its functions to the .h file and .cpp file.

// Lab Task 2:
class labInfo { // Create a class in the main file with the name labInfo.
    public: // Public type class, data is public and accessible (not private.)
     string name; // String varible.
     string labId; // String varible.
//    int day; // Int varible not in use. (Task 2) made private for task 5.
//    int month; // Int varible not in use. (Task 2) made private for task 5.
//    int year; // Int varible not in use. (Task 2) made private for task 5.

// Lab Task 4: In labInfo class create a public fucntion called printInfo().
    void printInfo(labInfo Info1){ // Fuction (utilising class object) to print info from Lab using classes.
     cout << setw(51); // Sets width. Moved Lab info to center of the UI.
     cout << "" << setw(0) << Info1.name << "\n"; // Prints attributes to screen.
     cout << setw(56); // Sets width. Moved Lab info to center of the UI.
     cout << "" << setw(0) << Info1.labId << "\n";// Prints attributes to screen.
     cout << setw(51); // Sets width. Moved Lab info to center of the UI.
     cout << "" << setw(0) << "Date:" << "  " << Info1.day << ":" << Info1.month << ":" << Info1.year << "\n"; // Prints attributes to screen.
    }

// Lab Task 5 Part 2/2: Create a public function in the class that will set the date.
    void setDate(int dayTemp,int monthTemp ,int yearTemp) { // Function to set date with three parameters.
     day = dayTemp; // Declares day as parameter.
     month = monthTemp; // Declares month as parameter.
     year = yearTemp; // Declares year as parameter.
    }

// Lab Task 5 Part 1/2: Make the 3 date variables private.
    private: // Private type class, data is private.
     int day; // Int varible.
     int month; // Int varible.
     int year; // Int varible.
    };
