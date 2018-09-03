#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to print the reverse of a number

 int n, rev = 0, rem; 
/*Declaring the number
  n = number entered
  rev = to store the reversed number
  rem = remainder
*/

 cout <<"Enter the number" <<endl;
 cin >>n; 
 cout <<"The reverse of " <<n <<" is "; 
//Loop for reversing the number digit-by-digit
 
 while (n != 0)
 {
  rem = n % 10;
  rev = rev * 10 + rem;
  n = n / 10;
 }
 cout <<rev <<endl;
 return 0;
}
//The program ends
 

   
