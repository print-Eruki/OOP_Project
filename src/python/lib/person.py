from dataclasses import dataclass, field
from abc import ABC, abstractmethod

@dataclass
class Person:

    first_name: str
    last_name: str
    gender: str
    age: int
    height: float
    weight: float
    

    
    abstractmethod  
    def talk(self):
        
        pass
    
    