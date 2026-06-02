#wite a program to accept a number from 1 to 7 and display the name of the day like 1 for sunday,2 for monday and so on.
day=int(input("Enter day num from 1 to 7 only:"))
print("the day num is",day)

if day==1:
    print("Sunday")
elif day==2:
    print("Monday")
elif day==3:
    print("Tuesday")
elif day==4:
    print("Wednesday")
elif day==5:
    print("Thursday")
elif day==6:
    print("Friday")
elif day==7:
    print("Sunday")
elif day>7 or day<1:
    print("invalid input")


