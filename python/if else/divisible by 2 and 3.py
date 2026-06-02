#write a python program to check whether a number entered is  divisible by 2 and 3 both

a=int(input("Enter any num:"))
print("your num is",a)

if a%2==0 and a%3==0:
    print(a,"is divisible by both 2 and 3")
else:
    print(a,"is not divisible by both 2 and 3")