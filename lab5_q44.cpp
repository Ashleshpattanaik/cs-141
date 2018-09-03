#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to find the factorial of a number

 int i, n, fact = 1;
/*Declaring the variables
  i = used for increment
  n = number entered
  fact = factorial
*/
 
 cout <<"Enter the number" <<endl;
 cin >>n;
//Loop begins

 for (i = 1; i <= n; i++)
 {
  fact = fact * i;
 }
 
 cout <<"The factorial of " <<n <<" is " <<fact <<endl;
 return 0;
}
//Program ends 
