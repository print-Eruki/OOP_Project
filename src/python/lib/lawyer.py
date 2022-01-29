from lib.worker import Worker
from dataclasses import dataclass

@dataclass
class Lawyer(Worker):


    law_firm: str

    

    def talk(self):


        print("Hello! I am " + self.first_name + " " + self.last_name + ", I am a lawyer that works " + str(self.weekly_hours) + " a week at " + self.law_firm + " and I have a salary of " + str(self.salary) + ".")