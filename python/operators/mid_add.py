print("enter any 4 digit num:")
num=int(input())

num1=num%100
num1=num1//10
print(num1)

num2=num//100
num2=num2%10
print(num2)

add=num1+num2
print(add)