//Date library
//stores date, month, year
//stores name of date
//custom member
//set and get functions
//validate month, set to 1 if outside of 1-12 range
//use contructor
//displayDate function

#include <string>

class Date //class
{
    public:
    
// Constructor with parameters
    Date(std::string w, int x, int y, int z) { 
      dateName = w;
      month = x;
      day = y;
      year = z;
    }

//function that sets dateName
    void setDateName(std:: string w)
    {
        dateName = w;     // store date name
    }

//function that sets date
    void setDate(int x, int y, int z)
    {
        // store date
        month = x;
        day = y;
        year = z;
    }
//function that sets month
    void setMonth(int x)
    {
        // store month
        if (x>12 || x<1)
        {
            month = 1;
        }
        else
        {
        month = x;
        }
    }
//function that sets day
    void setDay(int y)
    {
        // store day
        day = y;
    }
//function that sets year
    void setYear(int z)
    {
        // store year
        year = z;
    }

//function that retreives date name
    std::string getDateName() const
    {
        return dateName; // returns date name
    }

//function that retreives month
    int getMonth() const
    {
        return month; // returns month
    }
    //function that retreives day
    int getDay() const
    {
        return day; // returns day
    }
//function that retreives year
    int getYear() const
    {
        return year; // returns year
    }

    
    //function that displays the date
   void displayDate() const
    {
        std::cout << "2. " << dateName << " is "<< month << "/" << day << "/" << year << std::endl;
    }



    private:
//actual variables are protected and only accessable with set and get
    std::string dateName;  
    int month;
    int day;
    int year;
    //std::string dis;
};