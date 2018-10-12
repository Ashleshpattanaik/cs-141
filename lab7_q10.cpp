#include<iostream>

using namespace std;

int fibonacci(int n)
{
 if (n == 0)
 {
  return 0;
 }
 
 else if (n == 1)
 {
  return 1;
 }
 
 else 
 {
  return (fibonacci(n - 1) + fibonacci(n - 2));
 }
}

int main()
{ 
 int num, term;
 cout <<"Enter the term of the series to be found" <<endl;
 cin >>num;
 
 if (num < 0)
 {
  cout <<"Fibonacci of negative number is not possible" <<endl;   
 }
 
 else 
 {
  term = fibonacci(num);
  cout <<"The " <<num <<"th term of the Fibonacci series is " <<term <<endl;
 }
}
