class rectangle:

    def __init__(self,length,breadth):
        self.length = length
        self.breadth = breadth

    def getarea(self)->float:
        self.area = self.length * self.breadth
        return self.area

    def getperimeter(self)->float:
        self.perimeter = 2 * (self.length + self.breadth)
        return self.perimeter

def main():
    length, breadth = eval(input("Enter Length and Breadth:"))
    r = rectangle(length,breadth)
    print(r.getarea())
    print(r.getperimeter())

main()