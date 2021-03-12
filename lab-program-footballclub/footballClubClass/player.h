
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

        string getForename(); //function to get forename from private class.
        string getSurname(); //function to get surname from private class.
        string getName();
        void setName(string name);

        int getNumber();  //function to get number from private class.
        void setNumber(int mobileNum); //function to set jersey number in private and call it from main.

        void printPlayerInfo(); //function to print information.

        void setDOB(string year);

         string getDOB(){
            return dob;
        }

        };
