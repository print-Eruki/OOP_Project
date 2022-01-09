#include <iostream>
#include <string>

using namespace std;

class Student : public Person
{
    protected:
    string institution;
    string major;
    static int count;
    public:
    Student()
    {
        count++;
    }
    void setdata(string fname, string lname, string g, int a, float h, float w, string i, string m)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
        institution = i;
        major = m;
    }
    void displaydata()
    {
        cout<<institution<<endl;
        cout<<major<<endl;
    }
    void talk()
    {
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<". I am a student at "<<institution<<", studying "
        <<major<<"."<<endl;
    }
    static int studtotal()
    {
        return count;
    }
};