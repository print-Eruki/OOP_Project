#include <iostream>
#include <string> 
#include"person.h" //didn't have to put the folder since worker.cpp is also in the same folder

class Worker : public Person  //inherited all the members and methods from the Person class
{
    protected:
    float salary;
    float weekly_hours;

    public:
    virtual void setdata(string fname, string lname, string g, int a, float h, float s, float weekhours)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
        salary = s;
        weekly_hours = weekhours; 
    } 
    virtual void displaydata()
    {
        cout<<first_name<<endl;
        cout<<last_name<<endl;
        cout<<gender<<endl;
        cout<<age<<endl;
        cout<<height<<endl;
        cout<<salary<<endl;
        cout<<weekly_hours<<endl;
    }
    virtual void talk(){
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<", I am a worker that works "
        <<weekly_hours<<" hours a week and I have a salary of "<<salary<<"."<<endl;
    }
};