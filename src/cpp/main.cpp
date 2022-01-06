#include <iostream>
#include <string> 
#include"lib/worker.cpp" //Must add the folder if the main.cpp is not in the same folder

using namespace std;

//Initialize static member function
int Person::count = 0;

int main (void)
{
    Worker Ale;
    Ale.setdata("Ale","Pagan", "Male",20,177.8, 7.25,40);
    cout<<"Objects created: "<<Person::objtotal()<<endl;
    Ale.displaydata();
}