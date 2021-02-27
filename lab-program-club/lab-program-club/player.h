#include <iostream>

using namespace std;

class PlayerClass{
  private:
    //private class attributes.
      string forename;
      string surname;
      string position;
      int jerseyNumber;
  public:

    PlayerClass(string forename, string surname); //constructor with parameters.

        string getForename(); //function to get forename from private class.
        string getSurname(); //function to get surname from private class.
        int getNumber();  //function to get number from private class.

        void setNumber(int jerseyNumber); //function to set jersey number in private and call it from main.
        void setForename(string forename, string surname, int jerseyNumber); //function to set player info in private class and call it from main.
        void printPlayerInfo(); //function to print information.

        };
