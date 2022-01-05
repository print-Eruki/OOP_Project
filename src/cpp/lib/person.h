#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
    string first_name;
    string last_name;
    string gender;
    int age;
    float height;
    
    public:
    //set all the atributes
    void setdata(string fname, string lname, string g, int a, float h)
    {
        first_name = fname;
        last_name = lname;
        gender = g;
        age = a;
        height = h;
    }
    //Get all the atributes (output them out)
    void getdata()
    {
        cout<<"First name: "<<first_name<<endl;
        cout<<"Last name: "<<last_name<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Height: "<<height<<"\n\n";
    }
    void talk()
    {
        cout<<"Hi my name is "<<first_name<<" "<<last_name<<" I'm a "<<gender<<" and "<<age;
        cout<<" years old with a height of "<<height;
    }
};