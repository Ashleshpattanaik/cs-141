#include <iostream>

using namespace std;

int largest(int i) 
{
 int arrLarge[i], j, element;
 cout << "Enter the elements of the array" <<endl;
 for (j = 0;j < i; j++) 
 {
  cin >> arrLarge[j] ;
 }
 int large = arrLarge[0] ;
 for (j = 0; j < i; j++) 
 {
  if (large < arrLarge[j]) 
  {
   large = arrLarge[j];
   element = j;
  }
 }
 cout <<element + 1 <<"th element, i.e., " << large <<" is the largest element" <<endl;        
}

int smallest(int i) 
{
 int arrSmall[i], j, element;
 cout <<"Enter the elements of the array";
 for (j = 0; j < i; j++) 
 {
  cin >> arrSmall[j] ;
 }
 int small = arrSmall[0] ;
 for (j = 0; j < i; j++) 
 {
  if (small > arrSmall[j]) 
  {
   small = arrSmall[j];
   element = j;         
  }
 }
 cout <<element + 1 <<"th element, i.e., " << small <<" is the smallest element" <<endl;        
}

int main() 
{
 int i,j;
 cout <<"Enter the size of the array" <<endl;
 cin >>i ;
 largest(i);
 smallest(i);        
}
