#accept the age of four people and display the oldest and youngest one


a=int(input("Enter your age:"))
b=int(input("Enter your age:"))
c=int(input("Enter your age:"))
d=int(input("Enter your age:"))
print ("age of a is",a,"age of b is",b,"age of c is",c,"age of d is",d,)

if a>b and a>c and a>d:
    print("a is oldest")
elif a<b and a<c and a<d:
    print("a is youngest")

if b>a and b>c and b>d:
    print("b is oldest")
elif b<a and b<c and b<d:
    print("b is youngest")

if c>b and c>a and c>d:
    print("c is oldest")
elif c<b and c<a and c<d:
    print("c is youngest")

if d>b and d>c and d>a:
    print("d is oldest")
elif d<b and d<c and d<a:
    print("d is youngest")

else:
    print("they are equal")