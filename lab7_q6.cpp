#include<iostream>

using namespace std;

int reverse(int n, int store)
{
 if (n == 0)
 {
  return store;
 }
 
 store = (store * 10) + (n % 10);
 return reverse(n / 10, store);
}

int main()
{
 int num, temp;
 cout <<"Enter the number" <<endl;
 cin >>num;
 temp = reverse(num, 0);
 cout <<"Reverse of " <<num <<" is " <<temp <<endl;
}
