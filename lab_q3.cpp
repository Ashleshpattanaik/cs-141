#include <iostream> //Including the library

using namespace std;

class rectangle //Creating the class
{ 
 private:
 double length;
 double breadth;

 public:
 int area(void)
 {
  return length*breadth;
 }
 
 int perimeter(void)
 {
  return 2 * (length + breadth);
 }
 
 rectangle (int len, int bre)
 {
  length = len;
  breadth = bre;
 }
};

int main() //The main function
{
 int newLength, newBreadth;
 cout <<"Enter the length and breadth of the first rectangle" <<endl;
 cin >> newLength >> newBreadth;
 rectangle rect1(newLength, newBreadth);
 cout <<"Enter the length and breadth of the second rectangle" <<endl;
 cin >>newLength; 
 cin >>newBreadth;
 rectangle rect2(newLength, newBreadth);

 if (rect1.area() > rect2.area())
 {
  cout << "The first rectangle has a greater area" <<endl;
 } 
 
 else if (rect1.area() == rect2.area())
 {
  cout << "Both the rectangles have the same area" <<endl;
 }
  
 else
 {
  cout << "The first rectangle has a smaller area"  <<endl;
 }
 
 if (rect1.perimeter() > rect2.perimeter())
 {
  cout << "The first rectangle has a greater perimeter" <<endl;
 }
 
 else if (rect1.perimeter() == rect2.perimeter())
 {
  cout << "Both the rectangles have the same perimeter" <<endl;
 }
    
 else
 {
  cout << "The first rectangle has a smaller perimeter" <<endl;
 }
}//the program ends
