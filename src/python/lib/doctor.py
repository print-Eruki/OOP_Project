from lib.worker import Worker
from dataclasses import dataclass

@dataclass
class Doctor(Worker):


    type: str



    def talk(self):



        print("Hello! I am {} {}, I am a {} doctor that works {} a week and I have a salary of {}.".format(self.first_name, self.last_name, self.type, self.weekly_hours, self.salary))