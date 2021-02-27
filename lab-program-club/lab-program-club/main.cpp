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

    PlayerClass player("Mo","Salah"); //class object.
    player.printPlayerInfo(); //prints out player's name.

    player.setNumber(11); //sets players number in private class.
    int playerNumber; //declares players number.
    playerNumber = player.getNumber(); //calls function to get number from private class.
    player.setForename("Mohammed", "Salah", 11); //swaps player's name.
    string playerSurname; //declares players surname
    playerSurname = player.getSurname(); //calls function to get surname from private class.

    string playerForename = player.getForename(); //gets players name.
    cout << playerForename << " " << playerSurname << " " << playerNumber << endl; //Prints out name and number.

    return 0;

};


