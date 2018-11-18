#include <iostream> //Including the library

using namespace std;

class point //Creating class
{
 private:
 float a;
 float b;

 public:
 point (){}
 point (float a, float b)
 {
  this->a = a;
  this->b = b;
 }
 void print ();
 void setter(int, int);
};

void point :: print ()
{
 cout << "(" << a << "," << b << ")";
}

void point :: setter (int x, int y)
{
    this->a = a;
    this->b = b;
}

int main() //The main function
{
 point p1;
 int x, y;
 cout << "Enter the coordinates of the point (first x and then y)" <<endl;
 cin >> x; 
 cin >> y;
 p1.setter(x, y);
 cout << "Co-ordinates of the pointare" <<endl;
 p1.print();
}
