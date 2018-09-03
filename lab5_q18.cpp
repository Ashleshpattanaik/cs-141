#include<iostream> //Including library

using namespace std;

int main() //The main function
{
//Program to find profit and loss

 int sp, cp, p, l; 
 /*Declaring the variables
  sp = selling price
  cp = cost price
  p = profit
  l = loss
 */
 
 cout <<"Enter the selling price" <<endl;
 cin >>sp;
 cout <<"Enter the cost price" <<endl;
 cin >>cp;
 
 //Condtional loop for finding gain or loss
 if ( sp > cp)   //For profit
 {
  p = sp -cp;
  cout <<"Profit is " <<p <<endl;
 }
 
 else     //For loss
 {
  l= cp - sp;
  cout <<"Loss is " <<l <<endl;
 }
 return 0;
}
//Program ends
