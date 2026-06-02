#write a program to accept the cost price of a bike and display the road tax to be paid according to the following criteria
#>100000  15% tax
#>50000 <=100000   10% tax
#<=50000     5%tax

cost_price=int(input("Enter your price of bike:"))
print("your bikes price is",cost_price)

if cost_price>100000:
    tax=(15/100)*cost_price
    print("your tax is",tax)
elif cost_price>50000 and cost_price<=100000:
    tax = (10 / 100) * cost_price
    print("your tax is",tax)
elif cost_price<=50000:
    tax = (5 / 100) * cost_price
    print("your tax is",tax)