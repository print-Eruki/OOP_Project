from lib.worker import Worker
from dataclasses import dataclass


@dataclass
class Lawyer(Worker):
    """This class will inherited the members and method of the worker.py"""

    law_firm: str

    
    def talk(self):
        """This method will output info from the Lawyer class object"""

        print("Hello! I am {} {}, I am a lawyer that works {} a week at {} and I have a salary of {}.".format(self.first_name, self.last_name, self.weekly_hours, self.law_firm, self.salary))