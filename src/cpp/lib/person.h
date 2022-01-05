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
        
    }
    void talk()
    {
        
    }
};