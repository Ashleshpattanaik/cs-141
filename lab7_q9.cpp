#include<iostream>

using namespace std;

int factorial(int n)
{
 if (n <= 1)
 {
  return 1;
 }
 
 else 
 {
  return (n * factorial(n - 1));
 }
}
 
int main()
{
 int num, fact;
 cout <<"Enter the number" << endl;
 cin >> num;
 
 if (num < 0)
 {
  cout <<"Factorial of negative number is not possible" <<endl;
 }
 
 else
 {
  fact = factorial(num);
  cout <<"The factorial of " <<num <<" is " <<fact <<endl;
 }
} 
