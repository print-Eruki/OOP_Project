#include <iostream>
#include <string>
#include"lib/person.h" //Must add the folder the header file, the compiler will find it this way

using namespace std;

int main (void)
{
    person Ale;
    Ale.setdata("Ale", "Pagan", "Male", 20, 177.8);
    Ale.getdata();
}