#include<iostream> //Library is included

using namespace std;

int main() //The main function starts
{ 
 int a, b; float c;//Declaring the variables on which operations are to be performed
 cout <<"Enter the value of a" <<endl;
 cin >> a;
 cout <<"Enter the value of b" <<endl;
 cin >> b;
 cout <<"Enter the value of c" <<endl;
 cin >> c;
 
 /*Performing the operations on two integer types
   And also on an integer and a float type
 */
 int res1, res2, res3, res4, res5; //For integer type operations
 float Res1, Res2, Res3, Res4; //For float type operations
 res1 = a + b;
 res2 = a - b;
 res3 = a * b;
 res4 = a / b;
 res5 = a % b; 
 Res1 = a + c;
 Res2 = a - c;
 Res3 = a * c;
 Res4 = a / c;
 cout <<"The sum of a and b is " <<res1 <<endl;
 cout <<"The difference of a and b is " <<res2 <<endl;
 cout <<"The product of a and b is " <<res3 <<endl;
 cout <<"The quotient of a and b is " <<res4 <<endl;
 cout <<"The remainder of a and b is " <<res5 <<endl;
 cout <<"The sum of a and c is " <<Res1 <<endl;
 cout <<"The difference of a and c is " <<Res2 <<endl;
 cout <<"The product of a and c is " <<Res3 <<endl;
 cout <<"The quotient of a and c is " <<Res4 <<endl;  
}
//Program ends here
 


   
 
   


