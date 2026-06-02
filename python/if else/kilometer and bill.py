#accept the kilometer covered and calculate the bill acc to following rate
#first 10 km     11rs
#next 90km    10rs
#above that      9rs

km=int(input("enter kilometr:"))

if km>0 and km<=10:
    bill=km*11
    print("your bill is",bill)
elif km>=11 and km<=90:
    bill=km*10
    print("your bill is",bill)
elif km>90:
    bill=km*9
    print("your bill is",bill)
