#include<iostream> //Including the library

using namespace std;

int main() //The main function
{
//To calculate total, average and percentage of five subjects

 double s1, s2, s3, s4, s5, max, total, avg, per; 
/*Declaring the various variables
  s(n) for each subject
  max for maximum marks in each subject
  total for total marks
  avg for average marks
  per for percentage of marks
*/
 
 cout <<"Enter marks of all subjects" <<endl;
 cin >> s1;
 cin >> s2;
 cin >> s3;
 cin >> s4;
 cin >> s5;
 
 cout <<"Enter the maximum marks in each subject" <<endl;
 cin >> max;
 
 total = s1 + s2 + s3 + s4 + s5;
 avg = total / 5;
 per = 100 * (total / (max * 5));
 
 cout <<"The total marks are " << total <<endl;
 cout <<"The average marks are " << avg <<endl;
 cout <<"The percentage is " << per << endl;
 return 0;
}
//The program ends 
