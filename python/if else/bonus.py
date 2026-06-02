#A company decided to give bonus to employee according to following criteria
#more than 10 years  10%
#>=6 and <=10   8%
#less than 6 years     5%
#ask user for their salary and years of service and print the net bonus amount

year=int(input("Enter num of year you worked:"))
print("you have worked",year,"years")

sal=int(input("Enter your salary:"))
print("your salary is",sal)

if year>=10:
    bonus=(10/100)*sal
    print(bonus)
elif year>=6 and year<=10:
    bonus = (8 / 100) * sal
    print(bonus)
elif year<6:
    bonus = (5 / 100) * sal
    print(bonus)




