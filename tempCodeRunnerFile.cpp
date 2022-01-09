#include <iostream>
#include <string>

using namespace std;

class Person
{
    string name;

    public:
    void setdata(string n)
    {
        name = n;
    }
    void displaydata()
    {
        cout<<name<<endl;
    }
};

int main (void)
{
    string n;

    cout<<"Please enter the name of the person: ";
    getline(cin,n);

    Person n;
    n.displaydata();
}