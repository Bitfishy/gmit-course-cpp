#include <iostream>

using namespace std;

void cristmass_tree(int i, int j,string temp_string){
cout<<"Insert Happy_Christmas"<<endl;
cin>>temp_string;

while (temp_string=="Happy_Christmas"&& j<=5){


        int x = 5;
        int y = 1;

	for(j = 1; j <= 5; j++)
	{
	   for(i = 1; i <= x; i++)
	   {
	      cout << " ";
	   }
           x--;

	   for(i = 1; i <= y; i++)
	   {
		  cout << "*";
	   }
       y += 2;

	   cout << endl;
	}
	}
}


int main()
{
    cout << "Hello world!" << endl;

    cristmass_tree(1,2,"Happy_Christmas");

    return 0;
}
