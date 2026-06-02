#accept three sides of triangle and check whether the triangle is possible or not
#triangle is possible only when sum of any two sides is greater than 3rd side

a=int(input("Enter side1:"))
b=int(input("Enter side2:"))
c=int(input("Enter side3:"))

if a+b>c or a+c>b or b+c>a :
    print("triangle is possible")
else:
    print("not possible")