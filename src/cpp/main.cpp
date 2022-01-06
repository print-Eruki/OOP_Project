#include <iostream>
#include <string>
#include"lib/person.h" //Must add the folder the header file, the compiler will find it this way
#include"lib/worker.h"

using namespace std;

//Initialize static member function
int Person::count = 0;

int main (void)
{
    Worker Ale;
    Ale.setdata("Ale","Pagan", "Male",20,177.8, 7.25,40)
    //cout<<"Objects created: "<<Person::objtotal()<<endl;
}