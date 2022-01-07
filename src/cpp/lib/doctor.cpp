#include <iostream>
#include <string>
using namespace std;

class Doctor : public Worker
{
    protected:
    string type;

    public:
    void setdata(string fname, string lname, string g, int a, float h, float s, float weekhours, string t)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
        salary = s;
        weekly_hours = weekhours;
        type = t;
    }
    void displaydata()
    {
        cout<<type<<endl;
    }
    void talk()
    {
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<", I am a "<<type<<" doctor that works "<<weekly_hours
        <<" a week and have a salary of "<<salary<<"."<<endl; 
    }
};