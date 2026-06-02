#wite a program to accept a number from 1 to 12 and display the name of month and days in that month like 1 for january and number of days 31 and so on

month=int(input("Enter month num from 1 to 12 only:"))
print("the month num is",month)

if month==1:
    print("January and num of days is 31")
elif month==2:
    print("February")
elif month==3:
    print("March and num of days is 31")
elif month==4:
    print("April and num of days is 30")
elif month==5:
    print("May and num of days is 31")
elif month==6:
    print("June and num of days is 30")
elif month==7:
    print("July and num of days is 31")
elif month==8:
    print("August and num of days is 31")
elif month==9:
    print("September and num of days is 30")
elif month==10:
    print("October and num of days is 31")
elif month==11:
    print("November and num of days is 30")
elif month==12:
    print("December and num of days is 31")
elif month>12 or month<1:
    print("invalid input")