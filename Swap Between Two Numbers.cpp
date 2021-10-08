#include <iostream>
using namespace std;
int main() {
  int num1,num2,temp; 
  cout<< "Enter First num"<< endl; 
  cin>>num1; 
  cout<< "Enter Second num"<< endl; 
  cin>>num2; 
  cout<< "a: "<<num1<<endl; 
  cout<< "b: "<<num2<<endl; 
  temp =num1; 
  num1= num2; 
  num2= temp; 
  cout<< "a: "<<num1<<endl; 
  cout<< "b: "<<num2<<endl; 
  return 0;
}
