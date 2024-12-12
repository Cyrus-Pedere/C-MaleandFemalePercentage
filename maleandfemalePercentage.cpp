/* Cyrus Jayson A. Pedere
   Bscpe 1-1 Programming Logic and Design
   FSw1 Module 2: Input, Processing, and Output

   **** 1. Male and Female Percentages *****
        C++ LANGUAGE
 */

#include<iostream>
using namespace std;


int main()
{

int male, female, classTotal, percentage;
double malePercentage, femalePercentage;

cout << "How many males are in the class?"<<endl;
cin >> male;
cout << "How many females are in the class?"<<endl;
cin >> female;

classTotal = male + female;
percentage = 100;

malePercentage = (male*percentage)/classTotal;
femalePercentage = (female*percentage)/classTotal;

cout <<"The total number of students registered in the class is: " << classTotal <<endl;
cout <<"The percentage of male students in the class is " << malePercentage <<"%."<<endl;
cout <<"The percentage of female students in the class is " << femalePercentage <<"%."<<endl;

return 0;

}