#include<iostream> //Including library

using namespace std;

int main() //Main function
{
//Program to check if year is leap year or not
 
 int y; //Declaring the year
 
 cout <<"Enter the year" <<endl;
 cin >> y;
  
 if (y % 100 == 0)    //For checking the last year of each century
 {
  
  if (y % 400 == 0)
  {
   cout <<y <<" is a leap year" <<endl;
  }
  else 
  {
   cout <<y <<" is not a leap year" <<endl;
  }
 }
 
 else if (y % 4 == 0)   //For general years
 {
  cout <<y <<" is a leap year" <<endl;
 }
 
 else 
 {
  cout <<y <<" is not a leap year" <<endl; 
 }
 return 0;
}
//Program ends
