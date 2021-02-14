#include <iostream>

using namespace std;

int main()
{


    int i,space,j,k;
                            // xmas tree
    cout<<"  Xmas tree?\n"<<endl;


    for (int i=1;i<7; i++){
    for(space=0;space<7-i; space++){

            cout<<" ";
}
    for(j=0; j<i; j++){
    cout<<"*";
}
    for ( int k=0; k<i-1; k++){
    cout<<"*";

}
   cout<<endl;
}
    for (i=0; i<4; i++){
    for(space=0; space<10/2; space++){
        cout<< " ";
}
    cout << "88";
    cout << "\n";
}

    return 0;
}


