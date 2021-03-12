#include <iostream>
#include "football_club.h"
#include "player.h"

using namespace std;

int main()
{
    FootballClub club("Liverpool","Anfield"); //class object.
    club.printInfo(); //prints out club info (club name and club district.)
    club.setClubname("The Pool"); //swaps club's name.

    string clubName = club.getClubname(); //gets club's name.
    cout << "\n" << clubName << endl; //Prints out club's name the second way.
    string clubDistrict; //declares club district.
    clubDistrict = club.getDistrict(); //calls function to get district from private class.
    cout << clubDistrict << "\n" << endl; //Prints out club's district the second way.

    //int sizeSquad = 40;
    int sizeTeam = 15;
    PlayerClass squad[40];
    PlayerClass team[15];

    //PlayerClass player1;
    team[1].setName("Stevie");
    team[1].setNumber(122334);
    team[1].setDOB("1984");

    club.addPlayer(team[1], 1);

   // PlayerClass player2;
    team[2].setName("Davy");
    team[2].setNumber(12345);
    team[2].setDOB("1985");

    club.addPlayer(team[2], 2);

  //  PlayerClass player3;
    team[3].setName("Cianan");
    team[3].setNumber(987654);
    team[3].setDOB("1986");

    club.addPlayer(team[3], 3);

   // PlayerClass team[sizeTeam];
    for(int i=1; i<sizeTeam; i++){
        team[i].setName("");
        team[i].setNumber(i);
        team[i].setDOB("");
        club.addPlayer(team[i],i);

    }

    return 0;

};


