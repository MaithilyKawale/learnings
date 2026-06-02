#accept three numbers from user and display the second largest number
a=int(input("Enter num1:"))
b=int(input("Enter num2:"))
c=int(input("Enter num3:"))

if a>b and a<c:
    print("a is greater")
elif b<c and b>a:
    print("b is greater")
elif c>a and c<b:
    print("c is greater")

