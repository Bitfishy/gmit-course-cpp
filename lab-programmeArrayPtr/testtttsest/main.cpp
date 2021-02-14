#include <iostream>

using namespace std;

int main(){
{
   char cTree;
    int iSize;
    int iSpace;
    int iChars;
    cout << "Enter the number of rows you would like in the tree ";
    cin >> iSize;
    cout << "Enter sybol you would like to use";
    cin >> cTree;
    for(int i = 0; i < iSize; i++){
    iSpace = (iSize-i)-1;
    iChars = (2*i)+1;
    string sSpace(iSpace, '_');
    string sTree(iChars, cTree);
    cout <<sSpace<<sTree<<sSpace<<endl;
    }}
    return 0;
}

