#include<iostream>

using namespace std;

int digitsSum(int n)
{
 if (n > 0)
 {
  return (n % 10 + digitsSum(n / 10));
 }
  
 else
 {
  return 0;
 }
}

int main()
{
 int num, sum;
 cout <<"Enter the number" <<endl;
 cin >>num;
 sum = digitsSum(num);
 cout <<"The sum of digits of " <<num <<" is " <<sum <<endl;
}
