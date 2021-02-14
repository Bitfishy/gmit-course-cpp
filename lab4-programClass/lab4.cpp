#include <iostream>
#include <string>
using namespace std;

void LabInfo() {
    cout << "Stephen McDonagh" << endl;
    cout << "Lab using classes" << "\n" << endl;
    }

    class labInfo {


    private:
    int day;
    int month;
    int year;

    public:
    string name;
    string labId;

    void setDate(int dayTemp,int monthTemp ,int yearTemp) {
    day = dayTemp;
    month = monthTemp;
    year = yearTemp;


    }

    void printInfo(labInfo Info1){
    cout << name << endl;
    cout << labId << endl;
   // cout << "Date:" << " " << day << ":" << month << ":" << year << endl;
    }
    };

 /*   int day;
    int month;
    int year;
    };

    void printInfo(labInfo Info1){
    cout << Info1.name << endl;
    cout << Info1.labId << endl;
    cout << "Date:" << " " << Info1.day << ":" << Info1.month << ":" << Info1.year << endl;
    };
*/

    //End of class definition.

int main()
{
    LabInfo();
    labInfo Info1;
    Info1.name = "Stephen McDonagh";
    Info1.labId = "Lab 4";
   /* Info1.day = 12;
    Info1.month = 02;
    Info1.year = 2021;*/

    printInfo(Info1);
    Info1.setDate(12,2,2021);

    return 0;
}
