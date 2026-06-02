#write a python program to check whether a number is positive or negative

a=int(input("Enter any num:"))
print("your num is",a)

if a>0:
    print(a,"is positive number")
elif a<0:
    print(a,"is negative number")
else:
    print(a,"equal to zero")