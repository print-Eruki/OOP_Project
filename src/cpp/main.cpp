#include <iostream>
#include <string> 
#include"lib/lawyer.cpp" //Must add the folder if the main.cpp is not in the same folder

using namespace std;

//Initialize static member function
int Person::count = 0;

int main (void)
{
    Lawyer Ale;
    Worker Michael;

    Ale.setdata("Ale","Pagan", "Male",20,177.8, 15.30,35,"DLA Piper");
    Michael.setdata("Michael","Gonzales", "Male",22,177.8, 7.25,40);

    cout<<"Objects created: "<<Person::objtotal()<<endl;
    Ale.talk();
    Michael.talk();
}