#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
 //To convert the temp from celsius into fahrenheit

 double t; //Declaring the temp in celsius
 
 cout <<"Enter the temp in celsius" <<endl;
 cin >> t;

 t = t * 9 / 5 + 32; //Formula for conversion
 cout <<"The temp in fahrenheit is " <<t << endl;
 return 0;
}
//The program ends
