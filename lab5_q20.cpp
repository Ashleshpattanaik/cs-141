#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//Program to calculate gross salary of an employee from the given information

 int bs;
 double hra, da, gs;
/*Declaring the variables
  bs = basic salary
  hra = HRA
  da = DA
  gs = gross salary
*/

 cout <<"Enter the basic salary" <<endl;
 cin >>bs;
  
 //Condtional loop for different cases of basic salary
 
 if (bs <= 10000)
 {
  hra = 20;
  da = 80;
  gs = bs + ((hra * bs)/100) + ((da * bs)/100); 
 }
 
 else if (bs > 10000 && bs <= 20000)
 {
  hra = 25;
  da = 90;
  gs = bs + ((hra * bs)/100) + ((da * bs)/100);
 }
 
 else 
 {
  hra = 30;
  da = 95;
  gs = bs + ((hra * bs)/100) + ((da * bs)/100);
 }
 cout <<"The gross salary is " <<gs <<endl;
 return 0;
}
//Program ends    
