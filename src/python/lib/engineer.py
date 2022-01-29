from lib.worker import Worker
from dataclasses import dataclass

@dataclass
class Engineer(Worker):


    type: str
    company: str
    has_master: bool
    has_doctorate: bool




    def talk(self):
        

        print("Hello! I am " + self.first_name + " " + self.last_name + ", I am a " + self.type + " engineer that works " + str(self.weekly_hours) + " a week at " + self.company + " and I have a salary of " + str(self.salary) +"." )
        if(self.has_master == True):
            print("I have a masters degree!")
        
        if(self.has_doctorate == True):
            print("I have a doctorate degree!")