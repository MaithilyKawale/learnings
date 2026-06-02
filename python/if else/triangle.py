#accept three sides of a triangle and check whether it is an equilateral,isosceles or scalene triangle
#an equilateral triangle is a triangle in which all three sides are equal
#a scalene triangle is a triangle that has three unequal sides
#an isosceles triangle is a triangle with at least two equal sides

s1=int(input("Enter side1:"))

s2=int(input("Enter side2:"))

s3=int(input("Enter side3:"))
print("yorr tringle sides are",s1,s2,s3)

if s1==s2==s3:
    print("triangle is equilaterial")
elif (s1==s2 and s1!=s3) or (s3==s2 and s1!=s2) or (s1==s3 and s1!=s2) :
    print("triangle is isosceles")
elif s1!=s2!=s3:
    print("triangle is scalene")