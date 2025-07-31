class Person:
    def __init__(self, name, age):
        self.__name = name
        self.__age = age

    def showpersondetails(self):
        print("Name is:", self.__name)
        print("Age is:", self.__age)

class Employee(Person):
    def __init__(self, name, age, empid, salary):
        super().__init__(name, age)  # Using super() to call parent constructor
        self.__empid = empid
        self.__salary = salary

    def showEmpDetails(self):
        print("Emp ID is:", self.__empid)
        print("Salary is:", self.__salary)

def main():
    name = input("Enter your name: ")
    age = int(input("Enter your age: "))
    empid = input("Enter employee ID: ")
    salary = float(input("Enter salary: "))

    e = Employee(name, age, empid, salary)
    e.showpersondetails()
    e.showEmpDetails()

main()