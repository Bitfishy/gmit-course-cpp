#include <iostream>

using namespace std;

int main(){

int n;
cout << "Enter a negative integer: ";
cin >> n;
do
{
    cout << "The integer you entered is a positive number" << endl;
    cout << "Enter a negative integer: ";
    cin >> n;
}
    while (n >= 0);
}
