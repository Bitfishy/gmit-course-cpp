#include <iostream> //header required by moodle complier
#include <string>
using namespace std;

int main()
{
     const string password = "P4$$w0rd!";     //declare the password constant
     string str;   //declare the variable for input
    cout << "Please enter password:"<<endl; // prompt the user for the password
        cin>>str;       // store the password in your variable
        if (str == password)  { // Compare using an if else statement and print
       cout << "Please go ahead and access the system!"<<endl;
}
    else {
        cout<< "Incorrect password, access locked!";
    }
}
