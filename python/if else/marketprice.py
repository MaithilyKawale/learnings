#according the marked price from the user and calculate the net amount as(market price-discount) to pay according to following criteria
#>10000 20%
#>7000 and <=10000      15%
#<=7000      10%

mp=int(input("Enter market price:"))
print("your mp is",mp)

if mp>10000:
    na=mp*(20/100)
    print(na)
elif mp>7000 and mp<=10000:
    na = mp * (15 / 100)
    print(na)
elif mp<=7000:
    na = mp * (10 / 100)
    print(na)
else:
    print("invalid input")
