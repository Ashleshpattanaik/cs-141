#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
/*To convert days into years, weeks and days
  Here we have assumed the year to be non-leap year
*/
  
 int d; //Declaring the no. of days
 
 cout <<"The no of days is" <<endl;
 cin >> d;
 
 int d1, d2, w, y;

//To calculate the no. of years, weeks and days
 
 if (d < 365)
 {
  cout << d <<" day(s)" <<endl;
 } //If only days is to be displayed
 
 else
 {
  y = d / 365;
  d1 = d % 365;
  
  if (d1 < 7)
  {
   cout << y <<" Year(s) " << d1 <<" Day(s)" <<endl;
  } //If both years and days are to be displayed
  else
  {
   w = d1 / 7;
   d2 = d1 % 7;
   cout << y <<" Year(s) " << w <<" Week(s) " << d2 <<" Day(s)" <<endl;
  } //If years, weeks and days are to be displayed 
 }
 return 0;
}
//The program ends
     
   
