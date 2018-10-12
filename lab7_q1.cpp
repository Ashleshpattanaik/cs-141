#include<iostream> //Including the library

using namespace std;

//A function to find the power of a number
int powerOfNumber(long base, long exponent)
{
//The base condition
 if (exponent > 0)
 {
  return base * powerOfNumber(base, exponent - 1);
 }
 else 
 {
  return 1;
 }
}
 
//The main function begins
int main()
{
 long b, e, power;
 cout <<"Enter the base" <<endl;
 cin >> b; 
 cout <<"Enter the exponent" <<endl;
 cin >> e; 

//Calling the function
 power = powerOfNumber(b, e);
 cout <<b <<"^" <<e <<" = " <<power <<endl;
 return 0;
} 
