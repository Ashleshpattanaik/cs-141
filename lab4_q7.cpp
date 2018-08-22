#include<iostream> //Including the library
#include<math.h> //Including the library for square root function

using namespace std;

int main() //The main function
{
//To find the area of an equilateral triangle

 double s, a; 
/*Declaring the variables
  s for side of triangle 
  a for area of triangle
*/

 cout <<"Enter the side of triangle" <<endl;
 cin >> s;
 
 a = (s * s * sqrt(3)) / 4; 

/*Formula for area of equi triangle
  sqrt() is the funhction to find out root of a no.
*/
 
 cout <<"The area of equilateral triangle is " << a <<endl;
 return 0;
}
//The program ends 
