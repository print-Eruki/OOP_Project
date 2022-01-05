#include <iostream>
#include <string>
#include <person.h> 

using namespace std;

int main (void)
{
    person Ale;
    Ale.setdata("Ale", "Pagan", "Male", 20, 177.8);
    Ale.getdata();
}