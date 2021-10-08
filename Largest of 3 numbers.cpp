#include <iostream>
using namespace std;
int main() {
  int num1,num2,num3; 
  cout<< "Enter First num"<< endl; 
  cin>>num1; 
  cout<< "Enter Second num"<< endl; 
  cin>>num2; 
  cout<< "Enter Third num"<< endl; 
  cin>>num3;  
  if ((num1>=num2)&&(num1>=num3)) {
    cout<< "The Largest Number is: "<< num1<<endl;
  } 
  if ((num2>=num1)&&(num2>=num3)) {
    cout<< "The Largest Number is: "<<num2<<endl;
  } 
  if ((num3>=num2)&&(num3>=num1)) {
    cout<< "The Largest Number is: "<<num3<<endl;
  }  
  return 0;
}
