#include<iostream> //Including the library
#include<math.h> //Including library for exponential factor

using namespace std;

int main() //The main function
{
/*To calculate the compound interest
  Here we have assumed that interest rates apply once per annum 
*/
 
 double p, r, t, ci;
/*Declaring the variables
  p for principal amount
  r for rate of interest
  t for total time
  ci for compound interest
*/
  
 cout <<"Enter the principal amount in Rs." <<endl;
 cin >> p;
 cout <<"Enter the rate of interest (%)" <<endl;
 cin >> r;
 cout <<"Enter the time taken for the interest to be compounded" <<endl;
 cin >> t;
 
 ci = (p * pow((1 + (r / 100)),t)) - p; //Formula for CI
 cout <<"The compound interest for the given amount is Rs. " << ci <<endl;
 return 0;
}
//The program ends

