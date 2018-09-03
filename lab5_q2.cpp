#include<iostream> //Including library

using namespace std;

int main() //Main function
{
//Program to find greatest between three numbers

 int a, b, c; //Declaring the three numbers
 
 cout <<"Enter the three different numbers" <<endl;
 cin >> a;
 cin >> b;
 cin >> c;

 if (a >> b && a >> c)
 {
  cout <<a <<" is the greatest number" <<endl;
 }
 
 else if (b >> a && b >> c)
 {
  cout <<b <<" is the greatest number" <<endl;
 }
 
 else if (b == c)
 {
  if (a > b)
  { 
  cout <<a <<" is the greatest number" <<endl;
  } 
 
  else  
  {
   cout <<b <<" is the greatest number" <<endl;
  }
 }
 else if (a == b)
 {
  if (c > a)
  {
   cout <<c <<" is the greatest number" <<endl;
  }  
  
  else
  {
   cout <<a <<" is the greatest number" <<endl;
  }
 }
 
 else if (a == c)
 {
  
  if (b > a)
  {
   cout <<b <<" is the greatest number" <<endl;
   }
  
  else 
  {
   cout <<c <<" is the greatest number" <<endl;  
  } 
 }

 else 
 {
  cout <<c <<" is the greatest number" <<endl;
 }
 return 0;
}
//Program ends
