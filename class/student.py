class student:
    def read(self):
        self.name=str(input("Enter name:"))
        self.rollno=int(input("Enter your roll no:"))
        self.grade=str(input("Enter grade:"))

    def show(self):
        print(self.name)
        print(self.rollno)
        print(self.grade)

def main():
    s=student()
    s.read()
    s.show()


main()