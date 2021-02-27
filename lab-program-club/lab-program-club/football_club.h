#include <iostream>

using namespace std;

class FootballClub{
  private:
    //private class attributes.
      string clubname;
      string district;
      string stripColour;
  public:

    FootballClub(string clubname, string district); //constructor with parameters.

        string getClubname(); //function to get club name from private class.
        string getDistrict(); //function to get district from private class.


        void setClubname(string clubname); //function to set club name in private class and call it from main.
        void printInfo(); //function to  print information.

        };
