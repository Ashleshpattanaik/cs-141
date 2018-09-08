#include<iostream> //Including the library

using namespace std;

int main()
{
//Program to print the star square pattern

 int n;
/*Declaring the variables
*/ 
 
 cout <<"Enter the number of rows and columns" <<endl;
 cin >>n;

 for (int i = 1; i <= n; i++)
 {
  
  for (int j = 1; j <= n ; j++)
  {
   cout <<"*";
  }
  
  cout <<endl;
 }
 return 0;
}

