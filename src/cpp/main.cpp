#include <iostream>
#include <string> 
#include"lib/worker.cpp"
#include"lib/lawyer.cpp" //Must add the folder if the main.cpp is not in the same folder
#include"lib/doctor.cpp"
#include"lib/engineer.cpp"

using namespace std;

//Initialize static member function
int Person::count = 0;

int main (void)
{
    Lawyer Ale;
    Worker Michael;
    Doctor Jorge;
    Engineer Roberto;

    Ale.setdata("Ale","Pagan", "Male",20,177.8, 15.30,35,"DLA Piper");
    Michael.setdata("Michael","Gonzales", "Male",22,177.8, 7.25,40);
    Jorge.setdata("Jorge","Perez","Male", 20, 177.8,12, 60,"Surgeon");
    Roberto.setdata("Roberto","Santana","Male", 27, 180, 22.2,54,"Software","Google",true,true);

    cout<<"Objects created: "<<Person::objtotal()<<endl;
    Ale.talk();
    Michael.talk();
    Jorge.talk();
    Roberto.talk();
}