sal=int(input("enter salary:"))
if(sal>0 and sal<=150000):
    print("no tax")

elif (sal>150000 and sal<=300000):
    tax = 0.1 * sal;
    print("tax is",tax)

elif (sal > 300000 and sal <= 500000):
    tax = 0.2 * sal;
    print("Tax is ", tax)

else:
    tax = 0.3 * sal;
    print("Tax is", tax)