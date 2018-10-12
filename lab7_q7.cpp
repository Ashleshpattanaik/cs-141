#include<iostream>

using namespace std;

int palindrome(int n, int store)
{
 if (n == 0)
 {
  return store;
 }
 
 store = (store * 10) + (n % 10);
 return palindrome(n / 10, store);
}

int main()
{
 int num, temp;
 cout <<"Enter the number" <<endl;
 cin >>num;
 temp = palindrome(num, 0);
 
 if (num == temp)
 {
  cout <<num <<" is a palindrome" <<endl;
 }
 
 else
 {
  cout <<num <<" is not a palindrome" <<endl;
 }
}
