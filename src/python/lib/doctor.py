from lib.worker import Worker
from dataclasses import dataclass

@dataclass
class Doctor(Worker):


    type: str



    def talk(self):



        print("Hello! I am " + self.first_name +" " + self.last_name + ", I am a " + self.type + " doctor that works " + str(self.weekly_hours) + " a week and I have a salary of " + str(self.salary)+ ".")