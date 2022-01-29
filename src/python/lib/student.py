from lib.person import Person
from dataclasses import dataclass

@dataclass
class Student(Person):


    institution: str
    major: str



    def talk(self):
        

        print("Hello! I am " + self.first_name + " " + self.last_name + ". I am a student at " + self.institution + ", studying " + self.major +".")