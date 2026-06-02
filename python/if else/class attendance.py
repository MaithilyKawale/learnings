#accept the following from the user and calculate the percentage of class attended
#total number of working days
#total number of days for absent
#after calculating percentage show that if the percentage is less than 75, than student will not be able to sit in exam

wd=int(input("Enter total num of working days:"))
print("Working days are",wd)

days=int(input("Enter total num of days for absent:"))
print("Days for absent",days)

per=(wd-days)/wd*100
print("Your attendance is",per)

if per<75:
    print("you are not able to sit in exam")
else:
    print("you are able to sit in exam")

