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

    Date testDate("Due Date" ,9 ,26 ,2022);
    Date myDate(theName ,month ,day ,year);
    Date myDate2(theName ,month ,day ,year);

//test due date
cout << "The  " << testDate.getDateName() << " is " << testDate.displayDate() << endl;



    //input names and dates

//set the name of the first date
    cout << "Please enter first date name:";
   cin >> theName;
   myDate.setDateName(theName); // adds theName into myDate

//Set the first date
    cout << "Please enter first date (mm dd yyyy): ";
    cin >> month >> day >> year;
   myDate.setMonth(month); // sets the month
   myDate.setDay(day); // sets the day
   myDate.setYear(year); // sets the year


//set the name of the second date
    cout << "Please enter second date name:";
   cin >> theName;
   myDate2.setDateName(theName); // adds theName into myDate2

//Set the second date
    cout << "Please enter second date (mm dd yyyy): ";
    cin >> month >> day >> year;
   myDate2.setMonth(month); // sets the month
   myDate2.setDay(day); // sets the day
   myDate2.setYear(year); // sets the year


    //display the dates back

//Use displayDate to show the date
cout << "1. " << myDate.getDateName() << " is " << myDate.displayDate() << endl;
cout << "2. " << myDate2.getDateName() << " is " << myDate2.displayDate() << endl;

//myDate2.displayDate();


    return 0;
}