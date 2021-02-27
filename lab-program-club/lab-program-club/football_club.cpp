#include "football_club.h"
#include <string>
#include <iostream>

using namespace std;

    FootballClub::FootballClub(string clubname, string district){ //constructor.
            this->clubname = clubname; //declares club name.
            this->district = district; //declares district.
        }
         string FootballClub::getClubname(){ //function to get club name from private class.
            return clubname; //returns clubname.
        }
         string FootballClub::getDistrict(){ //function to get district from private class.
            return district; //returns district.
        }
        void FootballClub::setClubname(string clubname){ //function to set club name in private class and call it from main.
            this->clubname = clubname; //declares club name.
        }
        void FootballClub::printInfo(){ //function to print information.
        cout << clubname << "\n" << district << endl; //prints out club name and district.
        };

