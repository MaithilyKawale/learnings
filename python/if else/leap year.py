#write a program to check whether an year is leap or not.

year=int(input("Enter any year:"))
print("year is",year)

if year%4==0:
    print(year,"is leap year")
else:
    print(year,"is not leap year")