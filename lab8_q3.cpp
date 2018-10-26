#include <iostream> //Including the library

using namespace std;

//A function to find the largest element of the array
int klarge(int i, int array[]) 
{
 int j, k1, large = array[0] ;
 
//Loop for finding the largest element
 for (j = 0; j < i; j++) 
 {
  if (large < array[j]) 
  {
   large = array[j];
   k1 = j;
  }
 }
 cout <<k1 + 1 <<"th element, i.e., " << large <<" is the largest element" <<endl;        
}

//A function to find the smallest element of the array
int ksmall(int i, int array[]) 
{
 int j, k2, small = array[0] ;

//Loop for finding the smallest element
 for (j = 0; j < i; j++) 
 {
  if (small > array[j]) 
  {
   small = array[j];
   k2 = j;         
  }
 }
 cout <<k2 + 1 <<"th element, i.e., " << small <<" is the smallest element" <<endl;        
}

//The main function begins
int main() 
{
 int n,size; 
 cout <<"Enter the size of the array" <<endl;
 cin >>size;

 int array[size];
 cout <<"Enter the elements of the array" <<endl;
  
//Loop for entering the elements of the array
 for (n = 0; n < size; n++) 
 {
  cin >> array[n] ;
 }

 klarge(size, array);
 ksmall(size, array);        
}
//The program ends
