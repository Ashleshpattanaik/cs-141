#include<iostream> //Including the library

using namespace std;

//A function to ask the user for input, viz., the number of weekly sales 
void weeklySales(double &sales) //Variable sales = number of shoe pairs sold per week
{
 cout <<"Enter the number of sales, i.e., the number of pairs of shoes sold per week" <<endl;
 cin >> sales; 
}

//A function for the first option of salary 
void firstOption(double sal1) //Variable sal1 = for storing the first option of net weekly salary 
{
 sal1 = 600;
}

//A function for the second option of salary
void secondOption(double &sal2, double &perHourSal, double &hours, double sales, double &shoePrice)
{
/*Declaration of variables
  sal2 = for storing the second option of net weekly salary  
  perHourSal = the basic salary of salesman per hour of work
  hours = the number of hours salesman works per week 
  shoePrice = the price of each pair of shoes
*/

//The first term of the following formula includes the basic salary and the second term includes the commissions
 sal2 = (perHourSal * hours) + (10 * shoePrice * sales / 100);
 
}

//A function for the third option of salary
void thirdOption(double &sal3, double shoePrice, double sales) //Variable sal3 = for storing the third option of net weekly salary 
{
//The first term of the following formula includes the commissions and the second term includes extra profit per pair
 sal3 = (20 * shoePrice * sales / 100) + (20 * sales);
 
}

//The main function begins
int main()
{
 double salary1, salesPerWeek, salary2, salary3, perHrSal = 7, hrs = 40, shoeCost = 225;

//Calling the above functions
 weeklySales(salesPerWeek);
 firstOption(salary1);
 secondOption(salary2, perHrSal, hrs, salesPerWeek, shoeCost);
 thirdOption(salary3, shoeCost, salesPerWeek);

//The following conditional loop helps to determine the best option for salary of the salesman
 if (salary1 > salary2 && salary1 > salary3)
 {
  cout <<"The first option is best and your weekly salary is Rs. " <<salary1 <<endl;
 }
 
 else if (salary2 > salary1 && salary2 > salary3)
 {
  cout <<"The second option is best and your weekly salary is Rs. " <<salary2 <<endl;
 }

 else 
 {
  cout <<"The third option is best and your weekly salary is Rs. " <<salary3 <<endl;
 }
 return 0;
}
//The program ends
    





