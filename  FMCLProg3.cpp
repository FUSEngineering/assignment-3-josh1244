// FMCLProg3.cpp
//tests custom date class
//uses every function and stores 2 dates

#include <iostream>
#include <string>
#include "FMCLDate.h"

using namespace std;

int main() 
{
    //init variables
    string theName;
    int month;
    int day;
    int year;

    Date myDate(theName ,month ,day ,year);
    Date myDate2(theName ,month ,day ,year);


    //input names and dates

//set the name of the first date
    cout << "Please enter first date name:";
   cin >> theName;
   myDate.setDateName(theName); // adds theName into myDate

//Set the first date
    cout << "Please enter first date (dd mm yyyy): ";
    cin >> month >> day >> year;
   myDate.setMonth(month); // sets the month
   myDate.setDay(day); // sets the day
   myDate.setYear(year); // sets the year


//set the name of the second date
    cout << "Please enter second date name:";
   cin >> theName;
   myDate2.setDateName(theName); // adds theName into myDate2

//Set the second date
    cout << "Please enter second date (dd mm yyyy): ";
    cin >> month >> day >> year;
   myDate2.setMonth(month); // sets the month
   myDate2.setDay(day); // sets the day
   myDate2.setYear(year); // sets the year


    //display the dates back

//Use displayDate to show the date
 myDate.displayDate();
myDate2.displayDate();


    return 0;
}