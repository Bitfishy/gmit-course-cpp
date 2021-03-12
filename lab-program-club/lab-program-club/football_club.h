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


        void addTeamPlayer(player_tmp, int i){
        team[i].setName(tmp.getName());
        team[i].setNumber(tmp.getNumber());
        team[i].setDOB(tmp.getDOB());
       }
/*
        void addSquadPlayer(player tmp, int i){
        squad[1].setName(tmp.getName());
        squad[1].setNumber(tmp.getNumber());
        squad[1].setDOB(tmp.getDOB());
       }
*/


        };
