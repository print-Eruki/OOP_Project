from dataclasses import dataclass, field
from abc import ABC, abstractmethod

@dataclass()
class Person():
    

    first_name: str
    last_name: str
    gender: str
    age: int
    height: float
    weight: float
    count: int = field(init = False)

    def __post_init__(self):
        self.count =+ 1


    
    def displaydata(self):

        
        print(self.first_name)
        print(self.last_name)
        print(self.gender)
        print(self.age)
        print(self.height)
        print(self.weight)


    def objtotal(self):
        return self.count

    
    abstractmethod  

    def talk(self):
        
        pass