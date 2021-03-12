
// Euro1.cpp
#include <iostream>

using namespace std;
//Class to convert
class convert{
  private:
    double rate = 2.28;
  public:

  int size;
  float bhd;

    float calculate(int inputVal){
    return inputVal*rate;
  }

};
int main() {

// float calculate
 float BHD[] = {1, 2, 3, 4, 5}; //an array

  convert currency;//task 1: Declare an object of type class converter
  //currency.bhd;
{
    currency.calculate(){
    for(int i=1; i<size; i++){//Task 2. Create a for loop, and
    //(Task 3)on each iteration of the for loop
    //use the function float calculate(int inputVal)



  cout << BHD[i] << " BHD =" << bhd << " EUR"<<endl;
  } }
  return 0;
}
};
