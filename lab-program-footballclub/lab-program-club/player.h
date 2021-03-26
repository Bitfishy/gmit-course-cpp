#pragma once
#include <iostream>

using namespace std;

class PlayerClass{
  private:
    //private class attributes.
      string forename;
      string surname;
      string position;
      string name;
      int mobileNum;
      string dob;

  public:

    PlayerClass();

    PlayerClass(string forename, string surname); //constructor with parameters.
    void setForename(string forename, string surname, int mobileNum); //function to set player info in private class and call it from main.

        void printPlayerInfo(); //function to print information.
        string getForename(); //function to get forename from private class.
        string getSurname(); //function to get surname from private class.

        void setName(string name);
        string getName() {
            return name;
        }
        void setNumber(int num); //function to set jersey number in private and call it from main.
        int getNumber() { //function to get number from private class.
            return mobileNum;
        }
        void setDOB(string year);
        string getDOB(){
            return dob;
        }


        };