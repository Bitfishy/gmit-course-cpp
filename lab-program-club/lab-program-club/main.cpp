#include <iostream>
#include "football_club.cpp"
#include "player.cpp"

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

    PlayerClass player1;//("Mo", "Salah");
 //   player1.printPlayerInfo();
    player1.setName("Mohammed", "Salah");

//    string playerName;
 //   playerName = player1.getName();
 //   cout << "\n" << playerName << "\n" << endl;

    int sizeSquad = 23;
    int sizeTeam = 15;


    return 0;

};


