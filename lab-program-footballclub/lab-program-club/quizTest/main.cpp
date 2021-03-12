// Euro1.cpp
#include <iostream>

using namespace std;
//Class to convert
class convert{
  private:
    double rate = 2.28;
  public:
  float calculate(int inputVal){
    return inputVal*rate;
  }
};
int main() {

 int i, x;
 float BHD[] = {1, 2, 3, 4, 5}; //an array
  //task 1: Declare an object of type class converter

  convert currency;
  //Task 2. Create a for loop, and
  for (int i = 1; i <= 5; i++){
  //(Task 3)on each iteration of the for loop
  //use the function float calculate(int inputVal)
  currency.calculate(i);
  }
 currency.calculate = inputVal*rate;
 currency.calculate = x;
 cout << BHD[i] << " BHD =" << x << " EUR"<<endl;

 return 0;
}
