ch=input("enter any character:")
n=ord(ch)
if n>=97 and n<=122:
    n1=n-32
    n2 = chr(n1)
    print(n2)

elif n>=65 and n<=90:
    n1 = n + 32
    n2 = chr(n1)
    print(n2)

elif n>=48 and n<=57:
    print("number")
else:
    print("special symbol")