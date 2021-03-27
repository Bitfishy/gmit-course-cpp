#include"football_club.h"

    FootballClub::FootballClub(){
        this->clubname = "NA";
        this->district = "NA";
    }
    FootballClub::FootballClub(string clubname, string district){
        this->clubname = clubname;
        this->district = district;
    }
      void FootballClub::setManagerName(string ForeName,string Surname){
        Manager->setName(ForeName,Surname);
    }

    void FootballClub::PrintManagerInfo(){
    cout <<"\nCastle Town Manager: "<< Manager->getForename() <<" "<< Manager->getSurname() <<endl;

    }

    string FootballClub::getClubname(){
        return clubname;
    }
    string FootballClub::getDistrict(){
        return district;
    }

    void FootballClub::setClubname(string clubname){
        this->clubname = clubname;
    }

    void FootballClub::setDistrictname(string district){
        this->district = district;
    }

    void FootballClub::printInfo(){
     cout<<clubname<<endl;
    }

    void FootballClub::addPlayerToSquad(Player tmp, int position){

       this->squad[position].setName(tmp.getForename(), tmp.getSurname());
       this->squad[position].setPosition(tmp.getPosition());
       this->squad[position].setDOB(tmp.getDOB());
       this->squad[position].setPosition(tmp.getPosition());
       this->squad[position].setMobileNumber(tmp.getMobileNumber());
       this->squad[position].setStarting(tmp.getStarting());

    }
       void FootballClub::printTeam(){

        for(int i=0;i<MAXSQUAD;i++){
                if (squad[i].getStarting()=="(Yes)"){
                   squad[i].printPlayerInfo();
                }
        }

    }

    void FootballClub::printSquad(){

        for(int i=0;i<MAXSQUAD;i++){
            squad[i].printPlayerInfo();
        }

    }

