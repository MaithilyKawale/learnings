class rectangle:
    def read(self):
        self.length= float(input("Enter any number:"))
        self.breadth= float(input("Enter any number:"))

    def area(self):
       self.a= self.length*self.breadth

    def perimeter(self):
        self.p=2*self.a


    def show(self):
        print("length is",self.length)
        print("breadth is",self.breadth)
        print("area of rectangle is",self.a)
        print("perimeter of rectangle is",self.p)

def main():
    r=rectangle()
    r.read()
    r.area()
    r.perimeter()
    r.show()

main()