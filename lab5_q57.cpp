#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to print the Fibonacci series upto n terms

 int n, i, s, t1 = 0, t2 = 1;
/*Declaring the variables
  n = number of terms
  i = for incrementing
  s, t1 and t2 = to store the terms
*/
 
 cout <<"Enter the number of terms" <<endl;
 cin >>n;

 cout <<"The Fibonacci series upto " <<n <<" terms is " <<t1 <<", ";
//The loop begins

 for (i = 1; i <= n; i++)
 {
  cout <<t2 <<", ";
  s = t1 + t2;
  t1 = t2;
  t2 = s; 
 }
 return 0;
}
//Program ends
