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

    PlayerClass squad[40];
    PlayerClass team[15];

    PlayerClass player1;
    player1.setName("Stevie");
    player1.setNumber(122334);
    player1.setDOB("1984");

    club.addTeamPlayer(player1, 0);

    PlayerClass player2;
    player2.setName("Davy");
    player2.setNumber(12345);
    player2.setDOB("1985");

    club.addTeamPlayer(player2, 1);

    PlayerClass player3;
    player3.setName("Cianan");
    player3.setNumber(987654);
    player3.setDOB("1986");

    club.addTeamPlayer(player3, 2);

    team[0].setName(tmp.getName());
    team[0].setNumber(tmp.getNumber());
    team[0].setDOB(tmp.getDOB());

/*
    PlayerClass player1[23];
    for(int i=0, i<23, i++){
        player1[i].setForename("Stevie");
        player1[i].setMobileNum(i);
        player1[i].setDob("1984");
    }
*/
    return 0;

};


