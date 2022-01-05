#include <iostream>
#include <string>
#include "person.h" 

using namespace std;

int main ()
{
    person Ale;
    Ale.setdata("Ale", "Pagan", "Male", 20, 177.8);
    Ale.talk();
}