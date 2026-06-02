def caltax():
    sal = int(input("Enter your salary: "))

    if sal >= 1 and sal <= 700000:
        tax = 0
        print("No tax")
    elif sal > 700000 and sal <= 1500000:
        tax = sal * (10 / 100)
        print("Pay tax of Rs", tax)
    elif sal > 1500000:
        tax = sal * (20 / 100)
        print("Pay tax of Rs", tax)

def calbonus():
    sal = int(input("Enter your salary: "))
    exp = int(input("Enter your experience in years: "))

    if 1 <= exp <= 3:
        bonus = sal * (5 / 100)
        print("Your bonus is", bonus)
    elif 4 <= exp <= 5:
        bonus = sal * (10 / 100)
        print("Your bonus is", bonus)
    elif exp > 5:
        bonus = sal * (15 / 100)
        print("Your bonus is", bonus)

def main():
    n = int(input("Enter 1 for Tax or 2 for Bonus: "))
    if n == 1:
        caltax()
    elif n == 2:
        calbonus()
    else:
        print("Invalid option")

main()




