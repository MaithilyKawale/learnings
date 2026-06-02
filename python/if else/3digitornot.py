#write a python program to check whether a number entered is three digit number or not

a=int(input("Enter any num:"))
print("your num is",a)

if a>=100 and a<1000:
    print(a,"have three digit")
elif a<100:
    print(a, "have less than three digit")
elif a>=1000:
    print(a, "have more than three digit")
else:
    print(a, "not have three digit")

