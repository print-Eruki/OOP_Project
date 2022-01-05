#include <iostream>
#include <string>
#include"lib/person.h" //Must add the folder the header file, the compiler will find it this way

using namespace std;

//Initialize static member function
int Person::count = 0;

int main (void)
{
    Person Ale, Pedro;
    cout<<"Objects created: "<<Person::objtotal()<<endl;
}