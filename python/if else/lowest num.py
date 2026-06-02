#write a python program to find the lowest number out of two number expected from user


a=int(input("Enter any num:"))
b=int(input("Enter any num:"))
print("your num is",a,"and",b)

if a>b:
    print(b,"is lowest")
elif b>a:
    print(a,"is lowest")
else:
    print("both are equal")