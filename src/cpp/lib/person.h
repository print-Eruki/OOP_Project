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
    //This static member will count how many objects are created of this class.
    static int count; 
    
    public:
    //constructor (The constructor will initialize every time an object is created)
    Person()
    {
        count++;
    }
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
        cout<<first_name<<endl;
        cout<<last_name<<endl;
        cout<<gender<<endl;
        cout<<age<<endl;
        cout<<height<<endl;

    }
    void talk()
    {
        
    }
    //Static member function
    static int objtotal(void)
    {
        return count;
    }
};