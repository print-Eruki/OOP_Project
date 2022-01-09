#include <iostream>
#include <string> 
#include"lib/worker.cpp"
#include"lib/lawyer.cpp" //Must add the folder if the main.cpp is not in the same folder
#include"lib/doctor.cpp"
#include"lib/engineer.cpp"
#include"lib/student.cpp"

using namespace std;

//Initialize static member function
int Person::count = 0;
int Worker::count = 0;
int Doctor::count = 0;
int Engineer::count = 0;
int Lawyer::count = 0;
int Student::count =0;


int main (void)
{
    Lawyer Ale;
    Worker Michael;
    Doctor Jorge;
    Engineer Roberto;
    Student Isabela;

    Ale.setdata("Ale","Pagan", "Male",20,177.8, 180, 15.30,35,"DLA Piper");
    Michael.setdata("Michael","Gonzales", "Male",22,177.8, 110, 7.25,40);
    Jorge.setdata("Jorge","Perez","Male", 20, 177.8, 160, 12, 60,"Surgeon");
    Roberto.setdata("Roberto","Santana","Male", 27, 180, 140, 22.2,54,"Software","Google",true,true);
    Isabela.setdata("Isabela","Velez","Female", 18, 150.4, 111, "UPRM","Electrical Engineering");

    cout<<"Objects created: "<<Person::objtotal()<<endl;
    cout<<"Workers created: "<<Worker::worktotal()<<endl;
    cout<<"Lawyers created: "<<Lawyer::lawtotal()<<endl;
    cout<<"Engineers created: "<<Engineer::engtotal()<<endl;
    cout<<"Doctors created: "<<Doctor::doctotal()<<endl;
    cout<<"Students created: "<<Student::studtotal()<<endl;
    Ale.talk();
    Michael.talk();
    Jorge.talk();
    Roberto.talk();
    Isabela.talk();
}