#include "player.h"
#include <string>
#include <iostream>

using namespace std;

    PlayerClass::PlayerClass(string forename, string surname){ //constructor with parameters.
            this->forename = forename; //declares foree.
            this->surname = surname; //declares surname.
        }
         string PlayerClass::getForename(){ //function to get forename from private class.
            return forename; //returns forename.
        }
         string PlayerClass::getSurname(){ //function to get surname from private class.
            return surname; //returns surname.
        }
        int PlayerClass::getNumber(){ //function to get number from private class.
            return jerseyNumber; //returns number.
        }
        void PlayerClass::setNumber(int jerseyNumber){ //function to set number in private class and call it from main.
            this->jerseyNumber = jerseyNumber; //declares jersey number.
        }
        void PlayerClass::setForename(string forename, string surname, int jerseyNumber){ //function to set name and number in private class and call it from main.
            this->forename = forename; //declares forename.
            this->surname = surname; //declares forename.
            this->jerseyNumber = jerseyNumber; //declares forename.
        }
        void PlayerClass::printPlayerInfo(){ //function to print information.
        cout << forename << " " << surname << endl; //prints out name.
        };

