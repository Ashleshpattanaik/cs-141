#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
/*To find the third angle of a triangle using two given anlges
  The angles are given in degrees
  Sum of all angles is 180 degrees
*/

 double a1, a2, a; 
/*Declaring variables
  a1 for first angle
  a2 for second angle
  a for the required third angle
*/
 
 cout <<"Enter the two angles" <<endl;
 cin >> a1;
 cin >> a2;
 
 a = 180 - (a1 + a2); //Calculating the third angle 
 cout <<"The third angle of the triangle is " << a <<" degrees" <<endl;
 return 0;
}
//The program ends

