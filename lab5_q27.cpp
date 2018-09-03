#include<iostream> //Including library

using namespace std;

int main()
{
//Program to find the sum of all natural numbers between 1 and given number

 int i, n, s;
/*Declaration of variables
  i = used for increment
  n = number of terms
  s = to store the sum
*/ 
 cout <<"Enter the value of n" <<endl;
 cin >> n;
 s = 0;
//Loop begins
 
 for (i = 1; i <= n; i++)
 {
  s = s + i;
 }
 
 cout <<"The sum is " <<s <<endl;
 return 0;
}
//Program ends
 
