#Check if a number ends with digit 5

num=int(input("enter any number:"))

a=num%10
if a==5:
  print ("last number is 5")
else:
  print("last number is",a)