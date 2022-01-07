#include <iostream> 
#include <string>
using namespace std;

class Lawyer : public Worker
{
    protected:
    string law_firm;

    public:
    void setdata(string fname, string lname, string g, int a, float h, float s, float weekhours, string lfirm)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
        salary = s;
        weekly_hours = weekhours;
        law_firm = lfirm;
    }
    void displaydata()
    {
        cout<<law_firm<<endl;
    }
    void talk()
    {
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<", I am lawyer that works "<<weekly_hours
        <<" a week at "<<law_firm<<" and I have a salary of "<<salary<<"."<<endl;
    }
};