#Check if year is a century year

year=int(input("enter year:"))

if year%100==0:
    print(year,"is century year")
else:
     print(year,"is not century year")