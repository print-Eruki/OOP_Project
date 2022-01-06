#include <iostream>
#include <string> 
#include"lib/person.h"

class Worker : public Person  //inherited all the members and methods from the Person class
{
    private:
    float salary;
    float weekly_hours;

    public:
    void setdata(float s, float weekhours)
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