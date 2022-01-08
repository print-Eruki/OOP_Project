#include <iostream>
#include <string>

using namespace std;

class Engineer : public Worker
{
    protected:
    string type;
    string company;
    bool masters;
    bool doctorate;

    public:
    void setdata(string fname, string lname, string g, int a, float h, float w, float s, float weekhours, string t,
    string c, bool m, bool d)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
        salary = s;
        weekly_hours = weekhours;
        type = t;
        company = c;
        masters = m;
        doctorate = d;
    }
    void displaydata()
    {
        cout<<type<<endl;
        cout<<company<<endl;
        cout<<"Masters: "<<masters<<endl;
        cout<<"Doctorate: "<<doctorate<<endl;
    }
    void talk()
    {
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<", I am a "<<type<<" engineer that works "<<weekly_hours
        <<" a week at "<<company<<" and I have a salary of "<<salary<<"."<<endl;
        if(masters == true)
        {
            cout<<"I have a masters degree! "<<endl;
        }
        if(doctorate ==true)
        {
            cout<<"I have a doctorate degree!"<<endl;
        }
    }
};