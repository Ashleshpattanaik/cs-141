#include<iostream>

using namespace std;

void arrSum(int i) 
{
 int j,  sum = 0,array [i] ;
 cout <<"Enter the elements of array" <<endl;
 for (j = 0; j < i; j++) 
 {  
  cin >>array [j];
 }
 
 for (j = 0; j < i; j++) 
 {
  sum = sum + array [j];
 }
 cout <<"The sum of all the array elements is " << sum << endl; 
}

int main() 
{ 
 int n; 
 cout <<"Enter the size of the array" <<endl;
 cin >> n;
 arrSum(n);
 return 0;
}
