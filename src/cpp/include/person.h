#include <iostream>
#include <string>

using namespace std;

class Person
{
    //The access specifier is protected so that the inherited classes can access these members
    protected:
    string first_name;
    string last_name;
    string gender;
    int age;
    float height;
    float weight;
    //This static member will count how many objects are created of this class.
    static int count; 
    
    public:
    //constructor (The constructor will initialize every time an object is created)
    Person()
    {
        count++;
    }
    //set all the atributes
    virtual void setdata()
    {
        
    }
    //Get all the atributes (output them out)
    virtual void displaydata()
    {
        

    }
    virtual void talk()
    {
        cout<<"Hello! I am "<<first_name<<" "<<last_name<<". I am a "<<gender<<" and my age is "<<age<<" years old.";
    }
    //Static member function
    static int objtotal(void)
    {
        return count;
    }
};