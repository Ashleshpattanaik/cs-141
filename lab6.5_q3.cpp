#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
 long n, square, i, sum;
/*Declaring the variables
  n = used in a loop for performing operations on numbers starting from 2 through infinite
  i = used in a loop to find the sum of consecutive integers beginning from 1
  square = to store the square of a number being considered
  sum = to store the sum of the consecutive integers   
*/
 
 cout <<"The numbers which are perfect squares and also the sum of consecutive integers sarting from one are" <<endl;
 
 for (n = 2; n > 0; n++) // Loop for finding the squares of numbers from 2 to infinite
 {
  square = n * n;
  sum = 0;
  for (i = 1; i <= square; i++) // Loop for finding the sum of consecutive integers
  {
   sum = sum + i;
   
   if (sum == square) //Condition to check if the number is desired one or not
   {
    cout <<square <<endl;
   }
  }
 }
 return 0;
}  
//Program ends
   
