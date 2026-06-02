#accept the age,sex(M,F) number of days and display the wages according
#>=18   and  <30  M  700
#   F  750
#>=30 and <=40  M  800
# F  850

age=int(input("Enter your age:"))
sex=str(input("Enter your gender:"))
day=int(input("Enter your wages days:"))
print(age,sex,day)

if age>=18 and age<30 and sex.upper() == "MALE":
    amt = day*700
    print("total wages is:", amt)
elif age>=18 and age<30 and sex.upper() == "FEMALE":
    amt = day*750
    print("total wages is:", amt)
elif age>=30 and age<=40 and sex.upper() == "MALE":
    amt = day*800
    print("total wages is:", amt)
elif age>=30 and age<=40 and sex.upper() == "FEMALE":
    amt = day*850
    print("total wages is:", amt)
else:
    print("invalid input")

