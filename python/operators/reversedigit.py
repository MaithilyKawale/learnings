print("enter any 4 digit num:")
num=int(input())

num1=num%10
print(num1)

num2=(num%100)//10
print(num2)

num3=(num%1000)//100
print(num3)

num4=(num%10000)//1000
print(num4)

print(num1,num2,num3,num4)