from lib.worker import Worker
from lib.lawyer import Lawyer
from lib.doctor import Doctor
from lib.engineer import Engineer
from lib.student import Student

Michael = Worker("Michael", "Gonzales", "Male", 20, 177.8, 190, 19.2,40)
Ale = Lawyer("Ale", "Pagan", "Male", 20, 177.8, 190,20.1,35,"DLA Piper")
Carlos = Doctor("Carlos", "Santana", "Male", 22, 128.3, 180, 15.3, 50, "Neuro")
Jorge = Engineer("Jorge", "Perez", "Male", 20, 180, 177.8, 23, 45, "Software", "Youtube", False, False)
Pedro = Student("Pedro", "Pagan", "Male", 45, 190, 140, "UPRM", "Mechanical engineering")

Ale.talk()
Michael.talk()
Carlos.talk()
Jorge.talk()
Pedro.talk()