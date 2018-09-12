#include<iostream> //Including the library

using namespace std;
 
int main() //The main function
{
//Program to print a hollow pyramid star pattern

 int n; //Variable n = number of rows and columns
 
 cout <<"Enter the number of rows and columns" <<endl;
 cin >>n;
 
 for (int i = n; i >= 1; i--) //Variable i = for printing the rows
 {
  
  for (int j = 1; j <= i; j++) //Variable j = for printing the spaces before the pyramid 
  {
   cout <<" ";
  }
  
  for (int k = 1; k <= 2 * (n - i) + 1; k++) //Variable k = for printing the stars and spaces inside the pyramid
  {
//The following "if-else" loop is for deciding whether to print stars or spaces at the required places of the pyramid
   
   if (i == 1 || i == n || k == 1 || k == 2 * (n - i) + 1)
   { 
    cout <<"*";
   }
   
   else 
   {
    cout <<" ";
   }
  }
  cout <<endl;
 }
 return 0;
}
//Program ends   
