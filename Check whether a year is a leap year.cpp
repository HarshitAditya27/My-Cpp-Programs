#include <iostream>
using namespace std;
int main() {
int year;  
  cout<<"Enter Year"<<endl; 
  cin>>year; 
  if(year % 4==0) { 
    if ( year % 100 == 0) {
      if (year % 400 ==0)
        cout<<"This Year is a leap year"<<endl;   
      else 
        cout <<"This Year is not a leap year"<<endl;
} 
else {
  cout<<"This year is a leap year"<< endl;
} 
  } 
  else{ 
      cout <<"This Year is not a leap year"<<endl;
  }  
  return 0;
}
