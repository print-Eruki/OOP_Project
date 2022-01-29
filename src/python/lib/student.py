from lib.person import Person
from dataclasses import dataclass

@dataclass
class Student(Person):


    institution: str
    major: str



    def talk(self):
        

        print("Hello! I am {} {} . I am a student at {}, studying {}.".format(self.first_name, self.last_name, self.institution, self.major))



    def calculate(self,*argv):


        self.final_grade = sum(argv)
        self.final_grade /= len(argv)
        print("My final grades are: ", self.final_grade)    