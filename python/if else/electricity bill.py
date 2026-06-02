#write a program to calculate the electricity bill(accept number of unit from user) according to the following criteria
#first 100unit no charge
#next 100 unit rs 5 per unit
#next 200 unit rs 10 per unit

unit=int(input("Enter unit:"))
print("Unit is",unit)

if unit>=0 and unit<100:
    print("no charge")
elif unit>=100 and unit<200:
    unit1=(unit-100)*5    #unit-1 isliye qki only extra unit lega
    print("amount to pay is",unit1)
elif unit>=200:
    unit2=500+(unit-200)*10
    print("amount to pay is",unit2)


