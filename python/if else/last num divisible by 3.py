#write a program to check whether the last digit of a num is divisible by 3 or not

num=int(input("Enter any num:"))
num2=num%10
print("last digit of num is",num2)

if num2%3==0:
    print(num2,"is divisible by 3")
else:
    print(num2, "is not divisible by 3")