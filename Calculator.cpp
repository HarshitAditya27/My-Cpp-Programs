#include <iostream> 
using namespace std;
int main() {  
  int num1 , num2;  
  char c;
  cout << "Enter First Number: "<<endl; 
  cin>>num1;
  cout << "Enter Second Number: "<<endl; 
  cin>>num2; 
  cout <<"Enter operation"<< endl; 
  cin>>c; 
  if (c=='+'){
    cout << "The Sum of the two numbers is"<< num1 + num2<<endl; 
  } 
  else if (c =='-'){
    cout<<"The difference of the two numbers is"<< num1 - num2<<endl;
  } 
  else if (c =='*'){
    cout<<"The product of the two numbers is"<< num1 * num2<<endl;
  }  
  else if (c =='/'){
    cout<<"The division of the two numbers is"<< num1 / num2<<endl;
  }  
  else { 
    cout<<"Wrong opperation inserted"<<endl;
  } 
  return 0;
}
