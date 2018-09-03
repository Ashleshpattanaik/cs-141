#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to check if no is Armstrong no or not

 int n, num, i, s = 0, rem;
/*Declaring the variables
  n = number entered
  num = to store the no for use after it gets divided
  i = for increment
  s = to store the sum of cubes
  rem = to store the remainder
*/
  
 cout <<"Enter number" <<endl;
 cin >> n;
 num = n;
//Loop begins
 
 while (n != 0)
 {
  rem = n % 10;
  s = s + (rem * rem * rem);
  n = n / 10;
 }
 
 if (num == s)
 {
  cout <<num <<" is an Armstrong number" <<endl;
 }
 
 else
 {
  cout <<num <<" is not an Armstrong number" <<endl;
 }
 return 0;
}
//Program ends 
