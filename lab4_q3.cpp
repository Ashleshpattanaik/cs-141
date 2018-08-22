#include<iostream> //Including the library

using namespace std;
 
int main() //The main function
{
//To convert temp from fahrenheit into celsius
 
 double t; //Declaring the tempm in fahrenheit
 
 cout <<"Enter the temp in fahrenheit" <<endl;
 cin >> t;
 
 t = (t - 32) * 5 / 9; // Formula for conversion
 cout <<"The temp in celsius is " <<t <<endl;
 return 0;
}
//The program ends
 
