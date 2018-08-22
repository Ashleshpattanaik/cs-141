#include<iostream> //including library

using namespace std;

int main() //The main function
{
//Converting length in cm to m and km 
 
 double l; //Declaring the length in cm
 
 cout <<"Enter the length in centimetre" <<endl;
 cin >>l;
 
 l = l / 100; //Converting into metre
 cout <<"The length in metre is " <<l <<endl;
 
 l = l / 1000; //Converting into km
 cout <<"The length in kilometre is " <<l <<endl;
 return 0;
}
//The program ends

