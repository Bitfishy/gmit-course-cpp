#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

#include "football_club.h"

void test(){

/*
string galwayTeam[2][]=   {{"Ruairi", "Lavelle"},
                            {"Eoghan", "Kerin"},
                            {"Sean Andy", "Ó Ceallaigh"},
                            {"David", "Wynne"},
                            {"Gary", "O'Donnell"},
                            {"Gareth", "Bradshaw"},
                            {"Johnny", "Heaney"},
                            {"Thomas", "Flynn"},
                            {"Ciarán", "Duggan"},
                            {"Michael", "Daly"},
                            {"Johnathan", "Duane"},
                            {"Eamon", "Brannigan"},
                            {"Barry", "McHugh"},
                            {"Padraig", "Cunningham"},
                            {"Antaine", "Ó Laoí"}}

*/

}




int main()
{
    FootballClub club;
    club.setManagerName("Steve","McDonagh");
    club.printInfo();
    club.setClubname("Castletown");
    club.setDistrictname("Westmeath");

    string clubName = club.getClubname();
    cout << clubName<< endl;
    clubName = club.getDistrict();
    cout << clubName<< endl;

    Player playerTemp;

    //READING DATA FROM A FILE
    fstream infile;
    infile.open("teamSquad.csv", ios::in);
    string firstName, secondName, dob, position, mobile, starting;
    string line;
    int i = 0;
    while(std::getline(infile, line)){
        std::istringstream strLine(line);
        if(!(strLine>>firstName>>secondName>>dob>>position>>mobile>>starting)){
            break;
        }
        else{
          //  cout<<"Input ->"<<firstName<<" "<<secondName<<" "<<dob<<" "<<position<<" "<<mobile<<" "<<starting<<endl;
            playerTemp.setName(firstName,secondName);
            //note stoi convert a string to a int
            playerTemp.setDOB(stoi(dob));
            playerTemp.setPosition(position);
            playerTemp.setMobileNumber(mobile);
            playerTemp.setStarting(starting);
            club.addPlayerToSquad(playerTemp, i);
        }
        //increments
        i =i+1;
    }
    infile.close();


    cout<<"<<---------------->>"<<endl;
    cout<<"SQUAD"<<endl;
    club.printSquad();

    cout<<"TEAM"<<endl;
    club.printTeam();


    club.PrintManagerInfo();

    return 0;
}
