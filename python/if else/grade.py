#write a program to accept percentage from the user and display the grade according to the following criteria
#>90  A
#>80  <=90 B
#>=60 <=80 C
#below 60

marks=int(input("Enter your marks out of range 100 only:"))
print("your marks is",marks)

if marks<=100 and marks>90:
    print("you got A grade")
elif marks>80 and marks<=90:
    print("you got B grade")
elif marks>=60 and marks<=80:
    print("you got C grade")
elif marks<60:
    print("you are fail")
else:
    print("wrong input")