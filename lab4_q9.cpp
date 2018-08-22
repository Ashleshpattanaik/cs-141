#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
/*To calculate the simple interest
  Assuming the rate of interest to be applied per annum
*/

 double p, r, t, si;
/*Declaring the variables
  p for principal
  r for rate 
  t for time
  si for simple interest
*/
 
 cout <<"Enter principal amount in Rs." <<endl;
 cin >> p;
 cout <<"Enter the rate of interest (%)" <<endl;
 cin >> r;
 cout <<"Enter the time in years" <<endl;
 cin >> t;

 si = (p * r * t) / 100;
 cout <<"The simple interest for the given amount is Rs. " <<si <<endl;
 return 0;
}
//The program ends
  
