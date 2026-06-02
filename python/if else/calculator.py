a=int(input("Enter value1:"))
b=int(input("Enter value2:"))
opr=(input("enter operator:"))

if opr == "+":
    print(a+b)
elif opr == "-":
    print(a - b)
elif opr == "*":
    print(a * b)
elif opr == "/":
    print(a / b)
else:
    print("invalid input")