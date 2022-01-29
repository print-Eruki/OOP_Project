from dataclasses import dataclass

@dataclass
class Worker(Person):

    salary: float
    weekly_hours: int

    def talk(self):

        print("Hello! I am " + self.first_name + " " + self.last_name + ". I am a worker that works " + str(self.weekly_hours) + " a week and i have a salary of " + str(self.salary) + ".")
