from lib.worker import Worker
from dataclasses import dataclass

@dataclass
class Engineer(Worker):


    type: str
    company: str
    has_master: bool
    has_doctorate: bool




    def talk(self):
        

        print("Hello! I am {} {}, I am a {} engineer that works {} a week at {} and I have a salary of {}.".format(self.first_name, self.last_name, self.type, self.weekly_hours, self.company, self.salary))
        if(self.has_master == True):
            print("I have a masters degree!")
        
        if(self.has_doctorate == True):
            print("I have a doctorate degree!")