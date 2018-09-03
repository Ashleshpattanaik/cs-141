#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to calculate the electricity bill

 int u; 
 double bill;
/*Declaring the variables
  u = total units
  bill = total electricity bill
*/
 
 cout <<"Enter the number of units" <<endl;
 cin >> u;
//Conditional loop for different cases of units
 
 if (u <= 50)
 {
  bill = (u * 50) / 100;
 }
 
 else if (u > 50 && u <= 150)
 {
  bill = (u * 75) / 100;
 }
 
 else if (u > 150 && u <= 250)
 {
  bill = (u * 120) / 100;
 }
 
 else 
 {
  bill = (u * 150) /100;
 }
 
 bill = bill + ((bill * 20) /100);  //Additional surcharge of 20% is added
 cout <<"The electricity bill amounts to " <<bill <<endl;
 return 0;
}
//Program ends
      
  
