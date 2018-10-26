#include<iostream> //Including the library

using namespace std;

//A function to find the sum of elements of an array
void arrSum(int i) 
{
 int j,  sum = 0, array[i];
 cout <<"Enter the elements of array" <<endl;

//Loop for entering the elements of the array
 for (j = 0; j < i; j++)  
 {  
  cin >>array[j];
 }
 
//Loop for adding up the elements
 for (j = 0; j < i; j++)  
 {
  sum = sum + array[j];
 }
 cout <<"The sum of all the array elements is " << sum << endl; 
}

//The main function begins
int main() 
{ 
 int n; 
 cout <<"Enter the size of the array" <<endl;
 cin >> n;
 arrSum(n);
 return 0;
}
//Program ends
