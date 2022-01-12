from dataclasses import dataclass
from abc import ABC, abstractmethod

@dataclass
class Person:
    
    first_name: str
    last_name: str
    gender: str
    age: int
    height: float
    weight: float

    
    def displaydata(self):

        
        print(self.first_name)
        print(self.last_name)
        print(self.gender)
        print(self.age)
        print(self.height)
        print(self.weight)

    
    abstractmethod  

    def talk(self):
        
        pass