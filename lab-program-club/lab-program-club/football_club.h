#include <iostream>
#include "player.h"

using namespace std;

class FootballClub{
  private:
    //private class attributes.
      string clubname;
      string district;
      string stripColour;
      PlayerClass squad[23];
      PlayerClass team[15];


  public:

    FootballClub();
    FootballClub(string clubname, string district); //constructor with parameters.

        string getClubname(); //function to get club name from private class.
        string getDistrict(); //function to get district from private class.


        void setClubname(string clubname); //function to set club name in private class and call it from main.
        void printInfo(); //function to  print information.

        void addPlayer(PlayerClass tmp, int position){
        team[position].setName(tmp.getName());
        team[position].setNumber(tmp.getNumber());
        team[position].setDOB(tmp.getDOB());
       }
/*
        void addSquadPlayer(PlayerClass tmp, int position){
        squad[position].setName(tmp.getName());
        squad[position].setNumber(tmp.getNumber());
        squad[position].setDOB(tmp.getDOB());
       }
*/



        };
