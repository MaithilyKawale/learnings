#accept the number of days from the user and calculate the charge for library according to following
#till 5 days       2rs
#6 to 10 days        3rs
#11 to 15 days  4rs
#after 15days  5rs

days=int(input("enter the number of days:"))

if days>0 and days<=5 :
    charge=days*2
    print("amount will",charge)
elif days>=6 and days<=10:
    charge = days * 3
    print("amount will",charge)
elif days>=11 and days<=15:
    charge = days * 4
    print("amount will",charge)
elif days<15:
    charge = days * 5
    print("amount will",charge)