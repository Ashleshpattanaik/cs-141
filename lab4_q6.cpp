#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
// To find the area of a triangle
 
 double b, h, a; 
/*Declaring the variables
  b for base 
  h for height
  a for area for trianagle
*/ 
 
 cout <<"Enter the base of triangle" <<endl;
 cin >> b;
 cout <<"Enter the height of triangle" <<endl;
 cin >> h;
 
 a = (b * h) / 2; //Formula for area of triangle
 cout <<"The area of traiangle is " <<a <<endl;
 return 0;
}
//The program ends

