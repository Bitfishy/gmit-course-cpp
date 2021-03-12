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
            return mobileNum; //returns number.
        }
        void PlayerClass::setNumber(int mobileNum){ //function to set number in private class and call it from main.
            this->mobileNum = mobileNum; //declares jersey number.
        }
        void PlayerClass::setForename(string forename, string surname, int mobileNum){ //function to set name and number in private class and call it from main.
            this->forename = forename; //declares forename.
            this->surname = surname; //declares surname.
            this->mobileNum = mobileNum; //declares mobile number.
        }
        void PlayerClass::printPlayerInfo(){ //function to print information.
        cout << forename << " " << surname << endl; //prints out name.
        };

