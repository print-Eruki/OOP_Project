from dataclasses import dataclass
from lib.person import Person

@dataclass
class Worker(Person):
    """This class will inherit the member and method from person.py"""

    salary: float
    weekly_hours: int

    def talk(self):

        print("Hello! I am {} {}. I am a worker that works {} a week and I have a salary of {}.".format(self.first_name, self.last_name, self.weekly_hours, self.salary))
