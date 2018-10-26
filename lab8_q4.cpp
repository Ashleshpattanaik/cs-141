#include<iostream> //Including the library

using namespace std;

//A function to find the maximum among the elements
int maximum(int array[],int size)   
{
 int i, e = array[0];          
 
//Loop to find the maximum among elements
 for(i = 1; i < size; i++)
 {
  if(e < array[i])    
  {
   e = array[i];
  }
 }
 return e;
}

//A function to find the minimum among the elements
int minimum(int array[],int size)
{
 int i, e = array[0];

//Loop to find the minimum among elements 
 for(i = 1; i < size; i++)
 {
  if(e > array[i])               
  {
   e = array[i];
  }
 }
 return e;
}

//The main function
int main()         
{
 int ele1, ele2, size1, size2;
 cout <<"Enter size of the first array" <<endl;
 cin >>size1;

 int array1[size1];
 cout <<"Enter the elements of the first array" <<endl;

//Loop for entering the elements of first array
 for (ele1 = 0; ele1 < size1; ele1++) 
 {
  cin >>array1[ele1];
 }

 cout<<"Enter the size of second array" <<endl;
 cin>>size2;

 int array2[size2];
  cout <<"Enter the elements of the second array" <<endl;

//Loop for entering the elements of second array
 for (ele2 = 0; ele2 < size2; ele2++) 
 {
  cin >>array2[ele2];
 }

 int array[size1 + size2], k, l; 

//Loops for combining the two arrays into a single array 
 for(k = 0; k < size1; k++)
 {
  array[k] = array1[k];
 }


 for(l = size1; l < size1 + size2; l++)
 {
  array[l] = array2[l - size1];
 }

 cout<<"The largest element of the combined array is "<<maximum(array, size1 + size2)<<endl;
 cout<<"The smallest element of the combined array is "<<minimum(array, size1 + size2)<<endl;
 return 0;
}
