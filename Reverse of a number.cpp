#include <iostream>
using namespace std;
int main() {
  int num,remainder; 
  int reversenum = 0; 
  cout<<"Enter Number: "; 
  cin>>num; 
  while (num!=0) {
    remainder = num % 10;  
    reversenum= reversenum*10 + remainder; 
    num/=10;
  } 
  cout<<"Reverse of the Number: "<<reversenum; 
  return 0;
}
