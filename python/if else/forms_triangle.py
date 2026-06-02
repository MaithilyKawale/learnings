#Check if three sides form a triangle


a=int(input("enter any number:"))
b=int(input("enter any number:"))
c=int(input("enter any number:"))

if a+b>c and b+c>a and a+c>b:
    print("Valid triangle")
else:
    print("Invalid triangle")