#include <iostream>
#include <string> 
#include"person.h"

class Worker : public Person  //inherited all the members and methods from the Person class
{
    private:
    float salary;
    float weekly_hours;

    public:
    void setdata(string fname, string lname, string g, int a, float h, float s, float weekhours)
    {
        
        salary = s;
        weekly_hours = weekhours; 
    } 
    void displaydata()
    {
        cout<<salary<<endl;
        cout<<weekly_hours<<endl;

    }
};