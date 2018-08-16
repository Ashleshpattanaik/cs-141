//Including the library
#include<iostream>

using namespace std;

//The main function
int main()
{
/*Declaration of different data types by assigning values to them
  Also finding the size of the respective data types
*/
 int a; 
 a = 10; 
 cout <<"The value of a is " <<a <<endl; 
 cout <<"The size of integer is " <<sizeof(a) <<endl;  
 
 float b;  
 b = 12.35;
 cout <<"The value of b is " <<b <<endl;
 cout <<"The size of float is " <<sizeof(b) <<endl; 
 
 double c;
 c = 15.6666; 
 cout <<"The value of c is " <<c <<endl;
 cout <<"The size of double is " <<sizeof(c) <<endl; 

 char d;
 d = '@'; 
 cout <<"The value of d is " <<d <<endl;
 cout <<"The size of character is " <<sizeof(d) <<endl;
 
 bool e = (b<c);
 cout <<"The value of e is " <<e <<endl;  
 cout <<"The size of boolean is " <<sizeof(e) <<endl;
} 
//The program ends here

